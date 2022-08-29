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
        set<char>s;
        string a,b;
        cin>>a>>b;

        s.insert(a[0]);
        s.insert(a[1]);
        s.insert(b[0]);
        s.insert(b[1]);
        cout<<s.size()-1<<endl;
    }
    return 0;
}
