98. Validate Binary Search Tree

    class Solution
{
public:
  bool isValidBST(TreeNode *root)
  {
    return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
  }

private:
  bool isValidBSTHelper(TreeNode *root, long minVal, long maxVal)
  {
    if (root == nullptr)
    {
      return true;
    }
    if (root->val >= maxVal || root->val <= minVal)
    {
      return false;
    }
    return isValidBSTHelper(root->left, minVal, root->val) &&
           isValidBSTHelper(root->right, root->val, maxVal);
  }
};