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
        bool f = 0;
        int n,x,i;
        cin>>n>>x;

        int a[(2*n)+2];
        for(i=0;i<2*n;i++) cin>>a[i];
        sort(a,a+2*n);

        for(i=0;i<n;i++)
        {
            if((a[n+i]-a[i])<x)
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
