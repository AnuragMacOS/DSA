class Solution
{
public:
  int networkDelayTime(vector<vector<int>> &times, int n, int k)
  {
    vector<vector<pair<int, int>>> adj(n + 1);
    for (auto it : times)
    {
      adj[it[0]].push_back({it[1], it[2]});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    vector<int> dist(n + 1, INT_MAX);
    dist[k] = 0;
    pq.push({0, k});

    while (!pq.empty())
    {
      auto it = pq.top();
      pq.pop();

      int time = it.first;
      int node = it.second;

      if (time > dist[node])
        continue;

      for (auto iter : adj[node])
      {
        int adjNode = iter.first;
        int edgeW = iter.second;

        if (time + edgeW < dist[adjNode])
        {
          dist[adjNode] = time + edgeW;
          pq.push({time + edgeW, adjNode});
        }
      }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
      if (dist[i] == INT_MAX)
      {
        return -1;
      }
      ans = max(ans, dist[i]);
    }
    return ans;
  }
};