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
//        int flag=0;
//        string s, s_temp, rev;
//        cin >> s;
//        for(int i=0; i<s.length(); i++) {
//            if(s[i]!='a') {
//                flag = 1;
//                break;
//            }
//        }
//        if(flag == 1) {
//            s_temp='a'+s;
//            rev=s_temp;
//            reverse(rev.begin(), rev.end());
//            if(s_temp!=rev) {
//                cout << "YES\n" << s_temp << "\n";
//            }
//            else {
//                s_temp=s+'a';
//                cout << "YES\n" << s_temp << "\n";
//            }
//        }
//        else
//            cout << "NO\n";
//    }
//    return 0;
//}