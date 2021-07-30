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
//    int n, k, res = -1;
//    cin >> n >> k;
//    for(int i=0; i<n; i++) {
//        int f, t;
//        cin >> f >> t;
//        int cur=f;
//        if (t > k)
//            cur -= (t - k);
//        res = max(res,cur);
//    }
//    cout << res << "\n";
//    return 0;
//}