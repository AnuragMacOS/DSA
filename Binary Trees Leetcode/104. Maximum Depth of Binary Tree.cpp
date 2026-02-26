class Solution
{
public:
    int maxDepth(TreeNode *root)
    {

        if (root == nullptr)
            return 0;

        int leftH = maxDepth(root->left);
        int rightH = maxDepth(root->right);

        return 1 + max(leftH, rightH);
    }
};