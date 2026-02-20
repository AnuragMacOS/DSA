class Solution
{
public:
    int countSubarrays(vector<int> &nums, int maxSum)
    {
        int n = nums.size();
        int subArrayCnt = 1;
        long long subArraySum = 0;
        for (int i = 0; i < n; i++)
        {
            if (subArraySum + nums[i] <= maxSum)
            {
                subArraySum += nums[i];
            }
            else
            {
                subArrayCnt += 1;
                subArraySum = nums[i];
            }
        }
        return subArrayCnt;
    }

    int splitArray(vector<int> &nums, int k)
    {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int total = countSubarrays(nums, mid);
            if (total > k)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return low;
    }
};