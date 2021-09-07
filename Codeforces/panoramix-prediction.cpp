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
//bool isPrime(int n) {
//    if (n <= 1)
//        return false;
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    FASTIO
//    int n, m;
//    cin >> n >> m;
//    int f = 0;
//    for(int i=n+1; i<=m; i++) {
//        if(isPrime(i) and (m != i)) {
//            f = 1;
//            cout << "NO";
//            break;
//        }
//        if(isPrime(i) and (m == i)) {
//            f=1;
//            cout << "YES";
//        }
//    }
//    if(f == 0)
//        cout<<"NO";
//    return 0;
//}