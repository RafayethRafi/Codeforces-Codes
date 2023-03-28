#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout<<0<<endl;
        return 0;
    }

    int a2=0,a3=0,a5=0,b2=0,b3=0,b5=0;

    while(a%2==0 || a%3==0 || a%5==0)
    {
        if(a%5==0) a/=5, a5++;
        else if(a%3==0) a/=3, a3++;
        else if(a%2==0) a/=2, a2++;
    }
    while(b%2==0 || b%3==0 || b%5==0)
    {
        if(b%5==0) b/=5, b5++;
        else if(b%3==0) b/=3, b3++;
        else if(b%2==0) b/=2, b2++;
    }

    if(a!=b) cout<<-1<<endl;
    else
    {
        cout<< abs(a2-b2)+abs(a3-b3)+ abs(a5-b5)<<endl;
    }
    return 0;
}
