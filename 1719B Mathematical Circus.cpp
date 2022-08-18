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

        if(k%4==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(i=1;i<=n;i+=2)
        {
            long long x = (i+k)*(i+1);
            if(x%4==0) cout<<i<<" "<<i+1<<endl;
            else cout<<i+1<<" "<<i<<endl;
        }
    }
    return 0;
}
