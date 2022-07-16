#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e5+123;
int vis[mx];
vector<int>adj[mx];

void dfs(int x)
{
    vis[x] = 1;
    for(auto u: adj[x])
    {
        if(vis[u]==0)
        dfs(u);
    }
}
int main()
{
    optimize();
    int n,m,i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            cnt++;
        }
    }
    long long ans = pow(2,n-cnt);
    cout<<ans<<endl;
    return 0;
}
