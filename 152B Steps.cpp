#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long n,m,x,y,k;
    cin>>n>>m>>x>>y>>k;
    long long cnt=0;
    while(k--)
    {
        long long u,v,cnt1=LLONG_MAX,cnt2=LLONG_MAX;
        cin>>u>>v;
        if(u>0) cnt1 = (n-x)/u;
        else if(u<0) cnt1 = (x-1)/abs(u);

        if(v>0) cnt2 = (m-y)/v;
        else if(v<0) cnt2 = (y-1)/abs(v);

        cnt+= min(cnt1,cnt2);
        x += min(cnt1,cnt2)*u;
        y += min(cnt1,cnt2)*v;

    }

    cout<<cnt<<endl;
    return 0;
}
