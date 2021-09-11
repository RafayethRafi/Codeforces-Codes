 //https://codeforces.com/contest/1569/problem/A


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
        bool f=0;
        int n,i,j;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n;i++)
        {
            int a=0,b=0;
            for(j=i;j<n;j++)
            {
                if(s[j]=='a') a++;
                else b++;
                if(a==b)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
        if(f==0)
        cout<<"-1 -1"<<endl;
    }

    return 0;
}
