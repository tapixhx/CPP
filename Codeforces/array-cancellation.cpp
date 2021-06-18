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
//        ll n, i, fl=0, final=0;
//        cin >> n;
//        ll a[n+1];
//        for(i=0; i<n; i++)
//            cin >> a[i];
//        for(i=0; i<n; i++) {
//            if(a[i] < 0) {
//                if(fl >= abs(a[i]))
//                    fl -= abs(a[i]);
//                else {
//                    final += abs(a[i]) - fl;
//                    fl = 0;
//                }
//            }
//            else
//                fl += a[i];
//        }
//        cout << final << "\n";
//    }
//    return 0;
//}