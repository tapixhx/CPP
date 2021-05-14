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
//    int k;
//    cin >> k;
//    if(k == 0) {
//        cout << 0;
//    }
//    else {
//        int a[12], flag = 0, ans=0, s=0;
//        for(int i=0; i<12; i++) {
//            cin >> a[i];
//            s += a[i];
//            if(a[i] >= k) {
//                ans = 1;
//                flag = 1;
//                break;
//            }
//        }
//        if(flag == 0 && s>=k) {
//            int sum = 0;
//            sort(a, a+12, greater<int>());
//            for(int i=0; i<12; i++) {
//                sum += a[i];
//                ans++;
//                if(sum >= k)
//                    break;
//            }
//        }
//        if(s < k)
//            cout << -1;
//        else
//            cout << ans;
//    }
//    return 0;
//}