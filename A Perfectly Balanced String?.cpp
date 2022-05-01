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
        string s;
        cin>>s;
        int cnt=1,i;
        bool f =0;
        char ch = s[0];
        map<char,int>m;
        m[s[0]]++;
        for(i=1;i<s.size();i++)
        {
            if(ch==s[i]) cnt++;
            if(s[i]==s[i-1]) f=1;
            m[s[i]]++;
        }
        if(cnt==s.size()) cout<<"YES"<<endl;
        else if(m.size()==2)
        {
            if(f) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else
        {
            bool f2=0;
            string t="",y="",ans="";
            int x = m.size();
            for(i=0;i<x;i++) t+= s[i];
            for(i=1;i<t.size();i++)
            {
            if(s[i]==s[i-1]) f=1;
            }
            if(f) cout<<"NO"<<endl;
            else
            {for(i=0;i<s.size();i+=x) y+= t;
            while(y.size()>s.size()) y.pop_back();
            if(y==s) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
