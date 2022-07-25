#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

ll k ; cin >> k ; 
while(k--)
{
  string s;
    cin >> s;
    if (s.size() == 2)
        cout << s[1] << endl ;
    else
    { 
        cout <<*min_element(s.begin(), s.end()) <<endl ;
    }
  
}

return 0;
}
