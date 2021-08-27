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
//        ll a, b, c;
//        cin >> a >> b >> c;
//        ll x = abs(a-b);
//        ll y = x*2;
//        if(a > y || b > y || c > y)
//            cout << -1 << "\n";
//        else {
//            if(c+x <= y)
//                cout << c+x << "\n";
//            else if(c-x <= y && c+x > 0)
//                cout << c-x << "\n";
//            else
//                cout << -1 << "\n";
//        }
//    }
//    return 0;
//}