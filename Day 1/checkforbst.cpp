Link-https://practice.geeksforgeeks.org/problems/check-for-bst/1

Problem statement-Given a binary tree. Check whether it is a BST or not



bool bst(Node *root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(min>root->data || root->data>max){
        return false;
    }
    return bst(root->left,min,root->data-1) && bst(root->right,root->data+1,max);
}
bool isBST(Node* root) {
    if(bst(root,INT_MIN,INT_MAX)){
        return true;
    }
    else{
        return false;
    }
}
