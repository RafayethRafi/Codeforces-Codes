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
        long long n,k,b,s,x,y;
        cin>>n>>k>>b>>s;
        x = (b*k) + (k-1);
        y = s-x;

        if(y> ((n-1)*(k-1)) || (b*k)>s) cout<<-1<<endl;
        else
        {
            if(x>s)
            {
                x=s;
                y =0;
            }
            cout<<x<<" "; n--;
            while(n--)
            {
                if(y<(k-1))
                {
                    cout<<y<<" ";
                    y=0;
                }
                else
                {
                    cout<<k-1<<" ";
                    y-=(k-1);
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
