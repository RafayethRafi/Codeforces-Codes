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
        long long n,mn,mx;
        cin>>n;
        if(n%2==1 || n<4) cout<<-1<<endl;
        else
        {
            mn = n/6;
            if(n%6!=0) mn++;
            
            mx = n/4;

            cout<<mn<<" "<<mx<<endl;
        }

        
    }
    return 0;
}
