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
//ll minDiff(vector<ll> a, ll n) {
//    sort(a.begin(), a.end());
//    ll d = INT_MAX;
//    for (int i=0; i<n-1; i++)
//        if (a[i+1] - a[i] < d)
//            d = a[i+1] - a[i];
//    return d;
//}
//
//int main() {
//    FASTIO
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll n, ans = 0;
//        cin >> n;
//        vector<ll> pos, neg;
//        ll x, z = 0;
//        for(ll i=0; i<n; i++) {
//            cin >> x;
//            if(x > 0)
//                pos.push_back(x);
//            else if(x <= 0)
//                neg.push_back(x);
//            else
//                z++;
//        }
//        if(neg.size() == 0)
//            cout << 1 << "\n";
//        else {
//            ans += neg.size();
//            sort(pos.begin(), pos.end());
//            int y = minDiff(neg, neg.size());
//            if(pos.size() > 0) {
//                if(pos[0] <= y)
//                    ans += 1;
//            }
//            cout << ans << "\n";
//        }
//    }
//    return 0;
//}