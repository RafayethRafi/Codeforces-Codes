 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,g=0,i;
        cin>>n;
        int a[n+5];

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            g = __gcd(g,a[i]);
        }
        if(g==1) cout<<0<<endl;
        else if(__gcd(g,n)==1) cout<<1<<endl;
        else if(__gcd(g,n-1)==1) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
