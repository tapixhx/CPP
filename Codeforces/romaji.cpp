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
//    int flag = 0, len = s.length();
//    for(int i=0; i<len; i++) {
//        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'n')
//            continue;
//        else {
//            if(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
//                continue;
//            else {
//                flag = 1;
//                break;
//            }
//        }
//    }
//    (flag) ? cout << "NO\n" : cout << "YES\n";
//    return 0;
//}