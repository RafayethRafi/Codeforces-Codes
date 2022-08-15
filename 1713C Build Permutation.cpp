#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int i,j;

bool sq(int s)
{
    int x = sqrt(s);
    return (x*x==s);
}
void solve(int n)
{
    if(n==-1) return;
    for(i=n;;i++)
    {
        if(sq(i))
        {
            int x = i-n;
            solve(x-1);

            for(j=n;j>=x;j--)
            {
                cout<<j<<" ";
            }
            return;
        }
    }
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n-1);
        cout<<endl;
    }
    return 0;
}
