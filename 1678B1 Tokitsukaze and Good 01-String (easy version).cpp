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
        string s;
        cin>>n>>s;
        int cnt=0;
        for(i=0;i<n-1;i+=2)
        {
            if(s[i]!=s[i+1]) cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
