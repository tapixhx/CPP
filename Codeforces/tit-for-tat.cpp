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
//        int n, k;
//        cin >> n >> k;
//        vector<int> a(n);
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        for(int i=0; i<n; i++) {
//            while(k>0 && a[i]>0) {
//                a[i]--;
//                a[n-1]++;
//                k--;
//            }
//        }
//        for(int i=0; i<n; i++)
//            cout << a[i] << " ";
//        cout << "\n";
//    }
//    return 0;
//}