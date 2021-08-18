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
//    map<int, int> m;
//    int sum = 0;
//    for(int i=0; i<5; i++) {
//        int x;
//        cin >> x;
//        sum += x;
//        m[x]++;
//    }
//    bool found = false;
//    int psum = 0, mxsum = 0;
//    for(auto i : m) {
//        if(i.second > 1) {
//            if(i.second > 3)
//                psum = i.first * 3;
//            else
//                psum = i.first * i.second;
//            mxsum = max(psum, mxsum);
//            found = true;
//        }
//    }
//    (found) ? cout << (sum - mxsum) : cout << sum;
//    return 0;
//}