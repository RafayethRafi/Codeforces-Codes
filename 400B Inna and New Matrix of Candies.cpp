#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,m,g,s,i,j;
    cin>>n>>m;
    char a[n][m];
    bool f=0;
    set<int>x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='G') g= j;
            if(a[i][j]=='S') s=j;
        }
        if(s<g) f=1;
        x.insert(s-g);
    }
    if(f) cout<<-1<<endl;
    else cout<<x.size()<<endl;

    return 0;
}
