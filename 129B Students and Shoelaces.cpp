#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,m,i,j;
    cin>>n>>m;

    vector<int>adj[n+5];
    int cnt[n+5];
    memset(cnt,0,sizeof(cnt));

    while(m--)
    {
        int x,y;
        cin>>x>>y;
        
        cnt[x]++; cnt[y]++;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans =0;
    while(1)
    {
        vector<int>v;

        for(i=1;i<=n;i++)
        {
            if(cnt[i]==1) v.push_back(i);
        }

        if(v.empty()) break;

        for(auto u:v)
        {
            cnt[u]--;

            for(auto k:adj[u]) cnt[k]--;
        }
        ans++;
    }

    cout<<ans<<endl;
    return 0;
}
