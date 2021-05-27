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
//bool checkOrder(ll arr[], ll n) {
//    int cnt = 0;
//    for (int i = 0; i<n-1; i++) {
//        if (abs(arr[i+1]-arr[i]) > 1)
//            cnt++;
//    }
//    if (abs(arr[0]-arr[n-1]) > 1)
//        cnt++;
//    if (cnt > 1)
//        return false;
//    return true;
//}
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll n;
//        cin >> n;
//        ll a[n + 1];
//        ll max = 0;
//        for (ll i = 0; i < n; i++) {
//            cin >> a[i];
//            if (max < a[i]) {
//                max = a[i];
//            }
//        }
//        checkOrder(a, n) ? cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}