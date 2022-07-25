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
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if(l1>l2)
        {
            swap(l1,l2);
            swap(r1,r2);
        }
        long long ans=0;
        if(l2>r1) ans = (l1+l2);
        else ans = l2;

        cout<<ans<<endl;
    }
    return 0;
}
