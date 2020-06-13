Link-https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1

Problem Statement-Given a BST,  and a reference to a Node x in the BST. Find the Inorder Successor of the given node in the BST



Node * minValue(Node *root){
    if(root->left!=NULL){
        root=root->left;
    }
    //cout<<root->data<<" ";
    return root;
}
Node * inOrderSuccessor(Node *root, Node *x)
{
if(root==nullptr)
    {
        return nullptr;
    }
    Node* y=nullptr;
    if(root->data<x->data)
    {
        y=inOrderSuccessor(root->right,x);
    }
    else if(root->data>x->data)
    {
        y=inOrderSuccessor(root->left,x);
        if(y==nullptr)
        y=root;
    }
    else
    {
        y=inOrderSuccessor(root->right,x);
    }
    
    return y;

    
}
