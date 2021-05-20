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
//        ll n;
//        cin >> n;
//        if(n < 10)
//            cout << n << "\n";
//        else {
//            ll ans = 0;
//            while(n >= 10) {
//                ll r = n%10;
//                ll q = n/10;
//                ans += (n-r);
//                n = r+q;
//            }
//            ans += n;
//            cout << ans << "\n";
//        }
//    }
//    return 0;
//}