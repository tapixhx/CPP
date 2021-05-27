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
//    int n, m, ans = 0;
//    cin >> n >> m;
//    int a[n];
//    for(int &i : a)
//        cin >> i;
//    sort(a, a+n);
//    for(int i=n-1; i>=0; i--) {
//        m -= a[i];
//        ans++;
//        if(m <= 0)
//            break;
//    }
//    cout << ans;
//    return 0;
//}