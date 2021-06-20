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
//        ll n, i, j;
//        cin >> n;
//        ll a[n + 1][n + 1];
//        memset(a, 0, sizeof(a));
//        for(i=0; i<n; i++) {
//            for(j=0; j<n; j++) {
//                if (i == j)
//                    a[i][j] = 22;
//            }
//        }
//        a[0][n-1] = 1;
//        for (i=1; i<n; i++) {
//            for (j=0; j<n; j++) {
//                if (a[i-1][j] == 22)
//                    a[i][j] = 1;
//            }
//        }
//
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++)
//                cout << a[i][j] << " ";
//            cout << "\n";
//        }
//    }
//    return 0;
//}