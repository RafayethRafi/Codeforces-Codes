#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,sum=0;
        string s;
        cin>>n>>s;

        vector<long long>v,k;
        for(i=1;i<=n;i++)
        {
            long long x = n-i;
            if(s[i-1]=='L') sum += (i-1);
            else sum+= x;
            
            if(s[i-1]=='L' && x>(i-1)) x-=(i-1);
            else if(s[i-1]=='R' && (i-1)>x) x = i-1-x;
            else x=0;

            k.push_back(x);
        }
        v.push_back(sum);
        long long j=1;
        sort(k.rbegin(),k.rend());

        for(i=0;i<n;i++,j++)
        {
            v.push_back(v[j-1]+k[i]);
        }

        for(i=1;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
