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
//        int n, flag = 0;
//        string s;
//        vector<char> v;
//        cin >> n >> s;
//        if(n<=2)
//            cout << "YES\n";
//        else {
//            v.push_back(s[0]);
//            for(int i=1; i<n; i++) {
//                if(s[i-1] == s[i])
//                    continue;
//                else if(s[i-1] != s[i]) {
//                    for(int j=0; j<v.size(); j++) {
//                        if(s[i] == v[j]) {
//                            flag = 1;
//                            break;
//                        }
//                    }
//                    if(flag == 1)
//                        break;
//                    else {
//                        v.push_back(s[i]);
//                    }
//                }
//            }
//            if(flag == 1)
//                cout << "NO\n";
//            else
//                cout << "YES\n";
//        }
//    }
//    return 0;
//}