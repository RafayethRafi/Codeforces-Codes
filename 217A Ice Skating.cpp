#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int n;
int a[10000][2];
int vis[10000];

void dfs(int i)
{
    vis[i]= 0;

    for(int j=0;j<n;j++)
    {
        if((a[j][0]== a[i][0] || a[j][1]==a[i][1]) && vis[j]==-1)
        dfs(j);
    }
}

int main()
{
    optimize();
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    int ans = -1;
    memset(vis,-1,sizeof(vis));
    for(i=0;i<n;i++)
    {
        if(vis[i]==-1) dfs(i), ans++;
    }

    cout<<ans<<endl;
    return 0;
}


//number of connected components - 2
