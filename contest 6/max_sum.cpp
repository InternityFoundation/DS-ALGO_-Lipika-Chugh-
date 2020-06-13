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

int findMax(Node* root, int &result) 
{ 
     
    if (root == NULL) 
        return 0; 
  
     
    int l = findMax(root->left,result); 
    int r = findMax(root->right,result); 
  
     
    int maxsingle = max(max(l, r) + root->data, root->data); 
  
     
     
 
    int maxtop = max(maxsingle, l + r + root->data); 
  
    result = max(result, maxtop);  
  
    return maxsingle; 
} 
  
 
int findMaxSum(Node *root) 
{ 
     
    int result = INT_MIN; 
  
     
    findMax(root, result); 
    return result; 
}



int main(){

    string s;
    getline(cin,s);
    Node* root=createTree(s);
    cout<<findMaxSum(root);



return 0;
}
