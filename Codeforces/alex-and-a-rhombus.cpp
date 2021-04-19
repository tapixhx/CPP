//#include <bits/stdc++.h>
//
//#define ll              long long int
//#define vii             vector<int>
//#define vll             vector<ll>
//#define mii             map<int, int>
//#define mll             map<ll, ll>
//#define sii             set<int>
//#define sll             set<ll>
//#define umi             unordered_map<int, int>
//#define uml             unordered_map<ll, ll>
//#define usi             unordered_set<int>
//#define usl             unordered_set<ll>
//#define pii             pair<int, int>
//#define pll             pair<ll, ll>
//#define pb              push_back
//#define pf              push_front
//#define mk              make_pair
//#define endl            "\n"
//#define desc            greater<int>()
//#define F               first
//#define S               second
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//using namespace std;
//
//int main() {
//    FASTIO
//    int n;
//    cin >> n;
//    vii dp(n+1);
//    dp[1]=1;
//    for(int i=2; i<=n; i++) {
//        dp[i]=dp[i-1]+((i-1)*4);
//    }
//    cout << dp[n];
//    return 0;
//}