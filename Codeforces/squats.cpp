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
//    string s;
//    cin >> s;
//    int sm = 0, lg = 0;
//    for(int i=0; i<n; i++) {
//        if(s[i] == 'x')
//            sm++;
//        else
//            lg++;
//    }
//    if(sm == lg)
//        cout << 0 << "\n" << s;
//    else {
//        int mx = max(sm, lg);
//        int d = mx - n/2, idx = 0;
//        while(d and idx < n) {
//            if(sm > lg) {
//                if (islower(s[idx])) {
//                    s[idx] -= 32;
//                    d--;
//                }
//            }
//            else {
//                if (isupper(s[idx])) {
//                    s[idx] += 32;
//                    d--;
//                }
//            }
//            idx++;
//        }
//        cout << mx - n/2 << "\n" << s;
//    }
//    return 0;
//}