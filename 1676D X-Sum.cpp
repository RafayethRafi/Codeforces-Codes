#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i,j,k,l;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++) cin>>a[i][j];
        }
        
        long long ans =-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                long long sum=0;

                for(k=i,l=j;k<n &&l<m;k++,l++)
                sum += a[k][l];
                for(k=i,l=j;k<n&&l>=0;k++,l--)
                sum += a[k][l];
                for(k=i,l=j;k>=0&&l<m;k--,l++)
                sum += a[k][l];
                for(k=i,l=j;k>=0&&l>=0;k--,l--)
                sum += a[k][l];
                sum -= 3*(a[i][j]);
                ans= max(ans,sum);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
