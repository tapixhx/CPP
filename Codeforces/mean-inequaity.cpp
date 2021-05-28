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
//        ll n;
//        cin >> n;
//        vector<ll> arr(2*n+1);
//        for(ll i=1; i<=2*n; i++)
//            cin >> arr[i];
//        sort(arr.begin(), arr.end());
//        for(ll i=1; i<=2*n; i=i+2)
//            swap(arr[i],arr[i+1]);
//        swap(arr[1],arr[2*n]);
//        for(ll i=1; i<=2*n; i++)
//            cout << arr[i] << " ";
//        cout << "\n";
//    }
//    return 0;
//}