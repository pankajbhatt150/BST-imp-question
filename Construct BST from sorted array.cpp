Code: Construct BST from a Sorted Array
Given a sorted integer array A of size n, which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.
Note: If array size is even, take first mid as root.
Input format:
The first line of input contains an integer, which denotes the value of n. The following line contains n space separated integers, that denote the values of array.
Output Format:
The first and only line of output contains values of BST nodes, printed in pre order traversal.
  // solution
  BinaryTreeNode<int> *help(int *input,int start,int end)
{
    if(start>end)//base case
        return NULL;
    int mid=(start+end)/2;//to get middle element index of sorted array
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(input[mid]);//dynamically created the root node for middle element
    root->left=help(input,start,mid-1);//now simply calling recursion to make left balenced bst
    root->right=help(input,mid+1,end);//and right balanced bst
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
    
	return help(input,0,n-1);
}
