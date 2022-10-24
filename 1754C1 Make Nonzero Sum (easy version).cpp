#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        vector<pair<int,int>>v;

        if(n%2)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            for(i=0;i<n;i+=2)
            {
                if((a[i]>0 && a[i+1]>0) || (a[i]<0 && a[i+1]<0) )
                {
                    cnt++;
                    v.push_back({(i+1),(i+2)});
                }
                if((a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0))
                {
                    cnt+=2;
                    v.push_back({(i+1),(i+1)});
                    v.push_back({(i+2),(i+2)});
                }
            }

            cout<<cnt<<endl;
            for(auto u:v)
            {
                cout<<u.first<<" "<<u.second<<endl;
            }
        }
    }
    return 0;
}
 
