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
//    string s, ans = "";
//    cin >> s;
//    transform(s.begin(), s.end(), s.begin(), ::tolower);
//    for(int i=0; i<s.length(); i++) {
//        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
//            continue;
//        }
//        else {
//            ans += ".";
//            ans += s[i];
//        }
//    }
//    cout << ans;
//    return 0;
//}