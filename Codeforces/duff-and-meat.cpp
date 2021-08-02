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
//    vector<pair<int , int>> a(n);
//    for(int i=0; i<n; i++) {
//        int x, y;
//        cin >> x >> y;
//        a[i] = {x, y};
//    }
//    int res = 0, mn = INT_MAX;
//    for(int i=0; i<n; i++) {
//        mn = min(mn, a[i].second);
//        res += a[i].first*mn;
//    }
//    cout << res;
//    return 0;
//}