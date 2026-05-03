class Solution
{
public:
  int inOrderSuccessor(Node *root, Node *x)
  {
    Node *Successor = NULL;

    while (root != NULL)
    {
      if (x->data >= root->data)
      {
        root = root->right;
      }
      else
      {
        Successor = root;
        root = root->left;
      }
    }
    if (Successor == NULL)
    {
      return -1;
    }
    return Successor->data;
  }
};