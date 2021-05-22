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
//        ll n, k, flag = 0;
//        cin >> n >> k;
//        if(k%n == 0)
//            cout << k/n << "\n";
//        else if(n%k == 0)
//            cout << 1 << "\n";
//        else if(n > k) {
//            ll m = n/k;
//            k *= (m+1);
//            cout << (k/n)+1 << "\n";
//        }
//        else
//            cout << (k/n)+1 << "\n";
//    }
//    return 0;
//}