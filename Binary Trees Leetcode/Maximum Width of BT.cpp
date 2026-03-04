class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;
        long long ans = 0;
        queue<pair<TreeNode *, long long>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int size = q.size();
            long long minIndex = q.front().second; // to make the index start from zero
            long long first, last;

            for (int i = 0; i < size; i++)
            {
                long long curr_index = q.front().second - minIndex; // to make the index start from zero
                TreeNode *node = q.front().first;
                q.pop();
                if (i == 0)
                    first = curr_index;
                if (i == size - 1)
                    last = curr_index;

                if (node->left)
                    q.push({node->left, curr_index * 2 + 1});
                if (node->right)
                    q.push({node->right, curr_index * 2 + 2});
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};