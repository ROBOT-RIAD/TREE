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

// 1 line thyak ano 
// 2 jabotiyo kal sob koro 
// 3 tar child node gulo k line a diya dyao 

void levelorder(Node* root)
{
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        //line thyak ano 
        Node* f = q.front();
        q.pop();

        //jabotiyo sob kaj
        cout<<f->val<<" ";

        // tar child node gulo k line a diya dyao
        if (f->left != NULL) q.push(f->left);
        if (f->right != NULL) q.push(f->right);
    }
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


    levelorder(root);

    return 0;
}
