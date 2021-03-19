//https://www.hackerrank.com/challenges/acm-icpc-team/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    int n, m, k, l, c = 0, c2 = 1, mx = 0, ans1, ans2;
//    string a[510];
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            c = 0;
//            for (int q = 0; q < m; q++) {
//                if (a[i][q] == '1' || a[j][q] == '1')
//                    c++;
//            }
//            if (c == mx) {
//                c2++;
//            }
//            if (c > mx) {
//                ans1 = c;
//                c2 = 1;
//                mx = c;
//            }
//        }
//    }
//    cout << ans1 << "\n" << c2;
//    return 0;
//}
