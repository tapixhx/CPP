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
//bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
//    return (a.second > b.second);
//}
//
//int main() {
//    FASTIO
//    int n, m;
//    cin >> n >> m;
//    vector<pair<int, int>> v(m);
//    for(int i=0; i<m; i++) {
//        int x, y;
//        cin >> x >> y;
//        v[i] = { x, y };
//    }
//    sort(v.begin(), v.end(), sortbysec);
//    int res = 0, i = 0;
//    while(n != 0 and i < m) {
//        if(v[i].first <= n) {
//            n -= v[i].first;
//            res += v[i].first*v[i].second;
//        }
//        else {
//            int d = v[i].first - n;
//            res += (v[i].first - d)*v[i].second;
//            n = 0;
//        }
//        i++;
//    }
//    cout << res;
//    return 0;
//}