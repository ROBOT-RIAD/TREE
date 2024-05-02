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
        this->left = NULL;
        this->right =NULL;
    }
};

Node* input(){
    int val;cin>>val;
    Node* root;
    if(val ==-1)root =NULL;
    else root = new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l ==-1)myleft =NULL;
        else myleft = new Node(l);
        if(r ==-1)myright =NULL;
        else myright = new Node(r);

        f->left=myleft;
        f->right =myright;


        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return root;
}

void insert(Node* &root,int x)
{
    if(root == NULL )
    {
        root = new Node(x);
        return;
    }
    if(root->val>x)
    {
        if(root ==NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
         if(root ==NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right,x);
        }

    }

}

int main() {
    ROBOT_RIAD;
    Node* root = input();
    int x;cin>>x;
    insert(root,x);   
    return 0;
}
