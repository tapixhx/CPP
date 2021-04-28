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
//    int n, m, a[100000];
//    cin >> n >> m;
//    if(m%2!=0){
//        a[0] = m/2+1;
//        for(int i=1; i < n; i++) {
//            if(i%2 != 0)
//                a[i]=a[i-1]-i;
//            else
//                a[i]=a[i-1]+i;
//        }
//    }
//    else{
//        a[0] = m/2;
//        for(int i=1; i < n; i++) {
//            if(i%2 == 0)
//                a[i]=a[i-1]-i;
//            else
//                a[i]=a[i-1]+i;
//        }
//    }
//    for(int i=0; i < n; i++) {
//        cout << a[i%m] << "\n";
//    }
//    return 0;
//}