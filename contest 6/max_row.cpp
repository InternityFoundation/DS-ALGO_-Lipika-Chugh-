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

void helper(vector<int>& res, Node* root, int d)
{
    if (!root)
        return;

   
    if (d == res.size())
        res.push_back(root->data);

    else

        res[d] = max(res[d], root->data);

    helper(res, root->left, d + 1);
    helper(res, root->right, d + 1);
}


vector<int> largestValues(Node* root)
{
    vector<int> res;
    helper(res, root, 0);
    return res;
}



int main(){

    string s;
    getline(cin,s);
    Node* root=buildTree(s);
    vector<int> res = largestValues(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";



return 0;
}



