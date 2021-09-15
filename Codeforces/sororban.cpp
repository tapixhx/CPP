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
//    int n;
//    cin >> n;
//    if(n == 0)
//        cout << "O-|-OOOO" << "\n";
//    int x = n;
//    while(x != 0) {
//        int r = x % 10;
//        if(r == 0)
//            cout << "O-|-OOOO" << "\n";
//        if(r == 1)
//            cout << "O-|O-OOO" << "\n";
//        if(r == 2)
//            cout << "O-|OO-OO" << "\n";
//        if(r == 3)
//            cout << "O-|OOO-O" << "\n";
//        if(r == 4)
//            cout << "O-|OOOO-" << "\n";
//        if(r == 5)
//            cout << "-O|-OOOO" << "\n";
//        if(r == 6)
//            cout << "-O|O-OOO" << "\n";
//        if(r == 7)
//            cout << "-O|OO-OO" << "\n";
//        if(r == 8)
//            cout << "-O|OOO-O" << "\n";
//        if(r == 9)
//            cout << "-O|OOOO-" << "\n";
//        x /= 10;
//    }
//    return 0;
//}