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
        int n,m,i;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        reverse(a,a+n);

        long long pos = 0;
        for(i=0;i<n;i++)
        {
            pos += a[i];
        }
        pos+=n+a[0]-a[n-1];
        if(pos>m)
            {
                cout<<"NO"<<endl;
            }
        else cout<<"YES"<<endl;

    }
    return 0;
}
