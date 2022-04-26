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
        int n,i,ans=0;
        cin>>n;
        vector<int>v(n);

        for(i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int x = unique(v.begin(),v.end()) - v.begin();

        for(i=1;i<x;i++)
        {
            ans = __gcd(ans,(v[i]-v[i-1]));
        }
        if(ans<1) cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}
