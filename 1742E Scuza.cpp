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
        long long n,q;
        cin>>n>>q;
        vector<long long>v;
        long long  p[n+5], cur =0;
        p[0] = 0;
        for(i=1;i<=n;i++)
        {
            long long x;
            cin>>x;
            p[i] = p[i-1]+x;
            cur = max(cur,x);
            v.push_back(cur);
        }

        while(q--)
        {
            long long x;
            cin>>x;

            long long pos = upper_bound(v.begin(),v.end(),x) - v.begin();
            cout<<p[pos]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
 
