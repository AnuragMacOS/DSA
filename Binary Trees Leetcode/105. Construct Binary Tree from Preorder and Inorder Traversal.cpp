105. Construct Binary Tree from Preorder and Inorder Traversal

    class Solution
{
public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
  {
    map<int, int> inMap;
    int n = preorder.size(), m = inorder.size();
    for (int i = 0; i < m; i++)
    {
      inMap[inorder[i]] = i;
    }
    TreeNode *root = constructTree(preorder, 0, n - 1, inorder, 0, m - 1, inMap);
    return root;
  }
  TreeNode *constructTree(vector<int> &preorder, int preStart, int preEnd,
                          vector<int> &inorder,
                          int inStart, int inEnd, map<int, int> &inMap)
  {

    if (preStart > preEnd || inStart > inEnd)
      return NULL;
    TreeNode *root = new TreeNode(preorder[preStart]);

    // Find where the root sits in the Inorder array
    int inRoot = inMap[root->val];
    int numsLeft = inRoot - inStart;

    // preorder(Root left right)
    root->left = constructTree(preorder, preStart + 1, preStart + numsLeft,
                               inorder, inStart, inRoot - 1, inMap);
    root->right = constructTree(preorder, preStart + numsLeft + 1, preEnd,
                                inorder, inRoot + 1, inEnd, inMap);

    return root;
  }
};