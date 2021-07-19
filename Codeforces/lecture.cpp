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
//    int n, m;
//    cin >> n >> m;
//    vector<pair<string, string>> a(m);
//    vector<string> ans;
//    string x, y;
//    for(int i=0; i<m; i++) {
//        cin >> x >> y;
//        a[i].first = x;
//        a[i].second = y;
//    }
//    for(int i=0; i<m; i++) {
//        if(a[i].first.length() <= a[i].second.length())
//            a[i].second = a[i].first;
//    }
//    int num = n;
//    while(num--) {
//        string s;
//        cin >> s;
//        for(int i=0; i<m; i++) {
//            if(s == a[i].first)
//                ans.push_back(a[i].second);
//        }
//    }
//    for(int i=0; i<n; i++)
//        cout << ans[i] << ' ';
//    return 0;
//}