class Solution
{
public:
  string reverseVowels(string s)
  {
    int l = 0;
    int r = s.size() - 1;
    unordered_set<char> st = {'a', 'e', 'i', 'o', 'u',
                              'A', 'E', 'I', 'O', 'U'};

    while (l < r)
    {
      while (l < r && st.find(s[r]) == st.end())
      {
        r--;
      }

      while (l < r && st.find(s[l]) == st.end())
      {
        l++;
      }

      swap(s[r], s[l]);
      l++;
      r--;
    }
    return s;
  }
};
