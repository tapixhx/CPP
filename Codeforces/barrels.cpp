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
//    ll t;
//    cin >> t;
//    while(t--) {
//        ll n, k;
//        cin >> n >> k;
//        ll a[n+1];
//        for(ll i=0;i<n;i++)
//            cin>>a[i];
//        sort(a,a+n);
//        for(ll i=n-2;i>=0;i--) {
//            a[n-1]=a[n-1]+a[i];
//            a[i]=0;
//            k--;
//            if(k==0)
//                break;
//        }
//        sort(a,a+n);
//
//        cout << a[n-1]-a[0] << "\n";
//    }
//    return 0;
//}