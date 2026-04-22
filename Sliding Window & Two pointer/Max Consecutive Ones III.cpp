class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int left = 0, right = 0, zeroes = 0, maxlen = 0;
        int n = nums.size();

        while (right < n)
        {
            if (nums[right] == 0)
                zeroes++;
            if (zeroes > k)
            {
                if (nums[left] == 0)
                {
                    zeroes--;
                }
                left++;
            }
            if (zeroes <= k)
            {
                int len = right - left + 1;
                maxlen = max(maxlen, len);
            }
            right++;
        }
        return maxlen;
    }
};