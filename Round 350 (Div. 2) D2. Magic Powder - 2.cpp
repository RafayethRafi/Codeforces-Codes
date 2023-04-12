#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

#define ll long long
ll n, k;
const ll N = 1e5 + 10;
ll a[N], b[N];

bool check(ll val)
{
    ll sum = 0, i;
    for (i = 0; i < n; i++)
    {
        ll x = a[i] * val;
        if (x > b[i])
        {
            sum += (x - b[i]);
            if (sum > k)
            return false;
        }
    }

    if (sum > k)
        return false;
    return true;
}
int main()
{
    optimize();
    ll i, ans;
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];

    ll lo = 0, hi = 1e10;

    while (hi - lo > 1)
    {
        ll mid = lo + (hi - lo) / 2;

        if (check(mid))
        {
            lo = mid;
        }
        else
            hi = mid - 1;
    }
    if (check(hi))
        cout << hi << endl;
    else
        cout << lo << endl;
}
