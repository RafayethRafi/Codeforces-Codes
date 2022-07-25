#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];

        int m;
        cin>>m;
        int b[m];
        for(i=0;i<m;i++) cin>>b[i];

        int x = *max_element(a,a+n);
        int y = *max_element(b,b+m);

        if(x==y) cout<<"Alice"<<endl<<"Bob"<<endl;
        else if(x>y) cout<<"Alice"<<endl<<"Alice"<<endl;
        else cout<<"Bob"<<endl<<"Bob"<<endl;
    }
    return 0;
}
