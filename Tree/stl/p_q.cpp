#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> pqq;
    while(true)
    {
        int c;cin>>c;
        if(c==0)
        {
            int x;cin>>x;
            pq.push(x);//o(logN)
        }
        else if(c==1)
        {
            pq.pop();//o(logN)
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl;//o(1)
        }
        else
        {
           break; 
        }
    }
    return 0;
}
