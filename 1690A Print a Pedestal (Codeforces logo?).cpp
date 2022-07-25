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
        int n;
        cin>>n;

        int ans = n/3;
        int x = n%3;
        if(x==2) cout<<(ans+1)<<" "<<(ans+2)<<" "<<(ans-1)<<endl;
        else if(x==1) cout<<(ans)<<" "<<(ans+2)<<" "<<(ans-1)<<endl;
        else cout<<(ans)<<" "<<(ans+1)<<" "<<(ans-1)<<endl;
    }
    return 0;
}
