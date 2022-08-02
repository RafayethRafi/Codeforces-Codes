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
        int n,h,m;
        cin>>n>>h>>m;
        vector<pair<int,int>>vct;

        int x = (h*60) + m;
        int f=0;
        while(n--)
        {
            int u,v;
            cin>>u>>v;

            if(u==h && v==m) vct.push_back({0,0});
            else if((u*60 + v)<x)
            {
                int p;
                p = 1440-x;
                p += ( (u*60)+ v );

                vct.push_back({p/60,p%60});
            }
            else
            {
                int p;
                p = ((u*60)+v) - x;
                vct.push_back({p/60,p%60});
            }
        }
        sort(vct.begin(),vct.end());

        cout<<vct[0].first<<" "<<vct[0].second<<endl;
    }
    return 0;
}
