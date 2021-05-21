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
//ll maxCoins(ll a, ll b, ll c) {
//    if(a>=b && a>=c)
//        return a;
//    if(b>=a && b>=c)
//        return b;
//    else
//        return c;
//}
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll a, b, c, n;
//        cin >> a >> b >> c >> n;
//        ll mx = maxCoins(a, b, c);
//        if(mx == a) {
//            n -= (a-b);
//            n -= (a-c);
//        }
//        else if(mx == b) {
//            n -= (b-a);
//            n -= (b-c);
//        }
//        else {
//            n -= (c-a);
//            n -= (c-b);
//        }
//        if(n%3 == 0 && n>=0)
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}