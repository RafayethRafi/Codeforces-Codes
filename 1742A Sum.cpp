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

        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a-b)==c || abs(b-c)==a || abs(a-c)==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 
