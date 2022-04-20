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
        long long n,m;
        cin>>n>>m;

        if((m==1 && n>2) || (n==1 && m>2))
        cout<<-1<<endl;
        else
        {
            if(m>n) swap(m,n);

            int ans = (2*m) -2;
            int x = n-m;
            int y = x/2;
            if((2*y)!=x) x= y+1;
            else x = y;

            ans += x;
            ans += (3*y);
            cout<<ans<<endl;
        }
    }
    return 0;
}
