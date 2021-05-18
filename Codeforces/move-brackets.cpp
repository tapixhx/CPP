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
//        int n, ans=0, b=0;
//        string s;
//        cin >> n >> s;
//        for(int i=0; i<n; i++) {
//            if(s[i] == ')') {
//                b--;
//                if(b<0) {
//                    b = 0;
//                    ans++;
//                }
//            }
//            else {
//                b++;
//            }
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}