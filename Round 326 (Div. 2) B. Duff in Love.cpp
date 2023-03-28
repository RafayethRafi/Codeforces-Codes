#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define ll long long

int main()
{
    optimize();
    ll n,x,i,ans=1;
    cin>>n;

    x=n;
    for(i=2;i*i<=n;i++)
    {
        if(x%i==0)
        {
            ans *= i;

            while(x%i==0) x/=i;
        }
    }

    if(x>1) ans*=x;

    cout<<ans<<endl;
    return 0;
}
