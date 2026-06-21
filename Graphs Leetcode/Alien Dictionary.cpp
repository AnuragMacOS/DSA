class Solution
{
private:
  vector<int> topoSort(int V, vector<int> adj[])
  {
    vector<int> indegree(V, 0);

    for (int i = 0; i < V; i++)
    {
      for (auto it : adj[i])
      {
        indegree[it]++;
      }
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
      if (indegree[i] == 0)
      {
        q.push(i);
      }
    }

    vector<int> topo;
    while (!q.empty())
    {
      int node = q.front();
      q.pop();

      topo.push_back(node);

      for (auto it : adj[node])
      {
        indegree[it]--;

        if (indegree[it] == 0)
        {
          q.push(it);
        }
      }
    }
    return topo;
  }

public:
  string findOrder(vector<string> &dict)
  {
    unordered_set<char> st;

    for (auto &word : dict)
    {
      for (auto ch : word)
      {
        st.insert(ch);
      }
    }
    int K = st.size();
    int N = dict.size();

    unordered_map<char, int> mp;
    vector<char> rev(K);

    int idx = 0;

    for (auto ch : st)
    {
      mp[ch] = idx;
      rev[idx] = ch;
      idx++;
    }

    vector<int> adj[K];

    for (int i = 0; i < N - 1; i++)
    {
      string s1 = dict[i];
      string s2 = dict[i + 1];

      int len = min(s1.size(), s2.size());
      int ptr;
      for (ptr = 0; ptr < len; ptr++)
      {
        if (s1[ptr] != s2[ptr])
        {
          adj[mp[s1[ptr]]].push_back(mp[s2[ptr]]);
          break;
        }
      }
      // Invalid prefix case
      if (ptr == len && s1.size() > s2.size())
      {
        return "";
      }
    }
    vector<int> topo = topoSort(K, adj);
    if (topo.size() != K)
    {
      return "";
    }

    string ans = "";
    for (auto it : topo)
    {
      ans += rev[it];
    }

    return ans;
  }
};