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
//        int n, m, flag = 0, ans;
//        cin >> n >> m;
//        vector<int> a(n+1), b(m+1);
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        for(int i=0; i<m; i++)
//            cin >> b[i];
//        for(int i=0; i<n; i++) {
//            for(int j=0; j<m; j++) {
//                if(a[i] == b[j]) {
//                    flag = 1;
//                    ans = a[i];
//                    break;
//                }
//            }
//            if(flag == 1)
//                break;
//        }
//        if(flag == 1)
//            cout << "YES\n" << 1 << " " << ans << "\n";
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}