class Solution
{
public:
    bool possible(vector<int> &bloomDay, int day, int r, int b)
    {
        int n = bloomDay.size();
        int cnt = 0, noOfBouq = 0;
        for (int i = 0; i < n; i++)
        {
            if (bloomDay[i] <= day)
                cnt++;
            else
            {
                noOfBouq += (cnt / b);
                cnt = 0;
            }
        }
        noOfBouq += (cnt / b);

        return noOfBouq >= r;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();
        long long val = 1LL * m * k; // for checking if M*k>n or nah
        if (val > n)
            return -1; // no. of flowers required greater than available
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k))
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return low;
    }
};