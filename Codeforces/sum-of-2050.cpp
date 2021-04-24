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
//        ll n, m, num, digits=0, ans=0;
//        cin >> n;
//        num=n;
//        if(n<2050)
//            cout << -1 << "\n";
//        else {
//            while(num!=0) {
//                digits++;
//                num/=10;
//            }
//            digits-=4;
//            for(ll i=digits; i>=0; i--) {
//                m=(2050*(pow(10, i)));
//                if(m<=n) {
//                    ans+=n/m;
//                    n%=m;
//                }
//                if(n==0)
//                    break;
//            }
//            if(n==0)
//                cout << ans << "\n";
//            else
//                cout << -1 << "\n";
//        }
//    }
//    return 0;
//}