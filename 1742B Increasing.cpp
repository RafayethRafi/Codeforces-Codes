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
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }

        if(s.size()<n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
 
