//https://www.hackerrank.com/challenges/drawing-book/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, p, k = 0, i, c;
//    cin >> n >> p;
//    if (n % 2 == 0)n = n + 1;
//    int a[n+1];
//    for (i = 0; i <= n; i++)
//        a[i] = i;
//    if (p <= (n / 2)) {
//        for (i = 0; i < n; i = i + 2) {
//            if (p == a[i] || p == a[i + 1])
//                c = k;
//            else
//                k++;
//        }
//    } else {
//        for (i = n; i >= 0; i = i - 2)
//            if (p == a[i] || p == a[i - 1])
//                c = k;
//            else
//                k++;
//    }
//    cout << c;
//    return 0;
//}