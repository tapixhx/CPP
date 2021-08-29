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
//    string s;
//    cin >> s;
//    if(s.size() == 1) {
//        cout << 1 << "\n";
//        cout << s[0] << "\n";
//    }
//    else {
//        int z = 0, o = 0;
//        for(int i=0; i<n; i++) {
//            if(s[i] == '1')
//                o++;
//            else
//                z++;
//        }
//        if(z != o) {
//            cout << 1 << "\n";
//            cout << s;
//        }
//        else {
//            cout << 2 << "\n";
//            cout << s.substr(0,n-1) << " " << s[n-1];
//        }
//    }
//    return 0;
//}