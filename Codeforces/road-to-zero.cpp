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
//        ll x, y, a, b;
//        cin >> x >> y >> a >> b;
//        if(x == 0 && y == 0) {
//            cout << 0 << "\n";
//            continue;
//        }
//        ll ans = 0;
//        ll mn, mx;
//        if(x < y) {
//            mn = x;
//            mx = (y - x);
//        }
//        else {
//            mn = y;
//            mx = (x - y);
//        }
//        ll ans2 = 0;
//        ans2 += (a*x);
//        ans2 += (a*y);
//        ans += (mn*b);
//        ans += (mx*a);
//        cout << min(ans2, ans) << "\n";
//    }
//    return 0;
//}