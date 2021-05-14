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
//    ll n, q, c = 0;
//    cin >> n >> q;
//    vector<ll> a(n+2);
//    for(ll i=1; i<=n; i++) {
//        cin >> a[i];
//        if(a[i] == 1)
//            c++;
//    }
//    while(q--) {
//        ll t;
//        cin >> t;
//        if(t == 1) {
//            ll x;
//            cin >> x;
//            if(a[x])
//                c--;
//            else
//                c++;
//            a[x] = 1 - a[x];
//        }
//        else {
//            ll k;
//            cin >> k;
//            if(k <= c)
//                cout << 1 << "\n";
//            else
//                cout << 0 << "\n";
//        }
//    }
//    return 0;
//}