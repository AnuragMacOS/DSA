class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> psee(n), nse(n), pgee(n), nge(n);
        stack<int> st;

        // psee -->previous smaller element or equal
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }
            if (st.empty())
                psee[i] = -1;
            else
                psee[i] = st.top();

            st.push(i);
        }
        while (!st.empty())
            st.pop();

        // nse-->next smaller element
        for (int i = n - 1; i >= 0; --i)
        {
            while (!st.empty() && nums[st.top()] > nums[i])
            {
                st.pop();
            }
            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();

            st.push(i);
        }

        while (!st.empty())
            st.pop();

        // pgee--> previous greater element or equal
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && nums[st.top()] <= nums[i])
            {
                st.pop();
            }
            if (st.empty())
                pgee[i] = -1;
            else
                pgee[i] = st.top();

            st.push(i);
        }
        while (!st.empty())
            st.pop();

        // nge-->next greater element
        for (int i = n - 1; i >= 0; --i)
        {
            while (!st.empty() && nums[st.top()] < nums[i])
            {
                st.pop();
            }
            if (st.empty())
                nge[i] = n;
            else
                nge[i] = st.top();

            st.push(i);
        }
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            long minContribution = long(i - psee[i]) * (nse[i] - i) * nums[i];
            long maxContribution = long(i - pgee[i]) * (nge[i] - i) * nums[i];
            total += maxContribution - minContribution;
        }
        return total;
    }
};