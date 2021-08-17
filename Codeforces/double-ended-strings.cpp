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
//        string a, b;
//        cin >> a >> b;
//        int n = a.size(), m = b.size();
//        int ans = 0;
//        for (int len = 1; len <= min(n, m); len++) {
//            for (int i = 0; i + len <= n; i++) {
//                for (int j = 0; j + len <= m; j++) {
//                    if (a.substr(i, len) == b.substr(j, len))
//                        ans = max(ans, len);
//                }
//            }
//        }
//        cout << a.size() + b.size() - 2 * ans << "\n";
//    }
//    return 0;
//}