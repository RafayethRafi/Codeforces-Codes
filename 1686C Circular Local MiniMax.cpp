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
        int n,i,j;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i];

            sort(a,a+n);
            int x[n],y[n];
            for(i=0;i<n/2;i++) x[i] = a[i];
            for(i=0;i<n/2;i++) y[i] = a[i+(n/2)];
            bool f=1;
            for(i=0,j=0;i<n/2;i++,j++)
            {
                b[j] = x[i];
                j++;
                b[j]= y[i];
            }
            for(i=1;i<n-1;i++)
            {
                if(b[i]>b[i+1] && b[i]>b[i-1]) {}
                else if(b[i]<b[i+1] && b[i]<b[i-1]) {}
                else
                {
                    f=0;
                    break;
                }
            }
            if(b[0]>b[1]&& b[0]>b[n-1]) {}
            else if(b[0]<b[1]&& b[0]<b[n-1]) {}
            else
            {
                    f=0;
            }
            if(b[n-1]>b[0]&& b[n-1]>b[n-2]) {}
            else if(b[n-1]<b[0]&& b[n-1]<b[n-2]) {}
            else
            {
                    f=0;
            }

            if(f==0) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(i=0;i<n;i++) cout<<b[i]<<" ";
                cout<<endl;
            }

    }
    return 0;
}
