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
//    ll n, sum=0, a[100000], i, s=0, c=0;
//    cin >> n;
//    for(i=0; i<n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    sum=sum/2;
//    sort(a,a+n);
//    for(i=n-1; i>=0; i--) {
//        s += a[i];
//        c++;
//        if(s > sum)
//            break;
//    }
//    cout << c;
//    return 0;
//}