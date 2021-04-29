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
//        int r, b, d, mx, mn, q;
//        cin >> r >> b >> d;
//        mx = max(r, b);
//        mn = min(r, b);
//        q = mx/mn;
//        if(mx%mn == 0) {
//            if(q-1 <= d)
//                cout << "YES\n";
//            else
//                cout << "NO\n";
//        }
//        else {
//            if(q <= d)
//                cout << "YES\n";
//            else
//                cout << "NO\n";
//        }
//    }
//    return 0;
//}