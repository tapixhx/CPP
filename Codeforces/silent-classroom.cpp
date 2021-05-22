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
//    map<char,int> m;
//    string s;
//    for(int i=0; i<n; i++) {
//        cin >> s;
//        if (m.find(s[0]) == m.end()) {
//            m.insert(pair<char,int>(s[0], 1));
//        }
//        else {
//            m[s[0]]++;
//        }
//    }
//    int sum=0;
//    vector<int> a,b;
//    for (auto& it : m) {
//        int a1=it.second/2;
//        int a2=it.second-a1;
//        sum+=a1*(a1-1)/2+a2*(a2-1)/2;
//    }
//    cout << sum;
//    return 0;
//}