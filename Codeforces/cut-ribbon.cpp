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
//    int n, a, b, c;
//    cin >> n >> a >> b >> c;
//    vector<int> dp(n+1);
//    dp[0]=0;
//    for(int i=1; i<=n; i++) {
//        dp[i] = -1;
//        if(i-a>=0)
//            dp[i]=max(dp[i], dp[i-a]);
//        if(i-b>=0)
//            dp[i]=max(dp[i], dp[i-b]);
//        if(i-c>=0)
//            dp[i]=max(dp[i], dp[i-c]);
//        if(dp[i]!=-1)
//            dp[i]++;
//    }
//    cout << dp[n];
//    return 0;
//}