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
//    int n, m;
//    cin >> n >> m;
//    int flag = 0;
//    for(int i=0; i<n; i++) {
//        if(i % 2 == 0 or i == n-1) {
//            for(int j=0; j<m; j++) {
//                cout << '#';
//            }
//        }
//        if(i % 2 != 0) {
//            if(flag == 0) {
//                for(int j=0; j<m-1; j++)
//                    cout << '.';
//                cout << '#';
//            }
//            if(flag == 1) {
//                cout << '#';
//                for(int j=1; j<m; j++)
//                    cout << '.';
//            }
//        }
//        if(i % 2 != 0)
//            flag=!flag;
//        cout << "\n";
//    }
//    return 0;
//}