class Solution
{
public:
    void totalPaths(vector<string> &ans, TreeNode *root, string paths)
    {

        if (root->left == nullptr && root->right == nullptr)
        {
            ans.push_back(paths);
            return;
        }
        if (root->left)
            totalPaths(ans, root->left, paths + "->" + to_string(root->left->val));

        if (root->right)
            totalPaths(ans, root->right, paths + "->" + to_string(root->right->val));
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        if (root == nullptr)
            return ans;

        totalPaths(ans, root, to_string(root->val));

        return ans;
    }
};