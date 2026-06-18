class Solution
{
public:
  int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                   pair<int, int> destination)
  {

    if (source == destination)
      return 0;
    queue<pair<int, pair<int, int>>> q;
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    dist[source.first][source.second] = 0;
    q.push({0, {source.first, source.second}});

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
      auto it = q.front();
      q.pop();

      int dis = it.first;
      int r = it.second.first;
      int c = it.second.second;

      for (int i = 0; i < 4; i++)
      {
        int newRow = r + drow[i];
        int newCol = c + dcol[i];

        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
            grid[newRow][newCol] == 1 && dis + 1 < dist[newRow][newCol])
        {

          dist[newRow][newCol] = dis + 1;

          if (newRow == destination.first && newCol == destination.second)
          {
            return dis + 1;
          }
          q.push({dis + 1, {newRow, newCol}});
        }
      }
    }
    return -1;
  }
};
