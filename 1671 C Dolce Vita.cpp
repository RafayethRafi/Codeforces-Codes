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
        int n,x;
        cin>>n>>x;
        int a[n],i;

        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long sum =0,ans=0;
        for(i=0;i<n;i++)
        {
            sum+= a[i];
            if(sum<=x)
            {
                ans += (x-sum)/(i+1) +1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
