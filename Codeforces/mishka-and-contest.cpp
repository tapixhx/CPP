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
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n+1);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    int left = 0, ans = 0;
//    while(left < n) {
//        if(a[left] <= k) {
//            ans++;
//            left++;
//        }
//        else
//            break;
//    }
//    if(left <  n) {
//        int right = n-1;
//        while(right > left) {
//            if(a[right] <= k) {
//                ans++;
//                right--;
//            }
//            else
//                break;
//        }
//    }
//    cout << ans;
//    return 0;
//}