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
//    ll t, n, diff, i1, i2, j1, j2;
//    cin >> t;
//    while(t--) {
//        cin >> n;
//        int flag=0;
//        char a[n+1][n+1];
//        for(int i=0; i<n; i++) {
//            for(int j=0; j<n; j++) {
//                cin >> a[i][j];
//                if(a[i][j] == '*') {
//                    if(flag == 0) {
//                        i1=i;
//                        j1=j;
//                        flag = 1;
//                    }
//                    else {
//                        i2=i;
//                        j2=j;
//                    }
//                }
//            }
//        }
//        if(i1==i2) {
//            diff = abs(j1-j2);
//            if(i1+diff>=n) {
//                a[max(i1-diff, (long long)0)][j1] = '*';
//                a[max(i2-diff, (long long)0)][j2] = '*';
//            }
//            else {
//                a[i1+diff][j1] = '*';
//                a[i2+diff][j2] = '*';
//            }
//        }
//        else if(j1==j2) {
//            diff = abs(i1-i2);
//            if(j1+diff>=n) {
//                a[i1][max(j1-diff, (long long)0)] = '*';
//                a[i2][max(j2-diff, (long long)0)] = '*';
//            }
//            else {
//                a[i1][j1+diff] = '*';
//                a[i2][j2+diff] = '*';
//            }
//        }
//        else {
//            a[i1][j2]='*';
//            a[i2][j1]='*';
//        }
//        for(int i=0; i<n; i++) {
//            for(int j=0; j<n; j++) {
//                cout << a[i][j];
//            }
//            cout << "\n";
//        }
//    }
//    return 0;
//}