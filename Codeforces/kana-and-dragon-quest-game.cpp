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
//        ll x, n, m, flag = 0;
//        cin >> x >> n >> m;
//        while(x > 0 && (n > 0 || m > 0)) {
//            if(x <= m*10) {
//                flag = 1;
//                break;
//            }
//            else {
//                if(n > 0) {
//                    x = x/2 + 10;
//                    n--;
//                }
//                else {
//                    if(x > m*10)
//                        break;
//                }
//            }
//        }
//        (flag == 1) ? cout<<"YES\n" : cout<<"NO\n";
//    }
//    return 0;
//}