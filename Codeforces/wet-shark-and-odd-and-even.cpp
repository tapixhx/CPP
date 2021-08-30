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
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    ll sum = 0;
//    for(int i=0; i<n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    if(sum % 2 == 0)
//        cout << sum;
//    else {
//        sort(a.begin(), a.end());
//        for(int i=0; i<n; i++) {
//            if(a[i] % 2 != 0) {
//                sum -= a[i];
//                break;
//            }
//        }
//        cout << sum;
//    }
//    return 0;
//}