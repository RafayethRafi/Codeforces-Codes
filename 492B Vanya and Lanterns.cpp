#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long n,l,i;
    cin>>n>>l;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);
    long long ans =0;
    for(i=0;i<n-1;i++) ans = max(ans,a[i+1]-a[i]);

    printf("%.12f",max(ans/2.0,max(  (a[0]*1.0) , 1.0* (l- a[n-1]) )));
    return 0;
}
