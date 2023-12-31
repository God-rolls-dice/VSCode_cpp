#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<pdd> vpdd;
typedef vector<vd> vvd;

#define fi first
#define se second
#define ppb pop_back
#define pb push_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x, a) memset(x, a, sizeof (x))
#define rep(i, l, r) for(ll i = l; i <= (r); ++ i)
#define per(i, r, l) for(ll i = r; i >= (l); -- i)
#define reps(i, l, r, d) for(ll i = l; i <= (r); i += d)
#define pers(i, r, l, d) for(ll i = r; i >= (l); i -= d)

template<class T> bool ckmax(T& a, T b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool ckmin(T& a, T b) { return a > b ? (a = b, 1) : 0; }

void solve()
{
    int n;
    cin >> n;
    ll a[n + 5], b[n + 5], k = 1;
    rep (i, 1, n)
    {
        cin >> a[i];
    }
    rep (i, 1, n)
    {
        if (a[i] == k)
        {
            k ++;
        }
        k ++;
    }
    cout << k - 1 << endl;
}

int main() 
{
    ios
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}