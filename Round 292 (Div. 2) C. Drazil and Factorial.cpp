#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i;
    string s,ans="";
    cin>>n>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='4') ans+= "223";
        else if(s[i]=='6') ans += "35";
        else if(s[i]=='8') ans += "2227";
        else if(s[i]=='9') ans += "2337";
        else if(s[i]!='0' && s[i]!='1') ans+= s[i]; 
    }

    sort(ans.begin(),ans.end(),greater<int>());

    cout<<ans<<endl;
    return 0;
}
