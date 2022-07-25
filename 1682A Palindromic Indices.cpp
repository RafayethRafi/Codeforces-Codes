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
        int n,cnt=0;
        string s;
        cin>>n>>s;

        if(s.size()%2) cnt++;
        else cnt+=2;

        int x = (s.size()-1)/2;

        for(i=x;i>0;i--)
        {
            if(s[i]==s[i-1]) cnt+=2;
            else break;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
