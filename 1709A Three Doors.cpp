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
        int x,i,cnt=0;
        cin>>x;

        int a[5];
        for(i=1;i<=3;i++) cin>>a[i];

        for(i=1;i<=3;i++)
        {
            if(a[x]==0) break;
            x= a[x];
            cnt++;
        }

        if(cnt==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
