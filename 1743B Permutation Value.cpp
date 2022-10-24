#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
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

        for(i=1,j=n;i<j;i++,j--)
        {
            cout<<i<<" "<<j<<" ";
        }
        if(n%2) cout<<(n/2)+1;
        cout<<endl;
    }
    return 0;
}
 
