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
//    ll n;
//    cin >> n;
//    string s, ans;
//    cin >> s;
//    ll mx = 0;
//    for(int i=0; i<n-1; i++) {
//        ll cnt = 0;
//        for(int j=0; j<n-1; j++) {
//            if(s[i] == s[j] && s[i+1] == s[j+1])
//                cnt++;
//        }
//        if(cnt > mx) {
//            mx = cnt;
//            ans = s.substr(i, 2);
//        }
//    }
//    cout << ans;
//    return 0;
//}