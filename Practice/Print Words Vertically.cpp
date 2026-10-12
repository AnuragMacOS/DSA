class Solution
{
public:
  vector<string> printVertically(string s)
  {
    stringstream ss(s);
    int maxi = 0;
    string it = "";
    vector<string> arr;
    vector<string> ans;
    while (getline(ss, it, ' '))
      arr.push_back(it);
    for (auto t : arr)
      maxi = max(maxi, (int)t.size());
    for (int i = 0; i < maxi; i++)
    {
      string line = "";
      for (auto word : arr)
      {
        if (i < word.size())
        {
          line += word[i];
        }
        else
        {
          line += ' ';
        }
      }
      for (int j = line.size() - 1; j >= 0; j--)
      {
        if (line[j] == ' ')
          line.pop_back();
        else
          break;
      }
      ans.push_back(line);
    }
    return ans;
  }
};
