#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
vector<int> levelOrder(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* res = q.front();
        q.pop();
        ans.push_back(res->val);
        if(res->left) q.push(res->left);
        if(res->right) q.push(res->right);
        }
    return ans;
}

int main(){
    Node* a = new Node(1);  // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    vector<int> result = levelOrder(a);

    for(int x : result){
        cout<<x<<" ";
    }
}


