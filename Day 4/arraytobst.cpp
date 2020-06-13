#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
Node* bst(int a[],int i,int n){
    if(i>n){
        return NULL;
    }
    int mid=(i+n)/2;
    Node* root=new Node(a[mid]);
    root->left=bst(a,i,mid-1);
    root->right=bst(a,mid+1,n);
   
    return root;
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cin>>a[i];
}
sort(a,a+n);
//Node *root;
//int i=0;
Node* r=bst(a,0,n-1);
preorder(r);
cout<<endl;
}
return 0;
}
