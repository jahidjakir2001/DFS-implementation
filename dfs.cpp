
   /*******************************************************
    *   IN THE NAME OF ALLAH  ,  BISMILLAHIR RAHMANIR RAHIM*
    ********************************************************/
    /**.....................................আল্লাহ্ ব্যাতিত কোন মাবুদ নাই............................**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s="abcdefghijklmnopqrstuvwxyz";
vector<int>v[10000];
bool vis[10000];
int node,edge;
void DFS(int x)
{
    vis[x]=true;
    cout<<x<<"->";
    for(int i=0;i<v[x].size();i++)
    {
        int child ;
        child =v[x][i];
        if(vis[child]==false)
        {
            DFS(child);
        }
    }
}
int main()
{
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
}
