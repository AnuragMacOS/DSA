222. Count Complete Tree Nodes

    class Solution
{
public:
  int getLeftNodes(TreeNode *root)
  {
    TreeNode *temp = root;
    int lh = 0;
    while (temp != NULL)
    {
      temp = temp->left;
      lh++;
    }
    return lh;
  }
  int getRightNodes(TreeNode *root)
  {
    TreeNode *temp = root;
    int rh = 0;
    while (temp != NULL)
    {
      temp = temp->right;
      rh++;
    }
    return rh;
  }
  int countNodes(TreeNode *root)
  {
    if (root == NULL)
      return 0;

    int lh = getLeftNodes(root);
    int rh = getRightNodes(root);

    if (lh == rh)
    {
      return (pow(2, lh)) - 1;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
  }
};