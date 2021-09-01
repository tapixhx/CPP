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
//    int HH = (s[0]-'0')*10 + (s[1]-'0');
//    int MM = (s[3]-'0')*10 + (s[4]-'0');
//    while(1) {
//        MM++;
//        if(MM == 60){
//            MM = 00;
//            HH = (HH + 1) % 24;
//        }
//        if((HH % 10 == MM / 10) && (MM % 10 == HH / 10)) {
//            if(HH < 10)
//                cout << "0";
//            cout << HH << ":";
//            if(MM < 10)
//                cout << "0";
//            cout << MM;
//            break;
//        }
//    }
//    return 0;
//}