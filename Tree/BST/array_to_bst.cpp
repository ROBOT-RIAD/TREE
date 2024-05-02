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

Node* convert(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftroot = convert(a,n,l,mid-1);
    Node* rightroot = convert(a,n,mid+1,r);

    root->left =leftroot;
    root->right =rightroot;
    return root;
}



int main() {
    ROBOT_RIAD;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node* root =convert(a,n,0,n-1);
    return 0;
}
