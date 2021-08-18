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
//    int n, a;
//    cin >> n >> a;
//    vector<int> v(n);
//    for(int i=0; i<n; i++)
//        cin >> v[i];
//    int i = a-1, j = a-1, ans = 0;
//    bool compI = true, compJ = true;
//    while(i >= 0 or j < n) {
//        if(i < 0)
//            compI = false;
//        if(j == n)
//            compJ = false;
//        if(v[i] == 1 and v[j] == 1 and compI and compJ) {
//            if(i == j)
//                ans++;
//            else
//                ans += 2;
//        }
//        if(!compI and v[j] == 1)
//            ans++;
//        if(!compJ and v[i] == 1)
//            ans++;
//        if(i >= 0)
//            i--;
//        if(j < n)
//            j++;
//    }
//    cout << ans;
//    return 0;
//}