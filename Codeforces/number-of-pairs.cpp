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
//        ll n, l, r;
//        cin >> n >> l >> r;
//        ll a[n+1];
//        map<ll, ll> m;
//        for(int i=0; i<n; i++) {
//            cin >> a[i];
//            m[a[i]]++;
//        }
//        sort(a,a+n);
//        ll temp=0;
//        for(int i=0; i<n; i++) {
//            temp+=(upper_bound(a+i+1,a+n,r-a[i])-lower_bound(a+i+1,a+n,l-a[i]));
//        }
//        cout << temp << "\n";
//    }
//    return 0;
//}