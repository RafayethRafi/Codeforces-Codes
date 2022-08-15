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
        int n,k,i;
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]= a[i];
        }
        map<int,int>m;

        sort(b,b+n);
        int cnt=0;
        for(i=0;i<k;i++) m[b[i]]++;

        for(i=0;i<k;i++)
        {
            if(m[a[i]]==0) cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
