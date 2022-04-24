#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define endl '\n'
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x;
        cin>>n;
        map<int,int>m;
        for(i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        bool f=1;
        for(auto u:m)
        {
            if(u.second>=3)
            {
                cout<<u.first<<endl;
                f = 0;
                break;
            }
        }
        if(f) cout<<-1<<endl;
    }
    return 0;
}
