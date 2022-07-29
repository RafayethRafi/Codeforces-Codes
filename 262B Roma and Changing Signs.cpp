#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,k,i;
    bool f=1;
    long long sum=0, mn = 15000,x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<0 && k>0)
        {
            x*= -1;
            k--;
        }
        mn = min(mn,x);
        sum+= x;
    }
    if(k%2) sum -= (2*mn);
    
    cout<<sum<<endl;
    return 0;
}

