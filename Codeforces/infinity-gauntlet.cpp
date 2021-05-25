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
//    ll n, x, ans = 0;
//    cin >> n;
//    vector<string> v;
//    unordered_map<string, ll> m;
//    m["red"]=1;
//    m["purple"]=1;
//    m["yellow"]=1;
//    m["orange"]=1;
//    m["green"]=1;
//    m["blue"]=1;
//    for(ll i=0;i<n;i++) {
//        string s;
//        cin >> s;
//        m[s] = 0;
//    }
//    if(m["red"]==1)
//        v.push_back("Reality");
//    if(m["purple"]==1)
//        v.push_back("Power");
//    if(m["yellow"]==1)
//        v.push_back("Mind");
//    if(m["orange"]==1)
//        v.push_back("Soul");
//    if(m["green"]==1)
//        v.push_back("Time");
//    if(m["blue"]==1)
//        v.push_back("Space");
//    cout << v.size() << "\n";
//    for(auto i : v)
//        cout << i << "\n";
//    return 0;
//}