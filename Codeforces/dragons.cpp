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
//    int s, n;
//    cin >> s >> n;
//    vector<pair<int, int>> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i].first >> a[i].second;
//    sort(a.begin(), a.end());
//    if(s <= a[0].first)
//        cout << "NO";
//    else {
//        int p = s;
//        p += a[0].second;
//        int i = 1;
//        while(p > a[i].first && i < n) {
//            p += a[i].second;
//            i++;
//        }
//        (i == (n)) ? cout << "YES" : cout << "NO";
//    }
//    return 0;
//}