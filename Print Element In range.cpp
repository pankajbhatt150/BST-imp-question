void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	 if(root==NULL)
      return ;
    
    if(root ->data > k1) // since we will get desired o/p in left subtree so therefore root -> data->k1
        elementsInRangeK1K2(root -> left, k1, k2);
    
 if ( k1 <= root->data && k2 >= root->data ) // if the data of root lies on range of binary search tree
        cout<<root->data<<" ";
    
    
    if(root -> data < k2) // for right subtree root -> data <k2
        elementsInRangeK1K2(root->right,k1,k2);
        // Write your code here
}
