#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void insert_heap(vector<int>& v,int x)
{
    v.push_back(x);
    int cur_idx =v.size()-1;
    while(cur_idx !=0)
    {
        int pr_idx = (cur_idx-1)/2;
        if(v[pr_idx]>v[cur_idx]) swap(v[pr_idx],v[cur_idx]);
        else break;
        cur_idx =pr_idx;
    }
}

void delete_heap(vector<int> & v)
{
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur =0;
    while(true)
    {
        int left_idx = cur*2 +1;
        int right_idx =cur*2+2;
        int last_idx = v.size()-1;
        if(left_idx <=last_idx && right_idx<=last_idx )
        {
            if(v[left_idx]<=v[right_idx] && v[left_idx]<v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else{
                break;
            }

        }
        else if(left_idx <=last_idx)
        {
            if(v[left_idx]<v[cur])
            {
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else{
                break;
            }

        }
        else if( right_idx<=last_idx)
        {
            if(v[right_idx]<v[cur])
            {
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else{
                break;
            }

        }
        else
        {
            break;
        }
    }
}

int main() {
    ROBOT_RIAD;
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        insert_heap(v,x);
    }

    return 0;
}
