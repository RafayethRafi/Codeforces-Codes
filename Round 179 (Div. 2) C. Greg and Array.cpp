#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define ll long long

int main()
{
    optimize();
    ll n,m,k,i,j,l,r,d;
    cin>>n>>m>>k;

    vector<ll> a(n+5);
    for(i=1;i<=n;i++) cin>>a[i];

    vector<pair<int,pair<int,int>>> vl(m+3), vr(m+3);

    for(i=1;i<=m;i++)
    {
        cin>>l>>r>>d;

        vl[i] = {l,{d,0}};
        vr[i] = {r+1,{d,0}};
    }

    for(i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;

        vl[x].second.second++;
        vr[y+1].second.second++;
    }

    ll cnt=0, sum=0;
    vector<ll> ans1(n+3,0),ans2(n+3,0);

    for(i=1;i<=m;i++)
    {
        cnt += vl[i].second.second;
        cnt -= vr[i].second.second;

        ans1[vl[i].first] += vl[i].second.first * cnt;
        ans2[vr[i].first] += vr[i].second.first * cnt;
    }

    for(i=1;i<=n;i++)
    {
        sum += ans1[i];
        sum -= ans2[i];

        cout<<a[i]+sum<<" ";
    }

    cout<<endl;
    return 0;
}
