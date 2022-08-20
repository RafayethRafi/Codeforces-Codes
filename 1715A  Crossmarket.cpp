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
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(m>n) swap(m,n);
        int ans = 2*(m-1) + n;

        cout<<ans<<endl;
    }
    return 0;
}
