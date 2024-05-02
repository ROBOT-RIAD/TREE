#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;cin>>x;
    v.push_back(x);

    int curr = v.size()-1;

    while(curr!= 0)
    {
        int p =(curr-1)/2;
        if(v[p]>v[curr])swap(v[p],v[curr]);
        else break;
        curr =p;
    }

    for(int vv:v)
    {
        cout<<vv<<" ";
    }
    return 0;
}
