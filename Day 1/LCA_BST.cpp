Link-https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1

Problem statement-Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.



Node* LCA(Node *root, int n1, int n2)
{
   if(root==NULL){
       return NULL;
   }
   /*if(n1<=root->data && root->data<=n2){
       return root;
   }*/
   if(root->data>n1 && root->data>n2){
       return LCA(root->left,n1,n2);
   }
   else if(root->data<n1 && root->data<n2){
       return LCA(root->right,n1,n2);
   }
   return root;
}
