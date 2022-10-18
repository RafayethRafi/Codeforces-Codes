#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s[10];
        for(i=0;i<8;i++)
        {
            cin>>s[i];
        }
            bool f=0;
        for(i=0;i<8;i++)
        {
            int cnt=0;

            for(j=0;j<8;j++)
            {
                if(s[i][j]!='R')
                    break;
                cnt++;
            }
            if(cnt==8)
            {
                f=1;
                break;
            }
        }

        if(f) cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}
 
