class Solution
{
public:
  int shortestPathBinaryMatrix(vector<vector<int>> &grid)
  {
    int n = grid.size();

    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
      return -1;

    queue<pair<int, pair<int, int>>> q;
    vector<vector<int>> distance(n, vector<int>(n, 1e9));
    distance[0][0] = 1;
    q.push({1, {0, 0}}); // since we need ToGet no.of nodes(so count start point(1)too)

    int drow[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dcol[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    while (!q.empty())
    {
      auto it = q.front();
      q.pop();

      int dis = it.first;
      int row = it.second.first;
      int col = it.second.second;

      if (row == n - 1 && col == n - 1)
        return dis;

      for (int i = 0; i < 8; i++)
      {
        int newRow = row + drow[i];
        int newCol = col + dcol[i];

        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n &&
            grid[newRow][newCol] == 0 && dis + 1 < distance[newRow][newCol])
        {

          distance[newRow][newCol] = dis + 1;
          q.push({dis + 1, {newRow, newCol}});
        }
      }
    }
    return -1;
  }
};