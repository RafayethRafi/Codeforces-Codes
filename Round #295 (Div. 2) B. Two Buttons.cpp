#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,m,cnt1=0,cnt2=0;
    cin>>n>>m;
    int x = m;
    if(m<=n) cout<<(n-m)<<endl;
    else
    {
        while(m>n)
        {
            if(m%2)
            {
                m++;
                cnt1++;
            }
            m/=2;
            cnt1++;
        }
        cnt1+= (n-m);

        while(x>n)
        {
            n*=2;
            cnt2++;
        }
        cnt2+= n-x;

        cout<<min(cnt1,cnt2)<<endl;
    }


    return 0;
}
