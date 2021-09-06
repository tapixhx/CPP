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
//    int n, s;
//    cin >> n >> s;
//    int sum = 0, mx = -1;
//    for(int i=0; i<n; i++) {
//        int x;
//        cin >> x;
//        sum += x;
//        mx = max(x, mx);
//    }
//    if(sum-mx <= s)
//        cout << "YES";
//    else
//        cout << "NO";
//    return 0;
//}