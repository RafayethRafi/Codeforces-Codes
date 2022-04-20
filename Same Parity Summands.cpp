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
        bool f=1;
        int n,k,i;
        cin>>n>>k;
        int x = k-1;
        int y = n-x;
        if(y%2 && y>0)
        {
            f=0;
            cout<<"YES"<<endl<<y<<" ";
            for(i=1;i<k;i++) cout<<1<<" ";
            cout<<endl;
        }
        if(f)
        {
            x = (k-1)*2;
            y = n-x;
            if(y%2==0 && y>0)
            {
                f=0;
                cout<<"YES"<<endl<<y<<" ";
                for(i=1;i<k;i++) cout<<2<<" ";
                cout<<endl;
            }
        }
        if(f) cout<<"NO"<<endl;
    }
    return 0;
}
