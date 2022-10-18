#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum=0;
        cin>>n;
        int rans=n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }

        for(i=n;i>=1;i--)
        {
            bool f=0;

            if(sum%i==0)
            {
                int ans =0;
                int x = sum/i;
                int y=0,cnt=0;
                for(j=0;j<n;j++)
                {
                    y+= a[j];
                    cnt++;
                    if(y>x)
                    {
                        f=1;
                        y=0;
                        cnt=0;
                        break;
                    }
                    if(y==x)
                    {
                        y=0;
                        ans = max(ans,cnt);
                        cnt=0;
                    }

                }
                if(!f)
            rans = min(ans,rans);
            }

        }

        cout<<rans<<endl;
    }
    return 0;
}
 
