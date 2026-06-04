//Cycle Detection in Directed Graph(DFS) 

class Solution
{
public:
  bool dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &pathVis, stack<int> &st)
  {
    vis[node] = 1;
    pathVis[node] = 1;

    for (auto it : adj[node])
    {
      if (!vis[it])
      {
        if (dfs(it, adj, vis, pathVis, st))
          return true;
      }
      else if (pathVis[it])
      {
        return true; // cycle detected
      }
    }

    pathVis[node] = 0;
    st.push(node);
    return false;
  }

  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
  {
    vector<vector<int>> adj(numCourses);

    // Build graph
    for (auto &p : prerequisites)
    {
      adj[p[1]].push_back(p[0]);
    }

    vector<int> vis(numCourses, 0), pathVis(numCourses, 0);
    stack<int> st;

    // DFS for all nodes
    for (int i = 0; i < numCourses; i++)
    {
      if (!vis[i])
      {
        if (dfs(i, adj, vis, pathVis, st))
        {
          return {}; // cycle → no valid order
        }
      }
    }

    // Build result from stack
    vector<int> ans;
    while (!st.empty())
    {
      ans.push_back(st.top());
      st.pop();
    }

    return ans;
  }
};