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
//    int n, min, ans=0, q, num;
//    int a[] = {1, 5, 10, 20, 100};
//    cin >> n;
//    while(n!=0) {
//        min = INT_MAX;
//        for(int i=4; i>=0; i--) {
//            q=n/a[i];
//            if(q!=0 && q<min) {
//                min = q;
//                num=a[i];
//            }
//        }
//        if(min != INT_MAX)
//            ans+=min;
//        n%=num;
//    }
//    cout <<  ans;
//    return 0;
//}