#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int n;
vector<int>v;
vector<vector<int>>dp;

int ans(int i,int prev)
{
    if(i==n) return 0;

    if(dp[prev][i] != -1) return dp[prev][i];

    int sum =0;
    if(v[i]==0) sum = ans(i+1,0) + 1;

    if(v[i]==1)
    {
        if(prev==1) sum = ans(i+1,0) + 1;
        else sum = ans(i+1,1); 
    }

    if(v[i]==2)
    {
        if(prev==2) sum = ans(i+1,0) + 1;
        else sum = ans(i+1,2); 
    }

    if(v[i]==3)
    {
        if(prev==1) sum = ans(i+1,2);
        else if(prev==2) sum = ans(i+1,1);
        else sum = min(ans(i+1,1),ans(i+1,2));
    }

    return dp[prev][i] = sum;
}
int main()
{
    optimize();
    cin>>n;
    v.resize(n);
    dp.resize(3,vector<int>(n,-1));

    for(auto &u : v) cin>>u;

    cout<<ans(0,0)<<endl;
    return 0;
}
