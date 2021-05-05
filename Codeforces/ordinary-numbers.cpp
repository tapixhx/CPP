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
//vector<ll> seq;
//void obtSeq(ll i, int u) {
//    if(i > 1111111111)
//        return;
//    seq.push_back(i);
//    obtSeq(i*10+u, u);
//}
//
//void cal() {
//    for(ll i=1; i<=9; i++) {
//        obtSeq(i, i);
//    }
//    sort(seq.begin(), seq.end());
//}
//
//int main() {
//    FASTIO
//    cal();
//    int t;
//    cin >> t;
//    while(t--) {
//        ll n;
//        cin >> n;
//        for(int i=0; i<seq.size(); i++) {
//            if(seq[i] > n) {
//                cout << i << "\n";
//                break;
//            }
//        }
//    }
//    return 0;
//}