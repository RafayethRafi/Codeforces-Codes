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
        int n,i;
        map<char,int>m;
        string s;
        cin>>n>>s;
        if(n!=5) cout<<"NO"<<endl;
        else
        {
            for(i=0;i<n;i++)
            m[s[i]]++;
            if(m['T']==1 && m['i']==1 && m['m']==1 && m['u']==1 && m['r']==1)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        

    }
    return 0;
}
