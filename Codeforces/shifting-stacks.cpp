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
//        vector<ll> a(n);
//        for(ll &i : a)
//            cin >> i;
//        ll sum = 0, req = 0, flag = 1;
//        for(ll i=0; i<n; i++) {
//            req += i;
//            sum += a[i];
//            if(sum < req) {
//                flag = 0;
//                break;
//            }
//        }
//        (flag) ? cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}