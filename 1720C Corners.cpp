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
        int n,m,i,j,ans =0;
        cin>>n>>m;
        int a[n+1][m+1];

        for(i=0;i<=n;i++) for(j=0;j<=m;j++) a[i][j] = 0;

        for(i=1;i<=n;i++)
        {
            string s;
            cin>>s; 
            for(j=1;j<=m;j++)
            {
                if(s[j-1]=='1')
                {
                    ans++;
                    a[i][j] = 1;
                }
            }
        }

        bool f1 = false , f2 = false;
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                int cnt = a[i][j] + a[i][j+1] + a[i+1][j]+ a[i+1][j+1];
                if(cnt<=2) f1 = true;
                else if(cnt<=3) f2 = true;
            }
        }

        if(f1){}
        else if(f2) ans--;
        else ans-= 2;

        cout<<ans<<endl;

    }
    return 0;
}
