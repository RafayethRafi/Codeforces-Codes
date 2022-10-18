
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
        int n,i;
        cin>>n;
        int a[n];
        map<int,char>m;

        for(i=0;i<n;i++) cin>>a[i];

        string s;
        cin>>s;
        bool f=0;
        for(i=0;i<n;i++)
        {
            if(m[a[i]]==0) m[a[i]]= s[i];
            else if(m[a[i]]== s[i]) continue;
            else
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

