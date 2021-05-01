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
//        int n, mx = 0;
//        cin >> n;
//        vector<int> a(n+1), dp(n+1,0);
//        for(int i=0; i<n; i++) {
//            cin >> a[i];
//        }
//        for(int i=n-1; i>=0; i--) {
//            mx = max(a[i], mx);
//            if(mx) {
//                dp[i] = 1;
//                mx--;
//            }
//            else
//                dp[i]=0;
//        }
//        for(int i=0; i<n; i++)
//            cout << dp[i] << " ";
//        cout << "\n";
//    }
//    return 0;
//}