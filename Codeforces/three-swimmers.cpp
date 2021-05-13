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
//        ll p, a, b, c, k, ans;
//        cin >> p >> a >> b >> c;
//        k = p/a;
//        if(p%a)
//            ++k;
//        ans = a*k-p;
//        k = p/b;
//        if(p%b)
//            ++k;
//        ans = min(ans, b*k-p);
//        k = p/c;
//        if(p%c)
//            ++k;
//        ans = min(ans, c*k-p);
//        cout << ans << "\n";
//    }
//    return 0;
//}