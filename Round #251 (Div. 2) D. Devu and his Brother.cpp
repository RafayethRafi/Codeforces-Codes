#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

vector<long long>a,b;
int n,m;

long long f(int x)
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<x) sum += (x-a[i]);
    }

    for(int i=0;i<m;i++)
    {
        if(b[i]>x) sum += (b[i]-x);
    }

    return sum;
}

int main()
{
    optimize();
    long long i,lo=INT_MAX,hi=INT_MIN;
    cin>>n>>m;
    
    for(i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
        lo = min(lo,x);
    }

    for(i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        b.push_back(x);
        hi= max(hi,x);
    }

    if(lo>=hi)
    {
        cout<<0<<endl;
        return 0;
    }

    while((hi-lo)>=3)
    {
        long long m1 = lo + (hi-lo)/3;
        long long m2 = hi - (hi-lo)/3;

        if(f(m1)>f(m2)) lo = m1;
        else hi= m2;
    }

    long long ans = 1e18;
    for(i=lo;i<=hi;i++)
    {
        long long tmp = f(i);
        ans = min(ans,tmp);
    }

    cout<<ans<<endl;

    return 0;
}
