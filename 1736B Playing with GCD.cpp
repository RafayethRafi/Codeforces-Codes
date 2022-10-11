
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int lcm(int a,int b)
{
    int x = __gcd(a,b);
    return (a*b)/x;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n+5],b[n+5];
        bool f=0;
        for(i=1;i<=n;i++) cin>>a[i];
        b[1] = a[1];
        b[n+1] = a[n];

        for(i=2;i<=n;i++)
        {
            b[i] = lcm(a[i-1],a[i]);
        }

        for(i=1;i<=n;i++)
        {
            if(__gcd(b[i],b[i+1]) != a[i])
            {
                f=1;
                break;
            }
        }

        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

