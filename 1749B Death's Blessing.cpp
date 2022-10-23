#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long t,i;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n),b(n);
        long long sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());

        for(i=0;i<n-1;i++) sum+= b[i];
        
        cout<<sum<<endl;

    }
    return 0;
}
 
