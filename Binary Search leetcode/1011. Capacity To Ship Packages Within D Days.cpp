1011. Capacity To Ship Packages Within D Days

    class Solution
{
public:
    long long finddays(vector<int> &weights, int capacity)
    {
        int days = 1, load = 0;
        int n = weights.size();
        for (int i = 0; i < n; i++)
        {
            if (load + weights[i] > capacity)
            {
                days += 1;
                load = weights[i];
            }
            else
                load += weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int low = *max_element(weights.begin(), weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high)
        {
            int mid = (low + high) / 2;
            long long noOfdays = finddays(weights, mid);
            if (noOfdays <= days) // this means we're able to transfer the product
            // in very few days which indicates the capacity of our ship is very
            // high ,but we need to find least capacity right! thus shrink the space
            {
                high = mid - 1;
            }
            else
            { // means no.ofdays is greater than given days so increase capacity-->mid
                low = mid + 1;
            }
        }
        return low;
    }
};