class Solution
{
public:
  int longestValidParentheses(string s)
  {

    int n = s.size(), l = 0, r = 0, maxi = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '(')
        l++;
      else
        r++;
      if (l == r)
        maxi = max(maxi, r * 2);
      if (r > l)
        l = r = 0;
    }

    l = 0, r = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] == '(')
        l++;
      else
        r++;
      if (l == r)
        maxi = max(maxi, l * 2);
      if (l > r)
        l = r = 0;
    }
    return maxi;
  }
};