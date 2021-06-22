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
//    int n, o = 0;
//    cin >> n;
//    string s, p = "";
//    cin >> s;
//    if(n % 2 == 0)
//        o = 1;
//    for(int i=0; i<n; i++) {
//        if(o == 1) {
//            p = s[i] + p;
//            o = 0;
//        }
//        else {
//            p = p + s[i];
//            o = 1;
//        }
//    }
//    cout << p;
//    return 0;
//}