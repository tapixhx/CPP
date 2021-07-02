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
//    int t = 1;
//    while(t--) {
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        int l=0;
//        for(int i=0; i<n; i++) {
//            if(a[i]==1)
//                l++;
//            else
//                break;
//        }
//        int r = 0;
//        for(int i=n-1; i>=0; i--) {
//            if(a[i]==1)
//                r++;
//            else
//                break;
//        }
//        int ans = 0;
//        if(l+r>=n) {
//            cout << n << "\n";
//            break;
//        }
//        else
//            ans = l+r;
//        int cnt = 0;
//        for(int i=0; i<n; i++) {
//            if(a[i] == 1)
//                cnt++;
//            else {
//                ans = max(ans,cnt);
//                cnt = 0;
//            }
//        }
//        ans = max(ans, cnt);
//        cout << ans << "\n";
//    }
//    return 0;
//}