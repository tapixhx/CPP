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
//    int n, m, i;
//    cin >> n >> m;
//    int a[m], cnt[n+1];
//    for(int j=0; j<=n; j++)
//        cnt[j] = 0;
//    for(i=0; i<m; i++)
//        cin >> a[i];
//    ll ans = 0;
//    ans += a[0];
//    for(i=1; i<m; i++) {
//        if(a[i] > a[i-1])
//            ans += a[i] - a[i-1];
//        else if(a[i] < a[i-1])
//            ans += n-a[i-1] + a[i];
//        else
//            continue;
//    }
//    cout << ans-1 << "\n";
//    return 0;
//}