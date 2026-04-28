

    class Solution
{
public:
  bool checkTree(TreeNode *root)
  {
    if (!root)
      return true;
    if (!root->left && !root->right)
      return true;

    int childSum = 0;
    if (root->left)
      childSum += root->left->val;
    if (root->right)
      childSum += root->right->val;

    return (childSum == root->val) && (checkTree(root->left)) && (checkTree(root->right));
  }
};