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
//    int t;
//    cin >> t;
//    while(t--) {
//        int n, m, x, y, sum=0, d=0;
//        cin >> n >> m >> x >> y;
//        char a[n][m];
//        for(int i=0; i<n; i++) {
//            for(int j=0; j<m; j++) {
//                cin >> a[i][j];
//                if(a[i][j] == '.')
//                    d++;
//            }
//        }
//        if(2*x<=y)
//            cout << d*x << "\n";
//        else {
//            for(int i=0; i<n; i++) {
//                for(int j=0; j<m; j++) {
//                    if(a[i][j] == '.') {
//                        if(j+1<m && (a[i][j+1] == '.')) {
//                            sum+=y;
//                            a[i][j+1]='+';
//                        }
//                        else
//                            sum+=x;
//                    }
//                }
//            }
//            cout << sum << "\n";
//        }
//    }
//    return 0;
//}