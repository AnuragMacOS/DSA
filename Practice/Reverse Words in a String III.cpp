class Solution
{
public:
  string reverseWords(string s)
  {
    string ans = "";
    stringstream ss(s);
    string it = "";

    while (getline(ss, it, ' '))
    {
      reverse(it.begin(), it.end());
      ans += it + ' ';
    }
    ans.pop_back();
    return ans;
  }
};
