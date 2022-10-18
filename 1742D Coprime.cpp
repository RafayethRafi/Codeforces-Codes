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
        int n,i,j;
        cin>>n;
        int a[n];
        int x[1005];
        memset(x,0,sizeof(x));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x[a[i]] = i+1;
        }
        int ans = -1;

        for(i=1;i<=1002;i++)
        {
            for(j=1;j<=1002;j++)
            {
                if(x[i] && x[j] && __gcd(i,j)==1)
                    ans = max(ans,(x[i]+x[j]));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
