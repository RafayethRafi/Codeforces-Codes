#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

bool solve(vector<int>a, int n,int k)
{
    multiset<int>s;
    for(auto u:a) s.insert(u);

    for(int i=1;i<=k;i++)
    {
        int x = k-i+1;

        auto ii = s.upper_bound(x);
        if(ii==s.begin()) return false;
        ii--;

        s.erase(ii);
        if(s.empty()) break;


        ii = s.begin();
        int y = (*ii);
        y+= x;
        s.erase(ii);
        s.insert(y);


    }
    return true;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>a(n);

        for(i=0;i<n;i++) cin>>a[i];

        int k;
        int l=0,r=n;
        while(l<=r)
        {
            int m = l + (r-l)/2;
            if(solve(a,n,m))
            {
                k = m;
                l = m+1;
            }
            else r = m-1;
        }

        cout<<k<<endl;
    }
    return 0;
}
 
