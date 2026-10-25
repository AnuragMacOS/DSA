 class Solution
{
public:
  int compress(vector<char> &chars)
  {
    int n = chars.size();
    int l = 0, r = 0;
    int cnt = 1;
    while (r < chars.size())
    {
      int start = r;
      while (r < n && chars[r] == chars[start])
      {
        r++;
      }
      cnt = r - start;
      chars[l] = chars[start];
      l++;
      if (cnt > 1)
      {
        string nums = to_string(cnt);
        for (auto it : nums)
        {
          chars[l] = it;
          l++;
        }
      }
    }

    return l;
  }
};
