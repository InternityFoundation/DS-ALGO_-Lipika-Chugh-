Link-https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1

problem statement-Given a BST and an integer. Find the least absolute difference between any node value of the BST and the given integer.


void inorder(Node *root,vector<int> &v){
    if(root==NULL){
        return ;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int maxDiff(Node *root, int k)
{
    vector<int>v;
    inorder(root,v);
    int min =INT_MAX;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<" ";
        int s=abs(k-v[i]);
        if(s<min){
            min=s;
        }
    }
   
    return min;
