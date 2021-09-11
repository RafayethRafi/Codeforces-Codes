//https://codeforces.com/problemset/problem/139/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n;
    cin>>n;
    vector<int>v;
    int x =7;
    while(x--)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    int i=0;
    long long sum =0;
    while(sum<n)
    {
        if(i==7) i=0;
        sum += v[i];
        i++;


    }
    cout<<i<<endl;

    return 0;
}
