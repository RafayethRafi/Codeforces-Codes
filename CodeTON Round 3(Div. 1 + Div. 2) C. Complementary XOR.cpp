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
        int n,i;
        string a,b;
        cin>>n>>a>>b;

        int cnte=0,cntd=0;

        for(i=0;i<n;i++)
        {
            if(a[i]==b[i]) cnte++;
            else cntd++;
        }

         vector<int>v;
         for(i=0;i<n;i++)
                {
                    if(a[i]=='1') v.push_back(i+1);
                }

        if(cnte>0 && cntd>0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;

           

            if(cntd==0)
            {
                

                if(v.size()%2==0)
                {
                    cout<<v.size()<<endl;
                    for(i=0;i<v.size();i++) cout<<v[i]<<" "<<v[i]<<endl;
                }
                else
                {
                    cout<<v.size()+3<<endl;
                    for(i=0;i<v.size();i++) cout<<v[i]<<" "<<v[i]<<endl;
                    cout<<"1 1"<<endl;
                    cout<<2<<" "<<n<<endl;
                    cout<<1<<" "<<n<<endl;
                }
            }
            else
            {
                if(v.size()%2)
                {
                    cout<<v.size()<<endl;
                    for(i=0;i<v.size();i++) cout<<v[i]<<" "<<v[i]<<endl;
                }
                else
                {
                    cout<<v.size()+3<<endl;
                    for(i=0;i<v.size();i++) cout<<v[i]<<" "<<v[i]<<endl;
                    cout<<"1 1"<<endl;
                    cout<<2<<" "<<n<<endl;
                    cout<<1<<" "<<n<<endl;
                }
            }
        }
    }
    return 0;
}
