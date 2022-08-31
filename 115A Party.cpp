#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int cnt;
int a[30000];
void dfs(int x)
{
    cnt++;
    if(a[x]==-2) return;
    dfs(a[x]);
}

int main()
{
    optimize();
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x--;
        a[i] = x;
    }
    int ans =0;
    for(i=0;i<n;i++)
    {
        cnt=0;
        dfs(i);
        
        ans = max(cnt,ans);
    }

    cout<<ans<<endl;
    return 0;
}
