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
        int n,i,j;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        vector<int>mn,mx;
        j=0;

        for(i=0;i<n;i++)
        {
            while(j<n && a[i]>b[j]) j++;
            mn.push_back(b[j]-a[i]);
        }

        for(auto u:mn) cout<<u<<" ";
        cout<<endl;

        j= n-1;

        for(i=n-1;i>=0;i--)
        {
            mx.push_back(b[j]-a[i]);
            if(a[i]>b[i-1]) j = i-1;
        }

        reverse(mx.begin(),mx.end());

        for(auto u:mx) cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
