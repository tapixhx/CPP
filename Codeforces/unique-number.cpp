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
//    while(t--){
//        ll x, ans = 0;
//        cin >> x;
//        for(int i=9, j=0; i>0 && j<9;) {
//            if(x>=i) {
//                x -= i;
//                ans += i * (int)pow(10, j);
//                i--; j++;
//            }
//            else {
//                ans += x * (int)pow(10, j);
//                x = 0;
//                break;
//            }
//        }
//        (x > 0) ? cout << -1 << "\n" : cout << ans << "\n";
//    }
//    return 0;
//}