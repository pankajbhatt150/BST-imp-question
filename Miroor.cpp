Void mirrorBinaryTree (BinaryTreeNode<int> *root)
{
  if(root == NULL)
    return;
  BinaryTreeNode<int> *p;
  p = root -> left;
  root -> left = root -> right;
  root -> right =p;
  mirrorBinaryTreeNode(root -> left);
  mirrorBinaryTreeode(root -> right);
}
