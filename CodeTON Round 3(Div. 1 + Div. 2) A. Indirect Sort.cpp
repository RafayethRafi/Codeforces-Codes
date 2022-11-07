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
        int x,ans;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i==0) ans = x;
        }
        if(ans==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
