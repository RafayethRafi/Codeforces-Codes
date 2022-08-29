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
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;

        if(x-1<=d && x+d>=n ||((n-x)<=d && (m-y)<=d) || (x-1<=d && y-1<=d)) cout<<-1<<endl;
        else if(y-1<=d && y+d>=m) cout<<-1<<endl;
        else if(x==n && y+d>=m) cout<<-1<<endl;
        else if(y==m && x+d>=n) cout<<-1<<endl;
        else cout<<(n-1)+(m-1)<<endl;

    }
    return 0;
}
