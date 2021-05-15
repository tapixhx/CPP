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
//ll minDiff(ll a, ll b, ll c) {
//    return abs(a-b) + abs(a-c) + abs(b-c);
//}
//
//int main() {
//    FASTIO
//    int t;
//    cin >> t;
//    while(t--) {
//        ll a, b, c, ans, a1, b1, c1;
//        cin >> a >> b >> c;
//        ans = minDiff(a, b, c);
//        for(int i=1; i>=-1; i--) {
//            for(int j=1; j>=-1; j--) {
//                for(int k=1; k>=-1; k--) {
//                    a1 = a + i;
//                    b1 = b + j;
//                    c1 = c + k;
//                    ans = min(ans, minDiff(a1, b1, c1));
//                }
//            }
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}