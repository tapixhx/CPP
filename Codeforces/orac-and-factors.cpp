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
//        ll n, k;
//        cin >> n >> k;
//        if(n%2 == 0) {
//            cout << n+(2*k) << "\n";
//        }
//        else {
//            ll f;
//            for(ll i=3; i<=n; i++){
//                if(n % i == 0) {
//                    f = i;
//                    break;
//                }
//            }
//            n += f;
//            k -= 1;
//            cout << n+(2*k) << "\n";
//        }
//    }
//    return 0;
//}