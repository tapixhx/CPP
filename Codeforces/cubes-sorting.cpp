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
//        vector<int> a(n);
//        for(int &i : a)
//            cin >> i;
//        bool can = false;
//        for(int i=0; i<n-1; i++) {
//            if (a[i] <= a[i + 1]) {
//                can = true;
//                break;
//            }
//        }
//        (can) ?  cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}