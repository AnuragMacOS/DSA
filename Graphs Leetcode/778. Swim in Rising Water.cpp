class Solution
{
public:
  int swimInWater(vector<vector<int>> &grid)
  {
    priority_queue<pair<int, pair<int, int>>,
                   vector<pair<int, pair<int, int>>>,
                   greater<pair<int, pair<int, int>>>>
        pq;

    int n = grid.size();
    vector<vector<int>> dist(n, vector<int>(n, 1e9));

    dist[0][0] = grid[0][0]; // cost to stand at(0,0)
    pq.push({grid[0][0], {0, 0}});

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    while (!pq.empty())
    {

      auto it = pq.top();
      pq.pop();

      int elevation = it.first;
      int row = it.second.first;
      int col = it.second.second;

      if (row == n - 1 && col == n - 1)
        return elevation;

      for (int i = 0; i < 4; i++)
      {
        int newRow = row + drow[i];
        int newCol = col + dcol[i];

        if (newRow >= 0 && newCol >= 0 && newRow < n && newCol < n)
        {
          int NewElevation = max(grid[newRow][newCol], elevation);

          if (NewElevation < dist[newRow][newCol])
          {
            dist[newRow][newCol] = NewElevation;
            pq.push({NewElevation, {newRow, newCol}});
          }
        }
      }
    }
    return -1;
  }
};