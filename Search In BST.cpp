bool searchInBST(BinaryTreeNode<int> *root , int k) {
	  if(root == NULL) {
    return NULL;
    }
    
    if(root -> data == k){
        return root;
    }
    
    if(root -> data > k){
        return searchInBST(root -> left, k);
    }
    else{
        return searchInBST(root -> right, k);
    }// Write your code here
}
