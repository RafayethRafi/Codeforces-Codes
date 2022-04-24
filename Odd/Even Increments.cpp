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
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        int x = a[0]%2;
        int y = a[1]%2;

        for(i=2;i<n;i++)
        {
            if(i%2==0 && (a[i]%2)!=x)
            {
                cout<<"NO"<<endl;
                f=0;
                break;
            }
            else if(i%2==1 && (a[i]%2)!=y)
            {
                cout<<"NO"<<endl;
                f =0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
    }
    return 0;
}
