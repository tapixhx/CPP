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
//    ll n, c;
//    cin >> n >> c;
//    vector<int> a(n);
//    for(int &i : a)
//        cin >> i;
//    int ans = 1;
//    for(int i=0; i<n-1; i++) {
//        if((a[i+1] - a[i]) <= c)
//            ans++;
//        else
//            ans = 1;
//    }
//    cout << ans;
//    return 0;
//}