#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        char a[n+5][m+5];
        vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {cin>>a[i][j];

            if(a[i][j]=='R') v.push_back({i,j});
            }
        }

        sort(v.begin(),v.end());
        int x = v[0].first;
        int y= v[0].second;

        bool f=1;
        for(auto u:v)
        {
            if(((u.first-x)<0) || ((u.second -y)<0))
            {
                f=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        
        if(f) cout<<"YES"<<endl;
    }
    return 0;
}
