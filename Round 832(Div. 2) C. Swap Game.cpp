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
        int a[n];

        long long sum=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x = a[0];
        sort(a,a+n);

        if(a[0]==x) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        
    }
    return 0;
}
