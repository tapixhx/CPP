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
//    int a[3], mx = 1, sm = 0;
//    for(int i=0; i<3; i++) {
//        cin >> a[i];
//        mx *= a[i];
//        sm += a[i];
//    }
//    mx = max(mx, sm);
//    int i = 0;
//    while(i < 2) {
//        int s = a[i] + a[i+1];
//        s *= a[(i+2)%3];
//        mx = max(mx, s);
//        i++;
//    }
//    cout << mx;
//    return 0;
//}