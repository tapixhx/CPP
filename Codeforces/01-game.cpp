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
//        int ans, n = 0, m = 0;
//        string s;
//        cin >> s;
//        for(int i=0; i<s.length(); i++) {
//            if(s[i] == '1')
//                n++;
//            else
//                m++;
//        }
//        ans = min(n, m);
//        if(ans%2 == 0)
//            cout << "NET\n";
//        else
//            cout << "DA\n";
//    }
//    return 0;
//}