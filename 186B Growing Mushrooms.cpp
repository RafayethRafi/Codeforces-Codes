#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,t1,t2,k,i;
    cin>>n>>t1>>t2>>k;

    vector<pair<double,int>>vc;
    for(i=1;i<=n;i++)
    {
        int u,v;
        cin>>u>>v;

        double ans1 = (t1*u)*1.0;
        ans1 -= (ans1*k)/100.0;
        ans1+= v*t2;

        double ans2 = (t1*v)*1.0;
        ans2 -= (ans2*k)/100.0;
        ans2+= u*t2;

        vc.push_back({-max(ans1,ans2),i});
    }

    sort(vc.begin(),vc.end());
    for(auto u:vc) cout<<fixed<<setprecision(2)<< u.second<<" "<<-u.first<<endl;

    
    return 0;
}
