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
        int n,i,cnt=0;
        cin>>n;
        int a[n];
        vector<int> vis(n,-1),p(n,-1);

        for(i=0;i<n;i++)
        {
            bool f=1;
            int k;
            cin>>k;
            while(k--)
            {
                int x;
                cin>>x;
                if(f && vis[x-1]==-1)
                {
                    vis[x-1]=1;
                    p[i] =1;
                    f=0;
                    cnt++;
                }
            }
        }

        if(cnt==n) cout<<"OPTIMAL"<<endl;
        else
        {
            cout<<"IMPROVE"<<endl;

            for(i=0;i<n;i++)
            {
                if(p[i]==-1)
                {
                    cout<<i+1<<" ";
                    break;
                }
            }
            for(i=0;i<n;i++)
            {
                if(vis[i]==-1)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }


    }
    return 0;
}
