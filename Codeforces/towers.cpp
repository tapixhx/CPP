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
//    map<int,int> mp;
//    int l[n];
//    for(int i=0; i<n; i++) {
//        cin>>l[i];
//        mp[l[i]]++;
//    }
//    int mx=0;
//    for(auto x : mp) {
//        if(x.second > mx)
//            mx=x.second;
//    }
//    cout << mx << " "<< mp.size()<< "\n";
//    return 0;
//}