#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    map<string,int>mp;
    while (ss>>word)
    {
        mp[word]++;
    }
    
    return 0;
}
