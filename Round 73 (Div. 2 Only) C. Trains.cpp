#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define ll long long

int main()
{
    optimize();
    ll a,b;
    cin>>a>>b;

    ll n = (a*b)/__gcd(a,b);

    ll x = n/a, y = n/b;

    if(abs(x-y) == 1)
    {
        cout<<"Equal"<<endl;
    }
    else if(x>y) cout<<"Dasha"<<endl;
    else cout<<"Masha"<<endl;
    return 0;
}
