class Solution
{
public:
    int upto(vector<int> &nums, int goal)
    {
        int n = nums.size();
        int l = 0, r = 0, cnt = 0, sum = 0;
        if (goal < 0)
            return 0;
        while (r < n)
        {
            sum += nums[r];
            while (sum > goal)
            {
                sum = sum - nums[l];
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        // main motive is to find sunarray with sum equal to goal,
        // so for that first we find subarray sum<=goal then subarray < goal
        //  so --> (<=) - (<) gives =
        return upto(nums, goal) - upto(nums, goal - 1);
    }
};