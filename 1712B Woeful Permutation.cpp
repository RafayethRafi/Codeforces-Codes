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
        vector<int>v;
        int n,i;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else
        {
            if(n%2)
            {
                for(i=n;i>1;i-=2) v.push_back(i-1),v.push_back(i);
                v.push_back(1);
            }
            else
            {
                for(i=n;i>0;i-=2) v.push_back(i-1),v.push_back(i);
            }
               
                reverse(v.begin(),v.end());

                for(i=0;i<n;i++) cout<<v[i]<<" ";

            cout<<endl;
        }
    }
    return 0;
}
