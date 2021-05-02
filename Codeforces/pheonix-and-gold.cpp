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
//    int t;
//    cin >> t;
//    while(t--) {
//        int n, x, sum=0, temp, flag=0, s;
//        cin >> n >> x;
//        vector<int> w(n+1), ans(n+1);
//        for(int i=1; i<=n; i++) {
//            cin >> w[i];
//            sum+=w[i];
//        }
//        sort(w.begin(), w.end());
//        if(sum != x) {
//            sum = 0;
//            for(int i=1; i<=n; i++) {
//                sum+=w[i];
//                if(sum == x) {
//                    temp = i;
//                    sum-=w[i];
//                    flag = 1;
//                }
//                else {
//                    ans[i] = w[i];
//                }
//            }
//            if(flag == 1) {
//                ans[temp] = w[n];
//                ans[n] = w[temp];
//            }
//            cout << "YES\n";
//            for(int i=1; i<=n; i++)
//                cout << ans[i] << " ";
//            cout << "\n";
//        }
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}