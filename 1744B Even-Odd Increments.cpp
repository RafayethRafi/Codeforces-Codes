
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,i;
        cin>>n>>q;

        long long sum=0,e=0,o=0;
        for(i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            sum+=x;

            if(x%2==0) e++;
        }

        o= n-e;

        while(q--)
        {
            long long type ,x;
            cin>>type>>x;

            if(type==0)
            {
                sum+= (e*x);

                if(x%2) e=0,o=n;
            }
            else
            {
                sum+= (o*x);

                if(x%2) e=n,o=0;
            }

            cout<<sum<<endl;
        }
    }
    return 0;
}

