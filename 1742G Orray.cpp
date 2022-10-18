#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<ll> ans;

        ll curr=0;
        
        for(int i=0;i<=min(32,n-1);i++){
        
            ll bestOR=curr;
            int bestIndx=-1;
        
            for(int j=0;j<=n-1;j++){
                
                if(a[j]==-1)continue;

                if((curr|a[j])>=bestOR){
                    bestOR=(curr|a[j]);
                    bestIndx=j;
                }
            }
            curr|=a[bestIndx];
            ans.push_back(a[bestIndx]);
            a[bestIndx]=-1;
        }

        for(int i=0;i<n;i++){
            if(a[i]!=-1){
                ans.push_back(a[i]);
            }
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
