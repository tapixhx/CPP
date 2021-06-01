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
//    int n, l, r, i;
//    cin >> n >> l >> r;
//    int mx = 0, mn = 0;
//    for(i=0; i<l; i++)
//        mn += pow(2, i);
//    for(i=0; i<r; i++)
//        mx += pow(2, i);
//    mx += (n-r)*pow(2, i-1);
//    cout << mn+(n-l) << " " << mx;
//    return 0;
//}