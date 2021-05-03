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
//        int n, x, flag=0;
//        cin >> n >> x;
//        vector<int> a(n+1), b(n+1);
//        for(int i=1; i<=n; i++)
//            cin >> a[i];
//        for(int i=n; i>=1; i--)
//            cin >> b[i];
//        for(int i=1; i<=n; i++) {
//            if(a[i]+b[i]>x) {
//                flag = 1;
//                break;
//            }
//        }
//        if(flag == 1)
//            cout << "No\n";
//        else
//            cout << "Yes\n";
//    }
//    return 0;
//}