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
//        ll n, ma = INT_MAX, mb = INT_MAX, da, db, ans = 0;
//        cin >> n;
//        vector<ll> a(n+1), b(n+1);
//        for(ll i=0; i<n; i++) {
//            cin >> a[i];
//            if(ma > a[i])
//                ma = a[i];
//        }
//        for(ll i=0; i<n; i++) {
//            cin >> b[i];
//            if(mb > b[i])
//                mb = b[i];
//        }
//        for(int i=0; i<n; i++) {
//            ans += max(a[i]-ma, b[i]-mb);
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}