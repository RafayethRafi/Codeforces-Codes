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
        
        map<string,int>m;
        vector<string>v[3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<n;j++)
            {
                string s;
                cin>>s;

                m[s]++;
                v[i].push_back(s);

            }
        }
        int a=0, b=0, c= 0;
        for(i=0;i<3;i++)
        {
            for(auto u:v[i])
            {
                if(m[u]==1)
                {
                    if(i==0) a+=3;
                    else if(i==1) b+=3;
                    else c+=3;
                }
                else if(m[u]==2)
                {
                    if(i==0) a+=1;
                    else if(i==1) b+=1;
                    else c+=1;
                }
            }
        }

        cout<<a<<" "<<b<<" "<<c<<endl;

    }
    return 0;
}
