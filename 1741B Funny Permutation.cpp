#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n%2==0)
        {
            for(i=n;i>=1;i--) cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            int x = (n/2)+1;
            for(i=n;i>x;i--) cout<<i<<" ";
            for(i=1;i<=x;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
 
