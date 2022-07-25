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
        int n,m,i,j,k;
        cin>>n>>m;
        vector<string> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        int sum = INT_MAX;
        for(i=0;i<n;i++)
        {
            for(k=0;k<n;k++)
            {
                if(i==k) continue;
                int z =0;
            for(j=0;j<m;j++)
            {
                int x = v[i][j] - 'a';
                int y = v[k][j] - 'a';

                z += abs(x-y);

            }
            sum = min(sum,z);
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}
