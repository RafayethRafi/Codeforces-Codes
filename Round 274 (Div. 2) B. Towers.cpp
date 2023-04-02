#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,k,i,j;
    cin>>n>>k;

    set<pair<int,int>> s;

    for(i=1;i<=n;i++)
    {
        int x;
        cin>>x;

        s.insert({x,i});
    }

    vector<pair<int,int>> v;

    while(k--)
    {
        pair<int,int> x = *(s.begin()), y = *(--(s.end()));

        if(x.first == y.first) break;

        s.erase(s.begin());
        s.erase((--s.end()));

        x.first++;
        y.first--;

        s.insert(x);
        s.insert(y);

        v.push_back({y.second,x.second});
    }

    pair<int,int> x = *(s.begin()), y = *(--(s.end()));

    cout<<(y.first-x.first)<<" "<<v.size()<<endl;

    for(auto u:v)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

    return 0;
}
