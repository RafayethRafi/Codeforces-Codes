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
        cin>>n;
        string s,t;
        cin>>s>>t;
        int cnt =0;
        for(i=0;i<n;i++)
        {
            if(t[i]=='1')
            {
                if(s[i]=='0') cnt++;
                else if(s[i-1]=='1' && (i-1)>=0)
                {
                    s[i-1]='0';
                    cnt++;
                }
                else if(s[i+1]=='1' && (i+1)<n)
                {
                    s[i+1]='0';
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
