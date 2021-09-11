//https://codeforces.com/problemset/problem/165/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i,j,cnt=0;
    cin>>n;
    int x[n],y[n];

    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];

    for(i=0;i<n;i++)
    {
        bool u =0,d=0,l=0,r=0;

        for(j=0;j<n;j++)
        {
            if(x[i]<x[j] && y[i]==y[j]) r=1;
            if(x[i]>x[j] && y[i]==y[j]) l=1;
            if(x[i]==x[j] && y[i]<y[j]) u=1;
            if(x[i]==x[j] && y[i]>y[j]) d=1;
        }
        if(l && r && u && d) cnt++;
    }

    cout<<cnt<<endl;


    return 0;
}
