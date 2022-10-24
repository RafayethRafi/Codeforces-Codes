#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long i;
    vector<long long>v;
        for(i=1;i<10002;i++) v.push_back(i*i*i);
    int t;
    cin>>t;
    while(t--)
    {
        bool f=0;
        long long x;
        cin>>x;

        for(i=1;i*i*i<x;i++)
        {
            long long ans = x-(i*i*i);
            if(binary_search(v.begin(),v.end(),ans))
            {
                f=1;
                break;
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
 
