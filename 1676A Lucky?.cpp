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
        int sum1=(s[0]-'0') + (s[1]-'0') + (s[2]-'0');
        int sum2 = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');

        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
