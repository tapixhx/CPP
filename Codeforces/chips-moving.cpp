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
//    int n;
//    cin >> n;
//    ll a[n];
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    ll ans = INT_MAX;
//    for(int i=0; i<n; i++) {
//        ll cmp = 0;
//        for(int j=0; j<n; j++) {
//            ll c = abs(a[i]-a[j]);
//            if(c % 2)
//                cmp++;
//        }
//        ans = min(ans, cmp);
//    }
//    cout << ans;
//    return 0;
//}