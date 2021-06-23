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
//int a[3][3];
//
//void toggle(int x, int y) {
//    if(x>=0 && x<3) {
//        if(y>=0 && y<3) {
//            if(a[x][y] == 1)
//                a[x][y] = 0;
//            else
//                a[x][y] = 1;
//        }
//    }
//}
//
//int main() {
//    FASTIO
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<3; j++)
//            a[i][j] = 1;
//    }
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<3; j++) {
//            int n;
//            cin >> n;
//            for(int k=0; k<n; k++) {
//                toggle(i,j);
//                toggle(i+1,j);
//                toggle(i-1,j);
//                toggle(i,j+1);
//                toggle(i,j-1);
//            }
//        }
//    }
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<3; j++)
//            cout << a[i][j];
//        cout << "\n";
//    }
//    return 0;
//}