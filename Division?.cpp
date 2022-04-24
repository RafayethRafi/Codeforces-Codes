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
        int n;
        cin>>n;
        if(n<=1399) cout<<"Division 4"<<endl;
        else if(n>=1400 && n<=1599) cout<<"Division 3"<<endl;
        else if(n>= 1600 && n<= 1899) cout<<"Division 2"<<endl;
        else if(n>=1900) cout<<"Division 1"<<endl;
    }
    return 0;
}
