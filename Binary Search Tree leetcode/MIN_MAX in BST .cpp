MIN / MAX in BST

    class Solution
{
public:
  int minValue(Node *root)
  {
    if (root == NULL)
      return -1;
    while (root != NULL && root->left != NULL)
    {
      root = root->left;
    }
    return root->data;
  }
};

class Solution
{
public:
  int maxValue(Node *root)
  {
    if (root == NULL)
      return -1;
    while (root != NULL && root->right != NULL)
    {
      root = root->right;
    }
    return root->data;
  }
};