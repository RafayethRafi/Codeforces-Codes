#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i;
    cin>>t;
    while(t--)
    {
        bool f=1;
        string s;
        cin>>s;
        int n= s.size();
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' && s[i+1]=='b'&& i==0) f=0;
            else if(s[i]=='b' && s[i+1]=='a'&& i==0) f=0;
            else if(s[i]=='a' && s[i-1]=='b'&& i==(n-1)) f=0;
            else if(s[i]=='b' && s[i-1]=='a'&& i==(n-1)) f=0;
            else if(s[i]=='a' && s[i+1]=='b' && s[i-1]=='b') f=0;
            else if(s[i]=='b' && s[i+1]=='a' && s[i-1]=='a') f=0;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
