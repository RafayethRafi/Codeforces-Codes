#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,m,k,i,p,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];

    cin>>m;
    int b[m];
    for(i=0;i<m;i++) cin>>b[i];

    cin>>k;
    int c[k];
    for(i=0;i<k;i++) cin>>c[i];

    cin>>p>>q;
    double x = *max_element(a,a+n);
    double y = *max_element(b,b+m);
    double z = *min_element(c,c+k);

    double ans = x*sqrt((q*y)/(p*z+ q*y));

    cout<<fixed<<setprecision(12)<< ans<<endl;

    return 0;
}
