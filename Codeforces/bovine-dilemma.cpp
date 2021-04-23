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
//        int n, d;
//        cin >> n;
//        vector<int> a(n);
//        set<int> b;
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        for(int i=0; i<n-1; i++) {
//            for(int j=i+1; j<n; j++) {
//                d = abs(a[i]-a[j]);
//                b.insert(d);
//            }
//        }
//        cout << b.size() << "\n";
//    }
//    return 0;
//}