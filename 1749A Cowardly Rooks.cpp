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
        int n,m,x,y,i;
        cin>>n>>m;
        for(i=0;i<m;i++) cin>>x>>y;

        if(m<n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
