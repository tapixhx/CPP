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
//    vector<int> f(m);
//    for(int &i : f)
//        cin >> i;
//    sort(f.begin(), f.end());
//    int res = INT_MAX;
//    for(int i=0;i<m;i++) {
//        if(i+n-1 < m) {
//            int h=f[i+n-1] - f[i];
//            res = min(res,h);
//        }
//    }
//    cout << res;
//    return 0;
//}