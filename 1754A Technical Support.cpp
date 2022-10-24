#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
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
        string s;
        cin>>s;
        int q=0,a=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='Q') q++;
            if(s[i]=='A' && q>0) q--;
        }
        if(q>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
