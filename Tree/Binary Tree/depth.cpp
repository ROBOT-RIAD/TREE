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
        this->right=NULL;
    }
};

Node *input(){
    int val;cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root =new Node(val);
    queue<Node*>q;
    if(root)q.push(root);

    while(!q.empty())
    {
        Node* p =q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node* myleft;Node* myright;
        if(l==-1) myleft=NULL;
        else myleft = new Node(l);
        if(r==-1) myright=NULL;
        else myright = new Node(r);
        p->left =myleft;
        p->right =myright;


        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right); 
    }
    return root;
}

int max_higth(Node* root)
{
    if(root == NULL)return 0;
    int l =max_higth(root->left);
    int r =max_higth(root->right);
    return max(l,r)+1;
}

int main() {
    ROBOT_RIAD;
    Node* root = input();
    cout<<max_higth(root)<<endl;
    return 0;
}
