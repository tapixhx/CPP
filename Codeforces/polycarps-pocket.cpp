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
//    ll n, x;
//    cin >> n;
//    unordered_map<ll, ll> m;
//    for(int i=1; i<=n; i++) {
//        cin >> x;
//        m[x]++;
//    }
//    int mx = 0;
//    for(auto i : m) {
//        if(i.second > mx)
//            mx = i.second;
//    }
//    cout << mx;
//    return 0;
//}