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
        long long n,i,ans=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            ans = max(ans,(abs(a[i]-a[i+1])+abs(a[i]-a[n-1])));
        }
        for(i=n-1;i>0;i--)
        {
            ans = max(ans,(abs(a[i]-a[i-1])+abs(a[i]-a[0])));
        }

        cout<<ans<<endl;
    }
    return 0;
}
