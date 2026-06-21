class Solution
{
public:
  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
  {
    vector<vector<int>> adj(numCourses);
    vector<int> indegree(numCourses, 0);

    for (auto &p : prerequisites)
    {
      adj[p[1]].push_back(p[0]);
      indegree[p[0]]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; i++)
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
    if (topo.size() == numCourses)
    {
      return topo;
    }
    return {};
  }
};