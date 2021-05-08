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
//        int n, flag = 0;
//        string s;
//        cin >> n >> s;
//        for(int i=0; i<5; i++) {
//            if(s.substr(0, 4-i) + s.substr(n-i, i) == "2020") {
//                flag = 1;
//                break;
//            }
//        }
//        (flag) ? cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}