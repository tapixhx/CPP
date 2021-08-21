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
//int ans=1;
//vector<ll> a[2005];
//void dfs(ll x, int d) {
//    ans = max(ans, d);
//    for(int child : a[x])
//        dfs(child, d + 1);
//}
//
//int main() {
//    FASTIO
//    ll n, i, x;
//    cin >> n;
//    for (i=1; i<=n; ++i) {
//        cin >> x;
//        if (x == -1)
//            continue;
//        a[x].push_back(i);
//    }
//    for (i=1; i<=n; ++i) {
//        dfs(i, 1);
//    }
//    cout << ans;
//    return 0;
//}