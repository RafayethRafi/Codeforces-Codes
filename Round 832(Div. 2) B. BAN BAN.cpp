#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n%2) cout<<(n/2)+1<<endl;
        else cout<<(n/2)<<endl;

        for(i=2,j=3*n;i<j;i+=3,j-=3)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
