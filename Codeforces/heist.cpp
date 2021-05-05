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
//    int n, k=1, ans=0;
//    cin >> n;
//    vector<int> a(n+1);
//    for(int i=1; i<=n; i++)
//        cin >> a[i];
//    sort(a.begin(), a.end());
//    for(int i=2; i<=n; i++) {
//        ans+=(a[i]-a[i-1])-1;
//    }
//    cout << ans;
//    return 0;
//}