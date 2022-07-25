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
        int n,q,i,j;
        cin>>n>>q;
        int a[n];

        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());

        vector<long long>sum(n);
        sum[0] = a[0];
        for(i=1;i<n;i++) sum[i]= a[i] + sum[i-1];
        

        while(q--)
        {
            int x;
            cin>>x;
            bool f=1;

            int y = lower_bound(sum.begin(),sum.end(),x) - sum.begin();
            if(y==n) cout<<-1<<endl;
            else cout<<(y+1)<<endl;
        }
    }
    return 0;
}
