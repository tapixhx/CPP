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
//bool chkParity(int r, int g, int b, int w) {
//    return (r % 2 + g % 2 + b % 2 + w % 2) <= 1;
//}
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        int r, g, b, w;
//        cin >> r >> g >> b >> w;
//        if(chkParity(r, g, b, w))
//            cout << "YES\n";
//        else if(r > 0 and g > 0 and b > 0 and chkParity(r-1, g-1, b-1, w+3))
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}