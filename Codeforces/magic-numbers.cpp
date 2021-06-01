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
//bool is_magical(string number) {
//    for (int i = 0; i < (int)number.size(); i++)
//        if (number[i] != '1' && number[i] != '4')
//            return false;
//
//    if (number[0] == '4')
//        return false;
//
//    if (number.find("444") != number.npos)
//        return false;
//
//    return true;
//}
//
//int main() {
//    FASTIO
//    string s;
//    cin >> s;
//    int flag = is_magical(s);
//    (flag) ? cout << "YES\n" : cout << "NO\n";
//    return 0;
//}