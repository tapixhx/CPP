//https://www.hackerrank.com/challenges/between-two-sets/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n,m,p=0,count;
//    cin >> n >> m;
//    vector<int> a(n), b(m), c;
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    for(int i=0; i<m; i++)
//        cin >> b[i];
//    for(int i=a[n-1]; i<=b[0]; i++) {
//        count = 0;
//        for(int j=0; j<n; j++) {
//            if(i%a[j] == 0)
//                count++;
//        }
//        if(count == n) {
//            c.push_back(i);
//        }
//    }
//    for(int i=0; i<c.size(); i++) {
//        count = 0;
//        for(int j=0; j<m; j++) {
//            if(b[j]%c[i] == 0) {
//                count++;
//            }
//        }
//        if(count == m)
//            p++;
//    }
//    cout << p;
//    return 0;
//}