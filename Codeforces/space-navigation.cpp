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
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll x, y, u=0, d=0, r=0, l=0;
//        string s;
//        cin >> x >> y >> s;
//        for(ll i=0; i<s.length(); i++) {
//            if(s[i] == 'R')
//                r++;
//            if(s[i] == 'L')
//                l++;
//            if(s[i] == 'U')
//                u++;
//            if(s[i] == 'D')
//                d++;
//        }
//        if(x > 0 && x<=r)
//            x=0;
//        if(x < 0 && -x<=l)
//            x=0;
//        if(y > 0 && y<=u)
//            y=0;
//        if(y < 0 && -y<=d)
//            y=0;
//        if(x == 0 && y == 0)
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}