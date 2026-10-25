class Solution
{
public:
  string convert(string s, int numRows)
  {
    if (numRows == 1)
      return s;
    vector<vector<char>> mat(numRows);
    string ans = "";
    int dir = -1;
    int i = 0;
    for (auto ch : s)
    {
      mat[i].push_back(ch);
      if (i == 0 || i == numRows - 1)
        dir = dir * -1;
      if (dir > 0)
        i++;
      else
        i--;
    }
    for (auto row : mat)
    {
      for (auto it : row)
      {
        ans += it;
      }
    }
    return ans;
  }
};
