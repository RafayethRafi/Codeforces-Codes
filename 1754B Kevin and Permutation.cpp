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
        int n,i;
        cin>>n;

        if(n%2==0)
        {
            int x = n/2;
            for(i=x;i>=1;i--)
                cout<<i<<" "<<(i+x)<<" ";
        }
        else
        {
            cout<<n<<" ";
            n--;
           int x = n/2;
            for(i=x;i>=1;i--)
                cout<<i<<" "<<(i+x)<<" ";
        }

        cout<<endl;
    }
    return 0;
}
 
