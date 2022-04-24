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
        int n,x=0,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        for(i=1;i<n;i++)
        {
            x+= a[i] - a[i-1] -1;
        }
        if(x>2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
