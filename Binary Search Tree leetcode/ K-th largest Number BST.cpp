#include <bits/stdc++.h>

int KthLargestNumber(TreeNode<int> *root, int k)
{
    int cnt = 0;
    int ans = -1;
    TreeNode<int> *curr = root;

    while (curr != NULL)
    {
        if (curr->right == NULL)
        {
            cnt++;
            if (cnt == k)
                ans = curr->data;

            curr = curr->left;
        }
        else
        {
            TreeNode<int> *succ = curr->right;
            while (succ->left && succ->left != curr)
            {
                succ = succ->left;
            }

            if (succ->left == NULL)
            {
                succ->left = curr;
                curr = curr->right;
            }
            else
            {
                succ->left = NULL;

                cnt++;
                if (cnt == k)
                    ans = curr->data;

                curr = curr->left;
            }
        }
    }
    return ans;
}