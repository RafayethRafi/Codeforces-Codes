//https://codeforces.com/problemset/problem/205/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,pos,cnt=0,i;
    cin>>n;
    vector<int>a(n);

    for(i=0;i<n;i++) cin>>a[i];
    int x = *min_element(a.begin(),a.end());

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            pos =i+1;
            cnt++;
        }
    }
    if(cnt>1)
        cout<<"Still Rozdil"<<endl;
    else cout<<pos<<endl;

    return 0;
}

