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
//    string s = "qwertyuiopasdfghjkl;zxcvbnm,./", t, p;
//    cin >> p >> t;
//    int n = 1;
//    if(p == "R")
//        n = -1;
//    for(int i=0; i<t.length(); i++) {
//        auto it = find(s.begin(), s.end(), t[i]);
//        cout << s[it - s.begin()+n];
//    }
//    return 0;
//}