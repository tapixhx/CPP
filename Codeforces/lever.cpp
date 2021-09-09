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
//    string s;
//    cin >> s;
//    ll x = 0, i, k = 0;
//    for(i=0; i<s.length(); i++) {
//        if (s[i] == '^')
//            k = i;
//    }
//    for(i=0; i<s.length(); i++) {
//        if(s[i] >= '0' and s[i] <= '9')
//            x += ((ll)s[i] - '0')*(k - i);
//    }
//    if(x == 0)
//        cout << "balance";
//    else if(x > 0)
//        cout << "left";
//    else if(x < 0)
//        cout << "right";
//    return 0;
//}