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
//    int k, f[26], mx = 0, ans = 0;
//    string s;
//    cin >> s >> k;
//    for(int i=0; i<26; i++) {
//        cin >> f[i];
//        if(mx < f[i])
//            mx = f[i];
//    }
//    int len = s.length() + k;
//    int n = 1;
//    for(int i=0; i<len; i++) {
//        if(i < s.length()) {
//            ans += (n*f[s[i]-'a']);
//        }
//        else {
//            ans += (n*mx);
//        }
//        n++;
//    }
//    cout << ans;
//    return 0;
//}