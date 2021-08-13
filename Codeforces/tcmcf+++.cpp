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
//    vector<int> a(n);
//    for(int &i : a)
//        cin >> i;
//    sort(a.begin(), a.end());
//    if(n == 1) {
//        cout << a[0];
//    }
//    else {
//        int neg = 0, idx;
//        for (int i = 0; i < n; i++) {
//            if (a[i] < 0) {
//                neg++;
//                idx = i;
//            }
//        }
//        if ((neg & 1) == 0)
//            idx = -1;
//        bool print = false;
//        for (int i = 0; i < n; i++) {
//            if (i != idx && a[i] != 0) {
//                print = true;
//                cout << a[i] << " ";
//            }
//        }
//        if (!print)
//            cout << 0;
//    }
//    return 0;
//}