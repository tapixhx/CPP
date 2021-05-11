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
//        int u, v;
//        string s;
//        cin >> u >> v >> s;
//        int i = 0, j = u-1;
//        while(i<j && i<v) {
//            if(s[i] == s[j]) {
//                i++;
//                j--;
//            }
//            else
//                break;
//        }
//        if(i == v &&  i <= j)
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}