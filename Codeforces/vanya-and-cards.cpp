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
//    ll n,x;
//    cin >> n >> x;
//    ll a[n];
//    ll sum=0;
//    for(int i=0; i<n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    if(sum == 0)
//        cout << 0 << "\n";
//    else{
//        ll d=abs(sum);
//        if(d<=x)
//            cout<<1;
//        else
//            cout<<(d+x-1)/x;
//    }
//    return 0;
//}