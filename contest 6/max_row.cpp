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

void check(vector<int>& result, Node* root, int d)
{
    if (!root)
        return;

   
    if (d == result.size())
        result.push_back(root->data);

    else

        result[d] = max(result[d], root->data);

    check(result, root->left, d + 1);
    check(result, root->right, d + 1);
}


vector<int> largestVal(Node* root)
{
    vector<int> result;
    check(result, root, 0);
    return result;
}



int main(){

    string s;
    getline(cin,s);
    Node* root=createTree(s);
    vector<int> result = largestVal(root);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";



return 0;
}



