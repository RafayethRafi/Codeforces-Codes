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
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        long long x = a*d , y = b*c;


        if(x==y) cout<<0<<endl;
        else if((x==0 && y!=0) || (y==0 && x!=0)) cout<<1<<endl;
        else if(x%y==0 || y%x==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
 
