class Solution
{
public:
  vector<int> maxDepthAfterSplit(string s)
  {
    int n = s.size();
    vector<int> ans;
    int depth = 0;
    for (auto ch : s)
      if (ch == '(')
      {
        depth++;
        ans.push_back(depth % 2);
      }
      else
      {
        ans.push_back(depth % 2);
        depth--;
      }
    return ans;
  }
};
