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
        long long n;
        cin>>n;
        long long a[n],b[n],sum=0,sum2=-1,k=-1,i;
        for(i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;

            sum += min(x,y);
            sum2= max(x,y);
            k = max(k,sum2);
        }

        long long ans = (2*sum) + (2*k);

        cout<<ans<<endl;
    }
    return 0;
}
