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
//    int q;
//    cin >> q;
//    while(q--) {
//        int n, flag=0;
//        cin >> n;
//        vector<int> a(n);
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        if(n==1)
//            cout << 1 << "\n";
//        else {
//            for(int i=0; i<n-1; i++) {
//                for(int j=i+1; j<n; j++) {
//                    if(abs(a[i]-a[j]) == 1) {
//                        flag=1;
//                        break;
//                    }
//                }
//                if(flag == 1)
//                    break;
//            }
//            if(flag == 1)
//                cout << 2 << "\n";
//            else
//                cout << 1 << "\n";
//        }
//    }
//    return 0;
//}