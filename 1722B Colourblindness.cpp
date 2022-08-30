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
        int n,i,j;
        cin>>n;
        bool f=0;
        string s,t;
        cin>>s>>t;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='R' && t[i]!='R')
            {
                f=1;
                break;
            }
            else if(t[i]=='R' && s[i]!='R')
            {
                f=1;
                break;
            }
        }

        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
