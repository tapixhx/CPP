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
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        int mx = 0, idx = -1;
//        for(int i=0; i<n; i++) {
//            cin >> a[i];
//            mx = max(mx, a[i]);
//        }
//        for(int i=0; i<n; i++) {
//            if(a[i] != mx)
//                continue;
//            if(i > 0 and a[i-1] != mx)
//                idx = i+1;
//            if(i < n-1 and a[i+1] != mx)
//                idx = i+1;
//        }
//        cout << idx << "\n";
//    }
//    return 0;
//}