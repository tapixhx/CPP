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
//        for(ll &i : a) {
//            cin >> i;
//        }
//        ll flag = 0;
//        for(ll i=0; i<n-1; i++) {
//            for(ll j=i+1; j<n; j++) {
//                ll d = abs(a[i] - a[j]);
//                if(d%2 != 0) {
//                    flag = 1;
//                    break;
//                }
//            }
//            if(flag == 1)
//                break;
//        }
//        (flag == 1) ? cout << "NO\n" : cout << "YES\n";
//    }
//    return 0;
//}