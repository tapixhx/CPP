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
//        int n, c0, c1, h, coins=0;
//        cin >> n >> c0 >> c1 >> h;
//        string s;
//        cin >> s;
//        for(int i=0; i<n; i++) {
//            if(s[i] == '1')
//                coins += min(c1, c0+h);
//            else
//                coins += min(c0, c1+h);
//        }
//        cout << coins << "\n";
//    }
//    return 0;
//}