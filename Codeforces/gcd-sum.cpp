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
//ll sumOfDigits(ll n) {
//    ll sum = 0;
//    while(n!=0) {
//        sum+=n%10;
//        n/=10;
//    }
//    return sum;
//}
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll n, sum, m, ans;
//        cin >> n;
//        for(ll i=n; i<=n+2; i++) {
//            sum = sumOfDigits(i);
//            m = __gcd(i, sum);
//            if(m > 1) {
//                ans = i;
//                break;
//            }
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}