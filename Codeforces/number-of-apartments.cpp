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
//        if (n == 4 || n < 3) {
//            cout << "-1\n";
//            continue;
//        }
//        if (n % 3 == 0)
//            cout << n / 3 << " 0 0\n";
//        else if (n % 3 == 1)
//            cout << n / 3 - 2 << " 0 1\n";
//        else
//            cout << n / 3 - 1 << " 1 0\n";
//    }
//    return 0;
//}