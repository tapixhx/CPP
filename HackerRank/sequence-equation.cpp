//https://www.hackerrank.com/challenges/permutation-equation/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n+1), b(n+1);
//    for(int i=1; i<=n; i++)
//        cin >> a[i];
//    b=a;
//    sort(b.begin(), b.end());
//    for(int i=1; i<=n; i++) {
//        for(int j=1; j<=n; j++) {
//            if(b[i] == a[j]) {
//                for(int k=1; k<=n; k++) {
//                    if(j == a[k]) {
//                        cout << k <<"\n";
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}