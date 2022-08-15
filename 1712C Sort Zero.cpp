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
        int a[n];
        
        map<int,int>m;
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int ans = m.size();

        for(i=n-1;i>=0;i--)
        {
            if( i!= (n-1) && a[i]>a[i+1]) break;
            m[a[i]]--;

            if(m[a[i]]==0)
            {
                m.erase(a[i]);
                s.erase(a[i]);
            }
            else s.insert(a[i]);

            if(s.size()==0) ans= min(ans,(int)m.size());
        }

        cout<<ans<<endl;
    }
    return 0;
}
