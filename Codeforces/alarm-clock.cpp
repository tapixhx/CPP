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
//    int t;
//    cin >> t;
//    while(t--) {
//        ll a, b, c, d;
//        cin >> a >> b >> c >> d;
//        if(b >= a)
//            cout << b << "\n";
//        else if(c <= d)
//            cout << -1 << "\n";
//        else {
//            ll n = ceil((a-b) / ((c-d)*1.0));
//            cout << (b + c*n) << "\n";
//        }
//    }
//    return 0;
//}