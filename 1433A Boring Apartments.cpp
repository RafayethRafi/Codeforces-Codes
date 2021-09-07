//https://codeforces.com/problemset/problem/1433/A


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
        int n;
        cin>>n;
        int x = n%10;
        x--;
        x = x*10;

        string s = to_string(n);

        int sz = s.size();

        if(sz==1) x += 1;
        else if(sz==2) x +=3;
        else if(sz==3) x += 6;
        else x+= 10;

        cout<<x<<endl;
    }

    return 0;
}

