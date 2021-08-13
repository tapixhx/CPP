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
//    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//    string curr;
//    cin >> curr;
//    int n;
//    cin >> n;
//    if(n % 12 == 0)
//        cout << curr;
//    else {
//        int rem = n%12, idx;
//        for(int i=0; i<12; i++) {
//            if(months[i] == curr) {
//                idx = i;
//                break;
//            }
//        }
//        int index = (idx+rem)%12;
//        cout << months[index];
//    }
//    return 0;
//}