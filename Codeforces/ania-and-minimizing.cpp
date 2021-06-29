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
//    ll n, i, k;
//    string s;
//    cin >> n >> k;
//    cin >> s;
//    if(n==1 && k>0) {
//        cout << "0";
//        exit(0);
//    }
//    if(k > 0 && s[0] != '1') {
//        s[0]='1';
//        k--;
//    }
//    for(i=1; i<n && k>0; i++) {
//        if(s[i]!='0') {
//            s[i]='0';
//            k--;
//        }
//    }
//    for(i=0; i<n; i++)
//        cout << s[i];
//    return 0;
//}