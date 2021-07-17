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
//    unordered_map<string, int> m;
//    string s;
//    for(int i=0; i<n; i++) {
//        cin >> s;
//        m[s]++;
//    }
//    int mx = 0;
//    string ans;
//    for(auto x : m) {
//        if(x.second > mx) {
//            mx = x.second;
//            ans = x.first;
//        }
//    }
//    cout << ans;
//    return 0;
//}