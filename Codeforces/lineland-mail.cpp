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
//    ll a[n];
//    for(ll &i : a)
//        cin >> i;
//    ll mn;
//    (a[0] < 0) ? mn = a[0] : mn = 0;
//    for(ll i=0; i<n; i++)
//        a[i] += mn;
//    cout << a[1]-a[0] << " " << a[n-1]-a[0] << "\n";
//    for(int i=1; i<n-1; i++) {
//        cout << min(a[i]-a[i-1], a[i+1]-a[i]) << " " << max(a[i]-a[0], a[n-1]-a[i]) << "\n";
//    }
//    cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << "\n";
//    return 0;
//}