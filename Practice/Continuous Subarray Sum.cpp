 class Solution
{
public:
  bool checkSubarraySum(vector<int> &nums, int k)
  {
    int n = nums.size();
    unordered_map<int, int> mp;

    mp[0] = -1;
    int psum = 0;

    for (int i = 0; i < n; i++)
    {
      psum += nums[i];
      int req = psum % k;
      if (mp.find(req) != mp.end())
      {

        int len = i - mp[req];
        if (len >= 2)
        {
          return true;
        }
      }
      else
        mp[req] = i; // else is imp update when not in map ortherwise it
                     // reduces the length
    }
    return false;
  }
};
