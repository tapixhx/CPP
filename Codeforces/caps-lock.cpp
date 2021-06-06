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
//    int n = s.length();
//    bool test = true;
//    for (int i = 1; i < n; i++) {
//        if (s[i] >= 'a' && s[i] <= 'z') {
//            test = false;
//            break;
//        }
//    }
//
//    if (test) {
//        if (s[0] >= 'a' && s[0] <= 'z')
//            s[0] = s[0] - 'a' + 'A';
//        else
//            s[0] = s[0] - 'A' + 'a';
//        for (int i = 1; i < n; i++)
//            s[i] = s[i] - 'A' + 'a';
//    }
//    cout << s;
//    return 0;
//}