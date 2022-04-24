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
        string s,t,ans="";
        cin>>s>>t;
        int a[30],i;
        memset(a,0,sizeof(a));
        for(i=0;i<t.size();i++)
        {
            int x = t[i]-'A';
            a[x]++;
        }

        for(i=s.size()-1;i>=0;i--)
        {
            int x = s[i]-'A';
            if(a[x])
            {
                ans+= s[i];
                a[x]--;
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
