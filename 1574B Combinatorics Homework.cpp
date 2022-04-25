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
        int a,b,c,m;
        cin>>a>>b>>c>>m;

        if(a>b) swap(a,b);
        if(b>c) swap(b,c);

        if(m<=(a+b+c-3) && m>=(c-a-b-1))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
