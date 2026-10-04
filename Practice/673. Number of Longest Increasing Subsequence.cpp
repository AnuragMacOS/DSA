class Solution
{
public:
  int findNumberOfLIS(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> dp(n, 1), cnt(n, 1);
    int maxi = 1;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {

        if (nums[j] < nums[i] && 1 + dp[j] > dp[i])
        {
          dp[i] = 1 + dp[j];

          cnt[i] = cnt[j]; // Inherit the cnt
        }
        else if (nums[j] < nums[i] && 1 + dp[j] == dp[i])
        {
          // Another LIS of same len
          cnt[i] += cnt[j];
        }
      }
      maxi = max(maxi, dp[i]);
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
      if (dp[i] == maxi)
      {
        num += cnt[i];
      }
    }
    return num;
  }
};
