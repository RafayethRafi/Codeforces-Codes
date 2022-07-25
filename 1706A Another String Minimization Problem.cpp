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
        int n,m,i;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        string s = "";
        for(i=0;i<m;i++) s+= 'B';

        for(i=0;i<n;i++)
        {
            int x = min(a[i],(m+1-a[i]));
            int y = max(a[i],(m+1-a[i]));

            if(s[x-1]!='A') s[x-1] = 'A';
            else s[y-1] = 'A';
        }

        cout<<s<<endl;
    }
    return 0;
}

 
