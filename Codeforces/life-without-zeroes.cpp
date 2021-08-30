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
//ll removeZeroes(ll n) {
//    int num = 0, ten = 1;
//    while(n != 0) {
//        int dig = n % 10;
//        if (dig) {
//            num += dig * ten;
//            ten *= 10;
//        }
//        n /= 10;
//    }
//    return num;
//}
//
//int main() {
//    FASTIO
//    ll a, b;
//    cin >> a >> b;
//    ll c = a + b;
//    ll d = removeZeroes(a);
//    ll e = removeZeroes(b);
//    ll f = removeZeroes(c);
//    (d + e == f) ? cout << "YES" : cout << "NO";
//    return 0;
//}