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
        long long x =0,i;
        for(i=0;i<s.size();i++)
        {
            int tmp = s[i]-'a';
            x+= tmp+1;
        }
        if(s.size()==1) cout<<"Bob "<<x<<endl;
        else if(s.size()%2==0) cout<<"Alice "<<x<<endl;
        else
        {
            int y = s[0] -'a' +1;
            int z = s[s.size()-1] - 'a' +1;
            if(y>z) cout<<"Alice "<<x-(2*z)<<endl;
            else cout<<"Alice "<<x-(2*y)<<endl;
        }
    }
    return 0;
}
