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
//        ll n, ans = 0;
//        cin >> n;
//        string s;
//        cin >> s;
//        for(ll i=0; i<n; ) {
//            if(s[i] == 'A') {
//                i++;
//                ll c = 0;
//                while(s[i] != 'A' && i <= n-1) {
//                    c++;
//                    i++;
//                }
//                if(ans < c)
//                    ans = c;
//            }
//            else
//                i++;
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}