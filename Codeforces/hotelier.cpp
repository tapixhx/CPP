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
//    string s;
//    cin >> n >> s;
//    vector<int> a(10, 0);
//    for(int i=0; i<n; i++) {
//        if(s[i] == 'L') {
//            for(int j=0; j<10; j++) {
//                if(a[j] == 0) {
//                    a[j]=1;
//                    break;
//                }
//            }
//        }
//        else if(s[i] == 'R') {
//            for(int j=9; j>=0; j--) {
//                if(a[j] == 0) {
//                    a[j]=1;
//                    break;
//                }
//            }
//        }
//        else {
//            a[s[i]-'0']=0;
//        }
//    }
//    for(int i=0; i<10; i++)
//        cout << a[i];
//    return 0;
//}