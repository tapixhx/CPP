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
//    ll n, m;
//    cin >> n >> m;
//    ll a[n];
//    map<ll, ll> B;
//    ll I = 0;
//    ll max = 0;
//    for(int i=0;i<n;i++) {
//        cin >> a[i];
//        ll z = a[i];
//        while(z>0) {
//            B[i]++;
//            z -= m;
//        }
//    }
//    for(auto x : B) {
//        if(max <= x.second) {
//            max = x.second;
//            I = x.first;
//        }
//    }
//    cout << I+1;
//    return 0;
//}