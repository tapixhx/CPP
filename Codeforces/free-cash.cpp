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
//    int n;
//    cin >> n;
//    ll ans = 1, prevH = -1, prevM = -1, h, m, temp = 1;
//    while(n--) {
//        cin >> h >> m;
//        if(prevH == h and prevM == m)
//            temp++;
//        else {
//            temp = 1;
//        }
//        ans = max(ans, temp);
//        prevH = h;
//        prevM = m;
//    }
//    cout << ans;
//    return 0;
//}