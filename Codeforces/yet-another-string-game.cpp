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
//        string s;
//        cin >> s;
//        for(int i=0; i<s.length(); i++) {
//            if((i+1)%2 != 0) {
//                if(s[i] == 'a')
//                    s[i] = 'b';
//                else
//                    s[i] = 'a';
//            }
//            else {
//                if(s[i] == 'z')
//                    s[i] = 'y';
//                else
//                    s[i] = 'z';
//            }
//        }
//        cout << s << "\n";
//    }
//    return 0;
//}