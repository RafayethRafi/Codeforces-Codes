#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define mx 100005
vector<int>adj[mx];
bool vis[mx];
vector<pair<int,int>> a(mx);


void dfs(int i)
{
    vis[i] = 1;
    for(auto u:adj[i])
    {
        if(!vis[u])
        dfs(u);
    }
}
int main()
{
    optimize();
    int n,m,u,v,i;
    cin>>n>>m;
    long long sum=0;

    for(i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i] = {x,i};
    }
    sort(a.begin()+1,a.begin()+n+1);

    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(i=1;i<=n;i++)
    {
        if(!vis[a[i].second])
        {
            sum+= a[i].first;
            dfs(a[i].second);
        }
    }

    cout<<sum<<endl;


    return 0;
}
