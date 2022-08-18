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
        int n,q,i;
        cin>>n>>q;
        deque<int>dq;
        vector<int>ans[100005];
        int a[n+5];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            dq.push_back(i);
        }

        int x = dq.front(); dq.pop_front();
        for(i=1;i<=n;i++)
        {
            if(a[x]>a[dq.front()])
            {
                ans[x].push_back(i);
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                ans[dq.front()].push_back(i);
                dq.push_back(x);
                x = dq.front();
                dq.pop_front();
            }
        }

        while(q--)
        {
            int j,k;
            cin>>j>>k;

            int idx = upper_bound(ans[j].begin(),ans[j].end(),k) - ans[j].begin();
            if(k<=n)
            {
                cout<<idx<<endl;
                continue;
            }
            if(a[j]==n) cout<<idx+(k-n)<<endl;
            else cout<<idx<<endl;
            
        }


    }
    return 0;
}
