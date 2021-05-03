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
//bool isPerfectSquare(ll x)
//{
//    if (x >= 0) {
//        ll sr = sqrt(x);
//        return (sr * sr == x);
//    }
//    return false;
//}
//
//int main() {
//    FASTIO
//    int t;
//    cin >> t;
//    while(t--) {
//        ll n;
//        cin >> n;
//        if(n%2 != 0)
//            cout << "NO\n";
//        else if(n%2 == 0 && isPerfectSquare(n/2))
//            cout << "YES\n";
//        else if(n%4 == 0 && isPerfectSquare(n/4))
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}