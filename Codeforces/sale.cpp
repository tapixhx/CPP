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
//    vector<int> a(n);
//    for(int &i : a)
//        cin >> i;
//    sort(a.begin(), a.end());
//    int res = 0;
//    for(int i=0; i<n && m>=1; i++) {
//        if(a[i] < 0) {
//            res += 0-a[i];
//            m--;
//        }
//    }
//    cout << res;
//    return 0;
//}