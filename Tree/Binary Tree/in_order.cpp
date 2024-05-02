#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val =val;
        this->left =NULL;
        this->right =NULL;
    }
};
// in order ==> left-->root--->right

void inorder(Node* root){
    if (root == NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

 

int main() {
    ROBOT_RIAD;
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b= new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    //connection

    root->left =a;
    root->right =b;
    a->left =c;
    a->right =h;
    b->right =d;
    c->right =e;
    h->right=i;
    d->left =f;
    d->right =g;

    inorder(root);
    return 0;
}
