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
//        ll a[n+1];
//        ll b[5001]={0};
//        for(int i=0;i<n;i++) {
//            cin>>a[i];
//            b[a[i]]++;
//        }
//        int f=0;
//        for(int i=0;i<5001;i++) {
//            if(b[i]>=3) {
//                f=1;
//                break;
//            }
//        }
//        if(f==1)
//            cout << "YES\n";
//        else {
//            for(int i=0;i<5001;i++) {
//                int x,y;
//                if(b[i]==2) {
//                    for(int j=0;j<n;j++) {
//                        if(i==a[j]) {
//                            x=j;
//                            break;
//                        }
//                    }
//                    for(int j=n-1; j>=0; j--) {
//                        if(i==a[j]) {
//                            y=j;
//                            break;
//                        }
//                    }
//                    if((y-x)>1)
//                        f=1;
//                }
//                if(f==1)
//                    break;
//            }
//            if(f==1)
//                cout << "YES\n";
//            else
//                cout << "NO\n";
//        }
//    }
//    return 0;
//}