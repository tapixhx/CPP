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
//    ll n;
//    cin >> n;
//    vector<ll> a(n+1);
//    for(ll i=1; i<=n; i++)
//        cin >> a[i];
//    if(n <= 2) {
//        cout << 0 << "\n";
//        for(ll i=1; i<=n; i++)
//            cout << a[i] << " ";
//    }
//    else {
//        sort(a.begin(), a.end());
//        vector<ll> ans(n+1);
//        ans[1] = a[n];
//        ans[n] = a[n-1];
//        ll j = 1, k = n-2, cnt = 2;
//        while(j <= k) {
//            if(cnt%2 == 0) {
//                ans[cnt] = a[j];
//                j++;
//            }
//            else {
//                ans[cnt] = a[k];
//                k--;
//            }
//            cnt++;
//        }
//        if(n%2 == 0) {
//            cout << (n/2)-1 << "\n";
//        }
//        else {
//            cout << n/2 << "\n";
//        }
//        for(int i=1; i<=n; i++)
//            cout << ans[i] << " ";
//    }
//    return 0;
//}