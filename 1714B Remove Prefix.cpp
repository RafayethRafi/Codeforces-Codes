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
        int n,i;
        cin>>n;
        int a[n];
        map<int,int>m;

        for(i=0;i<n;i++)cin>>a[i];

        for(i=n-1;i>=0;i--)
        {
            if(m[a[i]]>0)
            {
                break;
            }
            else m[a[i]]++;
        }

        cout<<i+1<<endl;
    }
    return 0;
}
