#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,i;
    cin>>n;
    int k1,k2;
    cin>>k1;
    queue<int> a;
    for(i=0;i<k1;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }

    cin>>k2;
    queue<int> b;
    for(i=0;i<k2;i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }

    int cnt =0;
    while(1)
    {
        int x = a.front();
        int y = b.front();
        b.pop();
        a.pop();

        if(x>y)
        {
            a.push(y);
            a.push(x);
        }
        else
        {
            b.push(x);
            b.push(y);

        }
        cnt++;

        if(a.empty())
        {
            cout<<cnt<<" 2"<<endl;
            break;
        }
        if(b.empty())
        {
            cout<<cnt<<" 1"<<endl;
            break;
        }
        if(cnt>1e4)
        {
            cout<<-1<<endl;
            break;
        }
    }

    return 0;
}
