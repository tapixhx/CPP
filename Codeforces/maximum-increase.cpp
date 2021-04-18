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
//int lis_consecutive(vii a, int n) {
//    int res;
//    vii lis(n);
//    lis[0]=1;
//    for(int i=1; i<n; i++) {
//        lis[i] = 1;
//        if(a[i-1]<a[i])
//            lis[i]=max(lis[i], lis[i-1]+1);
//    }
//    res=lis[0];
//    for(int i=1; i<n; i++)
//        res = max(res, lis[i]);
//    return res;
//}
//
//int main() {
//    FASTIO
//    int n;
//    cin >> n;
//    vii a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    cout << lis_consecutive(a, n);
//    return 0;
//}