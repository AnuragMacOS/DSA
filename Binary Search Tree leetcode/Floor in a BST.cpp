Floor in a BST

    class Solution
{
public:
  int findFloor(Node *root, int x)
  {
    int floor = -1;
    while (root != NULL)
    {
      if (root->data == x)
      {
        floor = root->data;
        return floor;
      }
      if (x > root->data)
      {
        floor = root->data;
        root = root->right;
      }
      else
      {
        root = root->left;
      }
    }
    return floor;
  }
};