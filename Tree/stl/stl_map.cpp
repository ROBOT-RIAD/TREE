#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    int t; cin >> t;
    map<string,int> mp;
    mp.insert({"sakib",75});
    mp.insert({"tamim",35});
    mp.insert({"musi",45});

    for(auto it = mp.begin();it!=mp.end();it++)
    {
       cout<<it->first<<" "; 
    }
    
    return 0;
}
