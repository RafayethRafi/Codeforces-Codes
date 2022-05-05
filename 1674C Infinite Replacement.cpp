#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long binPow(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    long long ans = binPow(a,b/2);
    if(b%2==0)
    return ans*ans;
    return ans*ans*a;
}
int main()
{
    optimize();
    
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        int i,x=0,y=0;
        
        int s1= s.size(), s2 = t.size();
        for(i=0;i<t.size();i++)
        {
            if(t[i]=='a') y++;
        }
        if(y==0) cout<<binPow(2,s1)<<endl;
        else if(y==1 && s2==1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
 
