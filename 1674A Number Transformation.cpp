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
        int x,y,a,b;
        cin>>x>>y;
        if(x>y || y%x!=0) cout<<0<<" "<<0<<endl;
        else cout<<1<<" "<<(y/x)<<endl;
    }
    return 0;
}
