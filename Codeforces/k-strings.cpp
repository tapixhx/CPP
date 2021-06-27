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
//    int k;
//    cin >> k;
//    string s;
//    cin >> s;
//    int n = s.size();
//    unordered_map<int, int> m;
//    for(int i=0; i<n; i++)
//        m[s[i]]++;
//    string ans = "";
//    for(auto j : m) {
//        if(j.second%k != 0) {
//            cout<<-1<<endl;
//            return 0;
//        }
//        for(int i=0; i<j.second/k; i++)
//            ans += j.first;
//    }
//    for(int i=0; i<k; i++)
//        cout << ans;
//    return 0;
//}