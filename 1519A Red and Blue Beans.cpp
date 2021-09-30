//https://codeforces.com/contest/1519/problem/A


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long r,b,d;
        cin>>r>>b>>d;

        long long  x = min(r,b);
        long long y = max(r,b);

        long long z = x*(d+1);
        if(y>z) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
 
