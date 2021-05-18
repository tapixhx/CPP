//#include <bits/stdc++.h>
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//using namespace std;
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        unordered_map<ll, ll> m;
//        ll n, x, ans = 0;
//        cin >> n;
//        for(ll i=1; i<=n; i++) {
//            cin >> x;
//            x -= i;
//            ans += m[x];
//            m[x]++;
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}