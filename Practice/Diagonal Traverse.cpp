class Solution
{
public:
  vector<int> findDiagonalOrder(vector<vector<int>> &mat)
  {
    int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;
    int row = 0, col = 0;
    int dir = 1;

    for (int i = 0; i < n * m; i++)
    {
      ans.push_back(mat[row][col]);
      if (dir > 0)
      {
        if (col == m - 1)
        {
          dir = dir * -1;
          row++;
        }
        else if (row == 0)
        {
          dir = dir * -1;
          col++;
        }
        else
        {
          row--;
          col++;
        } // up-> row==0 or col==m
      }
      else
      {
        if (row == n - 1)
        {
          dir = dir * -1;
          col++;
        }
        else if (col == 0)
        {
          dir = dir * -1;
          row++;
        }
        else
        {
          col--;
          row++;
        } // down-> row==n or col==0
      }
    }
    return ans;
  }
};
