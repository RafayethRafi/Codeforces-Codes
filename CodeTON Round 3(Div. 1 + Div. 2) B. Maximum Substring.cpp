
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
        long long n,i;
        string s;
        cin>>n>>s;

        long long sz = s.size(),z=0,o=0;

        for(i=0;i<sz;i++)
        {
            if(s[i]=='0') z++;
            else o++;
        }
        long long ans = o*z;
        long long k =0,x=0,y=0;

        for(i=0;i<sz;i++)
        {
            if(s[i]=='0') k++;
            else
            {
                x = max(k,x);
                k=0;
            }
        }

x = max(k,x);
         x *= x;
        k=0;

        for(i=0;i<sz;i++)
        {
            if(s[i]=='1') k++;
            else
            {
                y = max(k,y);
                k=0;
            }
        }
         y = max(k,y);

       
        y *= y;

        ans = max(ans,x);
        ans = max(ans,y);

        cout<<ans<<endl;

    }
    return 0;
}
