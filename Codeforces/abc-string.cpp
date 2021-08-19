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
//        string s;
//        cin >> s;
//        int n = s.size(), i, a[3] = {0};
//        for (i = 0; i < n; i++) {
//            if (s[i] == 'A')
//                a[0]++;
//            else if (s[i] == 'B')
//                a[1]++;
//            else
//                a[2]++;
//        }
//        char ch;
//        if (a[0] >= a[1] && a[0] >= a[2]) {
//            ch = 'A';
//        } else if (a[1] >= a[0] && a[1] >= a[2]) {
//            ch = 'B';
//        } else if (a[2] >= a[0] && a[2] >= a[1]) {
//            ch = 'C';
//        }
//        bool f = false;
//        char tmp, t;
//        if (s[0] == ch)
//            tmp = '(', t = ')';
//        else
//            tmp = ')', t = '(';
//        for (i = 0; i < n; i++) {
//            if (s[i] == ch)
//                s[i] = tmp;
//            else
//                s[i] = t;
//        }
//        stack<char> st;
//        for (i = 0; i < n; i++) {
//            if (s[i] == '(')
//                st.push(s[i]);
//            else {
//                if (st.empty()) {
//                    f = true;
//                    break;
//                } else
//                    st.pop();
//            }
//        }
//        if (f || st.size() > 0)
//            cout << "NO\n";
//        else
//            cout << "YES\n";
//    }
//    return 0;
//}