#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

class student{
    public:
        string name;
        int roll;
        int marks;

        student(string name,int roll,int marks)
        {
            this->name =name;
            this->roll =roll;
            this->marks =marks;
        }
};

class cmp{
    public:
      bool operator()(student a,student b)
      {
        if(a.marks<b.marks)return true;
        else return false;

      }
};

int main() {
    ROBOT_RIAD;
    int n;cin>>n;
    priority_queue<student,vector<student>,cmp> pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        student obj(name,roll,marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout<<pq.top().marks<<" ";
        pq.pop();
    }
    
    return 0;
}
