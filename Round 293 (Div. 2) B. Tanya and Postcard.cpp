#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    string s,t,k="";
    cin>>s>>t;
    int ans1=0,ans2=0;
    map<char,int> mp1,mp2;

    for(auto u:s) mp1[u]++;
    for(auto u:t) mp2[u]++;

    sort(s.begin(),s.end());

    for(auto u:s)
    {
        if(mp2[u]>0)
        {
            mp2[u]--;
            ans1++;
        }
        else k+= u;
    }

    for(int i=0;i<k.size();i++)
    {
        if(k[i]>='a' && k[i]<='z') k[i] -= 32;
        else k[i] += 32;
    }

    for(auto u:k)
    {
        if(mp2[u]>0)
        {
            mp2[u]--;
            ans2++;
        }
    }

    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}
