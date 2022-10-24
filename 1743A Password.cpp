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
        int n,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
        }
        n = 10-n;

        long long ans = n*(n-1)*6;
        ans/=2;

        cout<<ans<<endl;
    }
    return 0;
}
 
