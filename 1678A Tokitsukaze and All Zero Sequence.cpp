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
        int n,i;
        cin>>n;
        bool f2=0;
        int cnt=0;
        map<int,int>m;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==0) cnt++;
            m[x]++;
        }

        for(auto u:m)
        {
            if(u.second>1)
            {
                f2=1;
                break;
            }
        }

        if(cnt>0) cout<<(n-cnt)<<endl;
        else if(f2) cout<<n<<endl;
        else cout<<(n+1)<<endl;
    }
    return 0;
}
