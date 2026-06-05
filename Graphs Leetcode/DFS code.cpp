class Solution
{
private:
  void dfsOfGraph(int node, vector<vector<int>> &adj,
                  vector<int> &vis, vector<int> &ls)
  {
    vis[node] = 1;
    ls.push_back(node);

    for (auto it : adj[node])
    {
      if (!vis[it])
      {
        dfsOfGraph(it, adj, vis, ls);
      }
    }
  }

public:
  vector<int> dfs(vector<vector<int>> &adj)
  {
    int n = adj.size();
    vector<int> vis(n, 0);

    int start = 0;
    vector<int> ls;

    dfsOfGraph(start, adj, vis, ls);
    return ls;
  }
};