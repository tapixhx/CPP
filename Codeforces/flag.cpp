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
//    int n, m, flag = 0;
//    cin >> n >> m;
//    char a[n+1][m+1];
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            cin >> a[i][j];
//        }
//    }
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            if((i != 0) && (a[i][j] == a[i-1][j])) {
//                flag = 1;
//                break;
//            }
//            if((j != 0) && (a[i][j] != a[i][j-1])) {
//                flag = 1;
//                break;
//            }
//        }
//        if(flag == 1)
//            break;
//    }
//    if(flag == 1)
//        cout << "NO";
//    else
//        cout << "YES";
//    return 0;
//}