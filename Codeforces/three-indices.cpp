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
//        vector<int> a(n);
//        for(int &i : a)
//            cin >> i;
//        for(int i=1; i<n-1; i++) {
//            if(a[i] > a[i-1] && a[i] > a[i+1]) {
//                cout << "YES\n" << i << " "  << i+1 <<  " " << i+2 << "\n";
//                flag = 0;
//                break;
//            }
//        }
//        if(flag)
//            cout << "NO\n";
//    }
//    return 0;
//}