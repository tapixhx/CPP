//#include <bits/stdc++.h>
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.14159265358979323
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
//        ll n;
//        cin >> n;
//        string s;
//        cin >> s;
//        int x = 0,y = 0;
//        for(int i=0; i<n; i++) {
//            if(i%2 != 0 && (s[i]-'0')%2 == 0)
//                x=1;
//            else if(i%2 == 0 && (s[i]-'0')%2 != 0)
//                y=1;
//        }
//        if(n%2 == 0) {
//            if(x == 1)
//                cout << 2 << "\n";
//            else
//                cout << 1 << "\n";
//        }
//        else {
//            if(y == 1)
//                cout<<1<<"\n";
//            else
//                cout << 2 << "\n";
//        }
//    }
//    return 0;
//}