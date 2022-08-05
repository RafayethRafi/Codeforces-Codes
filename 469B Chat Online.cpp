#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

bool a[40000];
vector<int>v;

int main()
{
    optimize();
    int p,q,l,r,x,y,i,j;
    cin>>p>>q>>l>>r;

    for(i=0;i<p;i++)
    {
        cin>>x>>y;
        for(j=x;j<=y;j++) a[j] = 1;
    }

    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        for(j=x;j<=y;j++) v.push_back(j);
    }

    int cnt =0;
    for(i=l;i<=r;i++)
    {
        bool f= 0;
        for(auto u:v)
        {
            if(a[u+i]>1000) break;
            if(a[u+i]== 1)
            {
                cnt++;
                break;
            }
        }
        
    }

    cout<<cnt<<endl;
    
    return 0;
}
