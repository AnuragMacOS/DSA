int findWays(vector<int> &num, int tar)
{
  int n = num.size();
  int MOD = 1e9 + 7;

  vector<vector<int>> dp(n, vector<int>(tar + 1, 0));

  if (num[0] == 0)
    dp[0][0] = 2;
  else
  {
    dp[0][0] = 1;

    if (num[0] <= tar)
      dp[0][num[0]] = 1;
  }

  for (int ind = 1; ind < n; ind++)
  {
    for (int sum = 0; sum <= tar; sum++)
    {
      int notTake = dp[ind - 1][sum];
      int take = 0;

      if (num[ind] <= sum)
        take = dp[ind - 1][sum - num[ind]];

      dp[ind][sum] = (notTake + take) % MOD;
    }
  }

  return dp[n - 1][tar];
}
