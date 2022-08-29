#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i,cnt=0;
    cin>>n;
    int x[n+5],h[n+5];

    for(i=0;i<n;i++) cin>>x[i]>>h[i];
    x[n] = INT_MAX;
    for(i=1;i<n;i++)
    {
        if(x[i]-h[i]>x[i-1]) cnt++;
        else if(x[i]+h[i]<x[i+1]) cnt++, x[i]+= h[i];
    }

    cout<<cnt+1<<endl;

    return 0;
}
