#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n;
    cin>>n;
    long long ans = pow(2,n/2);
    if(n%2) cout<<0<<endl;
    else cout<<ans<<endl;
    return 0;
}
