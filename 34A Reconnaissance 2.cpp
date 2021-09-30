//https://codeforces.com/contest/34/problem/A


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int ans = INT_MAX;
    int n,l,r,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        int x = abs(a[i] - a[i+1]);
        if(x<ans)
        {
            l = i+1;
            r = i+2;
            ans =x;
        }
    }
    int x = abs(a[n-1] - a[0]);
    if(x<ans)
        {
            l = n;
            r =1;
        }
        cout<<l<<" "<<r<<endl;

    return 0;
}
 
