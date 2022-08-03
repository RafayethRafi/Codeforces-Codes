#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    vector<bool> vb(200,false);
    int m,n,x,i,j,k,l;
    cin>>n>>m>>x;

    char ch[n][m];
    bool f =0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {cin>>ch[i][j];}
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ch[i][j]!='S') vb[ch[i][j]] = 1;
            else
            {
                f =1;

                for(k=0;k<n;k++)
                {
                    for(l=0;l<m;l++)
                    {
                        if(ch[k][l]!= 'S' && sqrt( ((k-i)*(k-i)) + ((l-j)*(l-j))) <=x)
                        {vb[ ch[k][l]- 32 ] = true;}
                    }
                }
            }
        }
    }

    int q,cnt=0;
    string s;
    cin>>q>>s;

    for(i=0;i<q;i++)
    {
        if(s[i]>='a' && s[i]<='z' && vb[s[i]]!=true)
        {
            cout<<-1<<endl;
            return 0;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            if(!f || vb[s[i]+32] == false)
            {
                cout<<-1<<endl;
                return 0;
            }
            else if(vb[s[i]] == false) cnt++;
             
        }
    }

    cout<<cnt<<endl;
    return 0;
}
