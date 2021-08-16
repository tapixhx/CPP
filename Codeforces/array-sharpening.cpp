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
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        for(int &i : a)
//            cin >> i;
//        int pre = 0, suff = 0;
//        for(int i=0; i<n; i++) {
//            if(a[i] < i)
//                break;
//            else
//                pre++;
//        }
//        for(int i=n-1; i>=0; i--) {
//            if(a[i] < n-i-1)
//                break;
//            else
//                suff++;
//        }
//        (pre + suff > n) ? cout << "YES\n" : cout << "NO\n";
//    }
//    return 0;
//}