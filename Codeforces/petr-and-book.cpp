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
//    int n;
//    cin >> n;
//    int v[8];
//    int s=0;
//    for(int i=0; i<7; i++)
//        cin >> v[i];
//    int j = 0;
//    while(true) {
//        s=s+v[j];
//        if(s>=n) {
//            cout << j+1 << "\n";
//            break;
//        }
//        j++;
//        if(j > 6)
//            j = 0;
//    }
//    return 0;
//}