class Solution
{
public:
  vector<string> buildArray(vector<int> &nums, int n)
  {
    int m = nums.size();
    int cnt = 1;
    int k = nums[m - 1];
    vector<string> ans;
    for (int i = 0; i < m;)
    {
      if (nums[i] == cnt)
      {
        ans.push_back("Push");
        i++;
      }
      else
      {
        ans.push_back("Push");
        ans.push_back("Pop");
      }
      cnt++;
    }
    return ans;
  }
};
