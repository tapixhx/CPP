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
//        int n, flag = 1;
//        cin >> n;
//        vector<int> a(n+1);
//        for(int i=1; i<=n; i++)
//            cin >> a[i];
//        for(int i=1; i<=n; i++) {
//            if(a[i] != i) {
//                flag = 0;
//                break;
//            }
//        }
//        if(flag) {
//            cout << 0 << "\n";
//        }
//        else {
//            if(a[1] == n && a[n] == 1)
//                cout << 3 << "\n";
//            else if((a[1] == n && a[n] != 1) || (a[1] != n && a[n] == 1) || (a[1] != n && a[n] != 1 && a[1] != 1 && a[n] != n))
//                cout << 2 << "\n";
//            else
//                cout << 1 << "\n";
//        }
//    }
//    return 0;
//}