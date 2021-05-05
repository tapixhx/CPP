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
//        if(n == 1)
//            cout << 1 << "\n";
//        else if(n == 2)
//            cout << -1 << "\n";
//        else {
//            int a[n+1][n+1], k=1;
//            for(int i=0; i<n; i++) {
//                for(int j=0; j<n; j++) {
//                    a[i][j] = k;
//                    k+=2;
//                    if(k>n*n) {
//                        k = 2;
//                    }
//                }
//            }
//            for(int i=0; i<n; i++) {
//                for(int j=0; j<n; j++) {
//                    cout << a[i][j] << " ";
//                }
//                cout << "\n";
//            }
//        }
//    }
//    return 0;
//}