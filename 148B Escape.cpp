#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;
    double x = vp*t;
    int cnt=0;
    if(vp>vd)
    {
        cout<<0<<endl;
        return 0;
    }
    while(1)
    {
        if(x>=c) break;
        double T = (x*1.0)/(vd-vp);
        x+= vp*T;
        if(x>=c) break;
        x+= (((x*1.0)/vd)+f)*vp;
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
