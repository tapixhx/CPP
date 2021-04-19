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
//        int n, flag=0, k=0;
//        cin >> n;
//        vii a(n+1), op;
//        for(int i=1; i<=n ; i++)
//            cin >> a[i];
//        for(int i=1; i<=n; i++) {
//            if(flag == 1)
//                break;
//            else if(a[i]%2 == 0) {
//                cout << 1 << "\n" << i << "\n";
//                flag = 1;
//            }
//            else {
//                k++;
//                op.pb(i);
//                if(k==2) {
//                    cout << k << "\n";
//                    for(int j=0; j<op.size(); j++)
//                        cout << op[j] << " ";
//                    cout << "\n";
//                    flag = 1;
//                }
//            }
//        }
//        if(flag == 0)
//            cout << -1 << "\n";
//    }
//    return 0;
//}