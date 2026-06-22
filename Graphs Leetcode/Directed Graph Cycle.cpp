class Solution
{
private:
  bool CheckCycle(int node, vector<vector<int>> &adj,
                  vector<int> &vis, vector<int> &dfsvis)
  {
    vis[node] = 1;
    dfsvis[node] = 1;

    for (auto it : adj[node])
    {
      if (!vis[it])
      {
        if (CheckCycle(it, adj, vis, dfsvis))
          return true;
      }
      else if (dfsvis[it])
      {
        return true;
      }
    }
    dfsvis[node] = 0;
    return false;
  }

public:
  bool isCyclic(int V, vector<vector<int>> &edges)
  {
    vector<vector<int>> adj(V);
    for (auto &e : edges)
    {
      adj[e[0]].push_back(e[1]);
    }
    vector<int> vis(V, 0);
    vector<int> dfsvis(V, 0);

    for (int i = 0; i < V; i++)
    {
      if (!vis[i])
      {
        if (CheckCycle(i, adj, vis, dfsvis))
        {
          return true;
        }
      }
    }
    return false;
  }
};