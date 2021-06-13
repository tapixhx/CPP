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
//        ll n, k, i, x;
//        cin >> n >> k;
//        vector<int> v;
//        for(i=0;i<n;i++) {
//            cin >> x;
//            v.push_back(x);
//        }
//        sort(v.begin(),v.end());
//        auto ip = std::unique(v.begin(), v.end());
//        v.resize(std::distance(v.begin(), ip));
//        i = 0;
//        int ans = 0;
//        while(k > 0) {
//            ans++;
//            while(i<v.size() && v[i]<ans)
//                i++;
//            if(v[i]!=ans)
//                k--;
//            else
//                i++;
//        }
//        if(i < v.size()) {
//            ans++;
//            while(i < v.size() && v[i] == ans) {
//                ans++;
//                i++;
//            }
//            ans--;
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}