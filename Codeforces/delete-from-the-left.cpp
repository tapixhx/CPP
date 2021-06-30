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
//    string a, b;
//    cin >> a >> b;
//    int n = a.size(), m = b.size(), i, j, cnt = 0;
//    i = n - 1, j = m - 1;
//    while (i >= 0 && j >= 0) {
//        if (a[i] == b[j]) {
//            i--;
//            j--;
//            cnt++;
//        } else
//            break;
//    }
//    int ans = (n - cnt) + (m - cnt);
//    cout << ans << "\n";
//    return 0;
//}