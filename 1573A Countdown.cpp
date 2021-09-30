 //https://codeforces.com/contest/1573/problem/A


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
        int n,i,x;
        long long sum=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            x = s[i] -'0';
            sum += x;
            if(x>0) sum++;
        }
        if(x>0)
        sum = sum - 1;
        cout<<sum<<endl;
    }

    return 0;
}
