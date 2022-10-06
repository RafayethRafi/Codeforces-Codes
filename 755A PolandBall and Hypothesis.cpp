#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

bool prime(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    optimize();
    int n;
    cin>>n;
    
    for(int i=1;i<1000;i++)
    {
        if(!prime(n*i+1))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
