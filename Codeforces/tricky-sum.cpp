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
//        ll n;
//        cin >> n;
//        ll p, s = 0;
//        for(ll i=0;i<=32;i++) {
//            p=pow(2,i);
//            if(p<=n)
//                s=s+p;
//        }
//        ll sum = (n*(n+1)) / 2;
//        ll d = sum - s;
//        ll ans = d - s;
//        cout << ans << "\n";
//    }
//    return 0;
//}