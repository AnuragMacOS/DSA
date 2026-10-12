class Solution
{
public:
  int numOfPairs(vector<string> &nums, string target)
  {
    unordered_map<string, int> freq;
    for (auto &x : nums)
      freq[x]++;

    int cnt = 0;
    for (auto &x : nums)
    {
      // Check if target starts with x
      if (target.find(x) == 0)
      {
        string suffix = target.substr(x.size());
        if (freq.count(suffix))
        {
          cnt += freq[suffix];
          if (suffix == x)
            cnt--; // avoid using same index twice
        }
      }
    }
    return cnt;
  }
};
