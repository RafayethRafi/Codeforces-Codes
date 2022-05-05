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
        int i,x = s[0] - 'a';
        int z = x;
        x = x*25;
        int y = s[1] - 'a';
        if(z>y) x+= y+1;
        else x+=y;

        cout<<x<<endl;
    }
    return 0;
}
