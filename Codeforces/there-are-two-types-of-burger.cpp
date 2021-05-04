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
//        int b, p, f, h, c, d, ans=0;
//        cin >> b >> p >> f >> h >> c;
//        if(h>=c) {
//            if(b/2 >= p) {
//                ans += p*h;
//                d = (b/2)-p;
//                if(d>=f) {
//                    ans+=f*c;
//                }
//                else {
//                    ans+=d*c;
//                }
//            }
//            else {
//                ans+=(b/2)*h;
//            }
//        }
//        else {
//            if(b/2 >= f) {
//                ans += f*c;
//                d = (b/2)-f;
//                if(d>=p) {
//                    ans+=p*h;
//                }
//                else {
//                    ans+=d*h;
//                }
//            }
//            else {
//                ans+=(b/2)*c;
//            }
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}