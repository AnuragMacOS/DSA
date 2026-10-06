class Solution
{
public:
  int minimumLevels(vector<int> &nums)
  {
    int n = nums.size();
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == 1)
        total++;
      else
        total--;
    }
    int psum = 0;
    for (int i = 0; i < n - 1; i++)
    {
      if (nums[i] == 1)
        psum++;
      else
        psum--;
      int ssum = total - psum;
      if (psum > ssum)
        return i + 1;
    }
    return -1;
  }
