Code : Find a node

For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
 Input Format:
The first line of each test case contains elements of the first tree in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

The second line of each test case contains the node value you have to find.


For example, the input for the tree depicted in the below image would be:
Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7
Sample Output 1:
true
Explanation For Output 1:
Clearly, we can see that 7 is present in the tree. So, the output will be true.
Sample Input 2:
2 3 4 -1 -1 -1 -1
10
Sample Output 2:
false
  // Solution
  bool isNodePresent(BinaryTreeNode<int> *root, int x) {
     if(root== NULL) 
         return false;
    if(root->data == x)
        return true;
     bool leftSearch = isNodePresent(root -> left, x);
    bool rightSearch = isNodePresent(root -> right, x);
      return leftSearch|| rightSearch;
	// Write your code here
}
