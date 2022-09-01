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
        int n,i;
        cin>>n;
        int a[n+5];
        for(i=1;i<=n;i++) cin>>a[i];

        int x =-1;
        for(i=2;i<=n;i++)
        {
            if(a[i-1]==0 && a[i]==1)
            {
                x=i-1;
                break;
            }
        }
        if(a[1]==1)
        {
            cout<<(n+1)<<" ";
            for(i=1;i<=n;i++) cout<<i<<" ";
        }
        else if(a[n]==0)
        {
            for(i=1;i<=n+1;i++) cout<<i<<" ";
        }
        else if(x!=-1)
        {
            for(i=1;i<=x;i++) cout<<i<<" ";
            cout<<n+1<<" ";
            for(i=x+1;i<=n;i++) cout<<i<<" ";
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}
