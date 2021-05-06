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
//    ll n, neg=0, pos=0, zero=0, cost=0;
//    cin >> n;
//    vector<ll> a(n+1);
//    for(ll i=0; i<n; i++) {
//        cin >> a[i];
//        if(a[i] < 0) {
//            neg++;
//            cost += abs(-1-a[i]);
//        }
//        else if(a[i] > 0) {
//            pos++;
//            cost += abs(a[i]-1);
//        }
//        else {
//            zero++;
//            cost += 1;
//        }
//    }
//    if(neg%2==0 || zero>=1)
//        cout << cost;
//    else
//        cout << cost+2;
//    return 0;
//}