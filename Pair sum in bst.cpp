Pair sum in a BST
Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space of the order of O(log n).
Note:
1. Assume BST contains all unique elements.
2. In a pair, print the smaller element first.
Input Format :
The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.   
The following line of input contains an integer, that denotes the value of S.
Output format:
You have to print each pair in a different line (pair elements separated by space). The order of different pairs, to be printed, does not matter.
Constraints:
Time Limit: 1 second   
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12
Sample Output 1:
2 10
5 7
  // Solution
  #include <bits/stdc++.h>
int k=0;

void convert(BinaryTreeNode<int>*root,int *arr)
{
    if(root==NULL)
        return;
   
    arr[k++] = root->data;
    
   convert(root->left,arr);
    convert(root->right,arr);
    
}
void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    int arr[1000000];
    
    convert(root,arr);

    sort(arr,arr+k);
    
    
    int i=0;
    int j=k-1;
    
    while(i<j)
    {
        if(arr[i]+arr[j]==s)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j] > s)
            j--;
        else if(arr[i]+arr[j] < s)
            i++;
    }
    
    
    // Write your code here
}
  
