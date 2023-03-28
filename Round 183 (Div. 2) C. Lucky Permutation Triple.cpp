#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i;
    cin>>n;

    if(n&1)
    {
        for(i=0;i<n;i++) cout<<i<<" ";
        cout<<endl;
        for(i=0;i<n;i++) cout<<i<<" ";
        cout<<endl;
        for(i=0;i<n;i++) cout<<(i+i)%n<<" ";
        cout<<endl;
        
    }
    else cout<<-1<<endl;
    return 0;
}
