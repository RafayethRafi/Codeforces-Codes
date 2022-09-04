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
        int n,k,r,c,i,j;
        cin>>n>>k>>r>>c;
        r--;c--;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i+j-r-c)%k==0) cout<<"X";
                else cout<<".";
            }
            cout<<endl;
        }
    }
    return 0;
}
