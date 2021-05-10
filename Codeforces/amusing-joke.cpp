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
//    string a, b, c;
//    cin >> a >> b >> c;
//    vector<int> u(256, 0), v(256, 0);
//    for(int i=0; i<a.size(); i++)
//        u[a[i]]++;
//    for(int i=0; i<b.size(); i++)
//        u[b[i]]++;
//    for(int i=0; i<c.size(); i++)
//        v[c[i]]++;
//    for(int i=0; i<256; i++) {
//        if(u[i] != v[i]) {
//            cout << "NO";
//            return 0;
//        }
//    }
//    cout << "YES";
//    return 0;
//}