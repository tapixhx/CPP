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
//    int n, d;
//    cin >> n >> d;
//    vector<int> a(n);
//    int sum = 0;
//    for(int i=0; i<n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    sum += 10*(n-1);
//    if(sum > d)
//        cout << -1;
//    else if(sum == d)
//        cout << (n-1)*2;
//    else {
//        int ans = (n-1)*2;
//        int rem = d-sum;
//        ans += rem/5;
//        cout << ans;
//    }
//    return 0;
//}