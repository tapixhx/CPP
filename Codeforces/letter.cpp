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
//    int n, m, srow = -1, lrow = -1, scol = INT_MAX, lcol = -1;
//    cin >> n >> m;
//    char a[n+1][m+1];
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            cin >> a[i][j];
//            if(a[i][j] == '*') {
//                if(srow == -1)
//                    srow = i;
//                if(lrow < i)
//                    lrow = i;
//                if(scol > j)
//                    scol = j;
//                if(lcol < j)
//                    lcol = j;
//            }
//        }
//    }
//    for(int i=srow; i<=lrow; i++) {
//        for(int j=scol; j<=lcol; j++) {
//            cout << a[i][j];
//        }
//        cout << "\n";
//    }
//    return 0;
//}