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
//        int f=-1, e=-1, ans = 0;
//        string s;
//        cin >> s;
//        for(int i=0; i<s.length(); i++) {
//            if(f == -1 && s[i] == '1')
//                f = i;
//            if(s[i] == '1')
//                e = i;
//        }
//        for(int i=f; i<e; i++) {
//            if(s[i] == '0')
//                ans++;
//        }
//        cout << ans << "\n";
//    }
//    return 0;
//}