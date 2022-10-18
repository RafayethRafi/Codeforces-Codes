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
        char mxS ='a', mnS = 'a', mxT= 'a',mnT='a';
        long long lenS = 1, lenT=1;

        long long q;
        cin>>q;
        while(q--)
        {
            long long d,k;
            string x;
            cin>>d>>k>>x;
            long long lenX = x.size();

            if(d==1)
            {
                char mn = *min_element(x.begin(),x.end());
                char mx = *max_element(x.begin(),x.end());

                mnS = min(mnS,mn);
                mxS = max(mxS,mx);

                lenS += (lenX*k);
            }
            else
            {
                char mn = *min_element(x.begin(),x.end());
                char mx = *max_element(x.begin(),x.end());

                mnT = min(mnT,mn);
                mxT = max(mxT,mx);

                lenT += (lenX*k);
            }

            if(mxT>'a') cout<<"YES"<<endl;
            else
            {
                if(mxS>'a') cout<<"NO"<<endl;
                else if(lenS<lenT) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }

        }



    }
    return 0;
}
