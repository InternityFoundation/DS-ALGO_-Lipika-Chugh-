#include <bits/stdc++.h>
using namespace std;


struct Node{
int data;
struct Node *left;
struct Node*right;
};
Node* newNode(int value)
{

    Node* temp = new Node;
    temp->data = value;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node* createTree(string s){
if(s.length()==0||s[0]=='null')
    return NULL;
vector<string>ip;
istringstream iss(s);
for(string s;iss>>s;)
    ip.push_back(s);
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

struct Node *LCA(struct Node* root, int n1, int n2)
{

    if (root == NULL) return NULL;

    if (root->data == n1 || root->data == n2)
        return root;


    Node *leftlca  = LCA(root->left, n1, n2);
    Node *rightlca = LCA(root->right, n1, n2);

    if (leftlca && rightlca)  return root;


    return (leftlca != NULL)? leftlca: rightlca;
}



int main(){

    string s;
    getline(cin,s);
    Node* root=createTree(s);
    int p,q;
    cin>>p>>q;
    cout<<LCA(root, p, q)->data;



return 0;
}


