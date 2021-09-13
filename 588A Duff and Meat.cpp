//https://codeforces.com/contest/588/problem/A?fbclid=IwAR24zzkdkk0jadKk-4GXk6HD6QkD-EV8pgGNz2HMiyK3i_NWLQWwdcYu67U


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
        long long sum=0;
        for(i=0;i<n;)
        {
            int x = a[i];
            int y = b[i];
            i++;
            while(b[i]>y && i<n)
            {
                x+= a[i];
                i++;
            }
            sum = sum+ (x*y);

        }
        cout<<sum<<endl;

    return 0;
}

