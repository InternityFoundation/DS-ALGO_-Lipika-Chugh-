Link-https://practice.geeksforgeeks.org/problems/largest-bst/1

Problem statement-Given a binary tree. Find the size of its largest subtree that is a Binary Search Tree.


int size(Node* node)  
{  
    if (node == NULL)  
        return 0;  
    else
        return(size(node->left) + 1 + size(node->right));  
}  
int bst(Node* root,int min,int max){
    if(root==NULL){
        return 1;
    }
    if(root->data<min || root->data>max){
        return 0;
    }
    return bst(root->left,min,root->data-1) && bst(root->right,root->data+1,max);
   
}
int isBST(Node *root){
    return bst(root,INT_MIN,INT_MAX);
}
int largestBst(Node *root)
{
if(isBST(root)){
    return size(root);
}
else{
    return max(largestBst(root->left),largestBst(root->right));
}
}
