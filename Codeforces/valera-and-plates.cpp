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
//    int n, m, k;
//    cin >> n >> m >> k;
//    int sum = 0, one = 0, sec = 0;
//    for(int i=0; i<n; i++) {
//        int x;
//        cin >> x;
//        if(x == 1)
//            one++;
//        else
//            sec++;
//    }
//    if(one > m) {
//        sum=sum+(one-m);
//        m=0;
//    }
//    else
//        m=m-one;
//    if(sec > (m+k)) {
//        sum=sum+(sec-(m+k));
//        k=0;
//        m=0;
//    }
//    cout << sum;
//    return 0;
//}