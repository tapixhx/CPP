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
//    vector<pair<ll, ll>>v;
//    for(ll i=0; i<n; i++) {
//        ll x, y;
//        cin >> x >> y;
//        v.push_back({x, y});
//    }
//    ll ans = 0;
//    for(ll i=0; i<n; i++) {
//        ll l=0, u=0, d=0, r=0;
//        for(ll j=0; j<n; j++) {
//            if(i == j)
//                continue;
//            if(v[i].second==v[j].second && v[i].first>v[j].first)
//                l += 1;
//            else if(v[i].second==v[j].second && v[i].first<v[j].first)
//                r += 1;
//            else if(v[i].first==v[j].first && v[i].second<v[j].second)
//                d += 1;
//            else if(v[i].first==v[j].first && v[i].second>v[j].second)
//                u += 1;
//        }
//        if(l && r && u && d)
//            ans += 1;
//    }
//    cout << ans << "\n";
//    return 0;
//}