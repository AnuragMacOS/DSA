class Solution
{
public:
  int minSubarray(vector<int> &nums, int p)
  {
    int n = nums.size(), ans = INT_MAX;
    long long total = accumulate(nums.begin(), nums.end(), 0LL);
    int k = total % p;
    if (k == 0)
      return 0;
    unordered_map<int, int> mp;
    mp[0] = -1;

    long long psum = 0;

    for (int i = 0; i < n; i++)
    {
      psum = (psum + nums[i]) % p;
      long long need = (psum - k + p) % p;
      if (mp.find(need) != mp.end())
      {
        ans = min(i - mp[need], ans);
      }
      mp[psum] = i;
    }

    if (ans == n || ans == INT_MAX)
      return -1;
    return ans;
  }
};
