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
//    ll x, k, n, y;
//    cin >> x >> k;
//    map<ll, ll> m;
//    for (ll i = 0; i < k; i++) {
//        cin >> n;
//        if (n == 1) {
//            cin >> y;
//            m[y]++;
//            cin >> y;
//            m[y]++;
//        }
//        else {
//            cin >> y;
//            m[y]++;
//        }
//    }
//    vector<ll> v;
//    for (ll i = 1; i < x; i++) {
//        if (m[i] == 0) {
//            v.push_back(i);
//        }
//    }
//    ll ans1 = 0;
//    for (ll i = 0; i < v.size(); i++) {
//        if (i + 1 < v.size() && v[i] + 1 == v[i + 1]) {
//            i++;
//        }
//        ans1++;
//    }
//    cout << ans1 << " " << v.size();
//    return 0;
//}