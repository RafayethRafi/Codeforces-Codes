//https://codeforces.com/problemset/problem/224/A


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int a,b,c;
    cin>>a>>b>>c;
    int x = sqrt((a*b)/c);
    int y = sqrt((b*c)/a);
    int z = sqrt((c*a)/b);

    cout<<(x+y+z)*4<<endl;

    return 0;
}

