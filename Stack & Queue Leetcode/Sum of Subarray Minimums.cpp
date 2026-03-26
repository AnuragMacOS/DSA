class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        long long mod = 1e9 + 7;

        vector<int> psee(n);
        vector<int> nse(n);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()] > arr[i])
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
            st.pop(); // getting ready to find NSE

        for (int i = n - 1; i >= 0; --i)
        {
            while (!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();
            st.push(i);
        }
        long long total = 0;
        for (int i = 0; i < n; ++i)
        {
            long long left = i - psee[i];
            long long right = nse[i] - i;

            long long contribution = (left * right % mod * arr[i]) % mod;
            total = (total + contribution) % mod;
        }
        return total;
    }
};