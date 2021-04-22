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
//        int n, x=0, y=0, count=0;
//        cin >> n;
//        vector<int> a(n);
//        for(int i=0; i<n; i++) {
//            cin >> a[i];
//            x ^= a[i];
//        }
//        if(x == 0) {
//            cout << "YES\n";
//            continue;
//        }
//        for(int i=0; i<n; i++) {
//            y ^= a[i];
//            if(x == y) {
//                count++;
//                y=0;
//            }
//            if(count > 1)
//                break;
//        }
//        cout << (count>1 ? "YES\n" : "NO\n");
//    }
//    return 0;
//}