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
//    int q;
//    cin >> q;
//    while(q--) {
//        int n, flag = 0;
//        cin >> n;
//        unordered_map<char, int> m;
//        for(int i=1; i<=n; i++) {
//            string s;
//            cin >> s;
//            for(int j=0; j<s.length(); j++) {
//                m[s[j]]++;
//            }
//        }
//        for(auto x : m) {
//            if(x.second % n != 0) {
//                flag = 1;
//                break;
//            }
//        }
//        (flag) ? cout << "NO\n" : cout << "YES\n";
//    }
//    return 0;
//}