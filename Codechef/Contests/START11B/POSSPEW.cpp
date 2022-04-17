#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pii         pair<int, int>
#define ld          long double
#define ff          first
#define ss          second
#define vs          vector<string>
#define vpll        vector<pll>
#define vb          vector<bool>
#define mp          make_pair
#define pb          push_back
#define endl        '\n'

const ll INF       = 2e18;
const ll mod       = 1000000007;
const ll mod2      = 998244353;



signed main(){

    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n, k;
        cin >> n >> k;

        vll arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool all_zero = true;
        for(auto x: arr){
            if(x > 0){
                all_zero = false;
                break;
            }
        }

        if(all_zero){
            cout << 0 << endl;
            continue;
        }

        if(k == 0){
            ll ans = 0;
            for(auto x: arr){
                ans += x;
            }
            cout << ans << endl;
            continue;
        }

        set<ll> pos;
        set<ll, greater<ll>> posG;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos.insert(i);
                posG.insert(i);
                pos.insert(i+n);
                posG.insert(i+n);
            }
        }

        vll ans_arr(n, k);

        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                ll val1 = *pos.lower_bound(i);
                ll val2 = *posG.lower_bound(i+n);
                ll dist = min(abs(val1 - i), abs(val2 - (i+n)));
                ans_arr[i] -= dist;
            }
        }

        for(auto &x: ans_arr){
            if(x < 0){
                x = 0;
            }
        }


        ll sum = 0;
        for(auto x: arr){
            sum += x;
        }

        for(auto x: ans_arr){
            sum += 2LL*x;
        }

        cout << sum << endl;
    }

    return 0;
}