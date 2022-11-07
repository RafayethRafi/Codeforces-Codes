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
        long long n,sum=0,i;
        cin>>n;
        long long a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+= a[i];
        }

        cout<<abs(sum)<<endl;
    }
    return 0;
}
