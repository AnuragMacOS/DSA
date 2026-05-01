230. Kth Smallest Element in a BST

    class Solution
{
public:
  int kthSmallest(TreeNode *root, int k)
  {
    int cnt = 0;
    int ans = -1;
    TreeNode *curr = root;

    while (curr != NULL)
    {
      if (curr->left == NULL)
      {
        cnt++;
        if (cnt == k)
          ans = curr->val;
        curr = curr->right;
      }
      else
      {
        TreeNode *prev = curr->left;
        while (prev->right && prev->right != curr)
        {
          prev = prev->right;
        }

        if (prev->right == NULL)
        {
          prev->right = curr;
          curr = curr->left;
        }
        else
        {
          prev->right = NULL; // restoring the tree.
          cnt++;
          if (cnt == k)
            ans = curr->val;

          curr = curr->right;
        }
      }
    }
    return ans;
  }
};