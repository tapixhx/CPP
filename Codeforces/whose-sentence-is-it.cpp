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
//    cin.ignore();
//    while(t--) {
//        string s, r, f;
//        getline(cin, s);
//        int fred = 0;
//        int rainbow = 0;
//        int z = s.length();
//        if (s.length() >= 5) {
//            if (s[0] == 'm' && s[1] == 'i' && s[2] == 'a' && s[3] == 'o' && s[4] == '.')
//                rainbow++;
//            if (s[z - 5] == 'l' && s[z - 4] == 'a' && s[z - 3] == 'l' && s[z - 2] == 'a' && s[z - 1] == '.')
//                fred++;
//        }
//        if (fred > 0 && rainbow == 0)
//            cout << "Freda's\n";
//        else if (rainbow > 0 && fred == 0)
//            cout << "Rainbow's\n";
//        else
//            cout << "OMG>.< I don't know!\n";
//    }
//    return 0;
//}