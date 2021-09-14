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
//    ll n;
//    cin >> n;
//    map<int,int> m;
//    for(int i=0; i<n; i++) {
//        int x, y;
//        cin >> x >> y;
//        m.insert(pair<int,int>(x, y));
//    }
//    map<int,int>::iterator it;
//    int c = 0;
//    for(it=m.begin(); it!=m.end();) {
//        int x = it->first;
//        int y = it->second;
//        it++;
//        int z = it->first;
//        int l = it->second;
//        if(x < z and y > l)
//            c++;
//
//    }
//    if(c != 0)
//        cout << "Happy Alex";
//    else
//        cout << "Poor Alex";
//    return 0;
//}