#include <bits/stdc++.h>
using namespace std;


struct Node{
int data;
struct Node *left;
struct Node*right;
};
Node* newNode(int val)
{

    Node* temp = new Node;
    temp->data = val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node* buildTree(string str){
if(str.length()==0||str[0]=='null')
    return NULL;
vector<string>ip;
istringstream iss(str);
for(string str;iss>>str;)
    ip.push_back(str);
Node* root=newNode(stoi(ip[0]));
queue<Node*>queue;
queue.push(root);
int i=1;
while(!queue.empty()&&i<ip.size()){
    Node* currNode=queue.front();
    queue.pop();
    string currVal=ip[i];
    if(currVal !="null"){
       currNode->left=newNode(stoi(currVal));
       queue.push(currNode->left);
    }
    i++;
    if(i>=ip.size())
        break;
    currVal=ip[i];
    if(currVal !="null"){
        currNode->right=newNode(stoi(currVal));
        queue.push(currNode->right);
    }
    i++;
}
return root;}

struct Node *findLCA(struct Node* root, int n1, int n2)
{

    if (root == NULL) return NULL;

    if (root->data == n1 || root->data == n2)
        return root;


    Node *left_lca  = findLCA(root->left, n1, n2);
    Node *right_lca = findLCA(root->right, n1, n2);

    if (left_lca && right_lca)  return root;


    return (left_lca != NULL)? left_lca: right_lca;
}



int main(){

    string s;
    getline(cin,s);
    Node* root=buildTree(s);
    int p,q;
    cin>>p>>q;
    cout<<findLCA(root, p, q)->data;



return 0;
}


