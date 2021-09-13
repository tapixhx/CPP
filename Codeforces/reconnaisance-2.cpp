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
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    int sum = 0, min = INT_MAX, sum1 = abs(a[n-1]-a[0]);
//    int x, y;
//    for(int i=0; i<n-1; i++) {
//        sum = abs(a[i]-a[i+1]);
//        if(sum < min) {
//            min = sum;
//            x = i+1;
//            y = i+2;
//        }
//    }
//    if(sum1 < min) {
//        x = n;
//        y = 1;
//    }
//    cout << x << " " << y;
//    return 0;
//}