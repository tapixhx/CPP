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
//        ll n, f2 = 0, f3 = 0;
//        cin >> n;
//        while(n%2 == 0) {
//            n /= 2;
//            f2++;
//        }
//        while(n%3 == 0) {
//            n /= 3;
//            f3++;
//        }
//        (n == 1 && f2 <= f3) ? cout << 2*f3-f2 << "\n" : cout << -1 << "\n";
//    }
//    return 0;
//}