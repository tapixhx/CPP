//https://www.hackerrank.com/challenges/electronics-shop/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int b, n, m, ans, max1=-1, max2=0, s1, s2;
//    cin >> b >> n >> m;
//    vector<int> k(n), d(m);
//    for(int i=0; i<n; i++)
//        cin >> k[i];
//    for(int i=0; i<m; i++)
//        cin >> d[i];
//    sort(k.begin(), k.end());
//    sort(d.begin(), d.end());
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            s1=k[i]+d[j];
//            if((max1<s1) && (s1<=b))
//                max1=s1;
//        }
//    }
//    cout << max1;
//    return 0;
//}