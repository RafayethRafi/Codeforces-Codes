#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    

    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++)
    {
        vector<int>v(n,0);
        int j=i;
        while(1)
        {
            if(v[j]==2)
            {
                cout<<j+1<<" ";
                break;
            }
            v[j]++;
            j= a[j]-1;
            
        }
    }
    cout<<endl;
}
