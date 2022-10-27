#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,x,i;
    cin>>n>>x;

    vector<int>a(x+1,0);

    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[k]++;
    }

    for(i=1;i<x;i++)
    {
        if((a[i]%(i+1))==0)
        {
            a[i+1] += (a[i]/(i+1));

            a[i] = 0;
        }
    }

    for(i=1;i<x;i++)
    {
        if(a[i]!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
