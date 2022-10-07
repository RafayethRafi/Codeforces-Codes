#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,m,u,v,i,x;
    cin>>n>>m;

    vector<bool> ct(n+1,true);

    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        ct[u] = 0;
        ct[v] = 0;
    }

    for(i=1;i<=n;i++)
    {
        if(ct[i]== true)
        {
            x=i;
            break;
        }
    }
    cout<<(n-1)<<endl;

    for(i=1;i<=n;i++)
    {
        if(i==x) continue;
        
        cout<<i<<" "<<x<<endl;
    }

    return 0;
}
