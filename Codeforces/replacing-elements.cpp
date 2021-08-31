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
//    int t;
//    cin >> t;
//    while(t--) {
//        int n, d;
//        cin >> n >> d;
//        int a[n+1];
//        int c = 0;
//        for(int i=0; i<n; i++) {
//            cin >> a[i];
//            if(a[i] <= d)
//                c++;
//        }
//        sort(a,a+n);
//        if(c == n)
//            cout<<"YES\n";
//        else if((a[0] + a[1]) <= d)
//            cout<<"YES\n";
//        else
//            cout<<"NO\n";
//    }
//    return 0;
//}