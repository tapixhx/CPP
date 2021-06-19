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
//    ll a[1000000], i, n, count=0;
//    cin >> n;
//    for(i=0; i<n; i++)
//        cin >> a[i];
//    sort(a,a+n);
//    ll c1=a[0];
//    ll c2=a[n-1];
//    for(i=0; i<n; i++) {
//        if(a[i]!=c1 && a[i]!=c2)
//            count++;
//    }
//    cout << count;
//    return 0;
//}