#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long n,i;
    cin>>n;

    map<long long,long long> x,y;
    map<pair<long long,long long>,long long>mp;

    for(i=0;i<n;i++)
    {
        pair<long long,long long> p;
        cin>>p.first>>p.second;

        x[p.first]++;
        y[p.second]++;

        mp[p]++;
    }
    long long ans =0;

    for(auto u:x) ans += ((u.second)*(u.second-1))/2;
    for(auto u:y) ans += ((u.second)*(u.second-1))/2;
    for(auto u:mp) ans -= ((u.second)*(u.second-1))/2;

    cout<<ans<<endl;
    
    return 0;
}
