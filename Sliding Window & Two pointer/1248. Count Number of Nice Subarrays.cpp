class Solution
{
public:
    int nice(vector<int> &nums, int k)
    {
        int l = 0, r = 0, sum = 0, cnt = 0;
        int n = nums.size();

        if (k < 0)
            return 0;

        while (r < n)
        {
            sum += nums[r] % 2;
            while (sum > k)
            {
                sum -= nums[l] % 2;
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return nice(nums, k) - nice(nums, k - 1);
    }
};