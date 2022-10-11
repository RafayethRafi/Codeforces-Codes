#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,za=0,zb=0,cnt=0,oa=0,ob=0;
        cin>>n;
        int a[n],b[n];
        bool f=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0) za++;
            else oa++;
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==0) zb++;
            else ob++;
            if(a[i]!=b[i])
            {
                cnt++;
                f=1;
            }
        }

        if(!f && (za==zb)) cout<<0<<endl;
        else if(cnt<(abs(za-zb)+1)) cout<<cnt<<endl;
        else cout<<(abs(za-zb)+1)<<endl;



    }
    return 0;
}
