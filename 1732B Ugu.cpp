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
        int n,i,cnt=0;
        string s;
        cin>>n>>s;

        for(i=0;i<n-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0') cnt+=2;
        }
        if(s[n-1]=='0' && cnt) cnt--;

        cout<<cnt<<endl;
    }
    return 0;
}
 
