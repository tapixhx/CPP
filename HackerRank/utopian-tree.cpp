//https://www.hackerrank.com/challenges/utopian-tree/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int c=2, a[70], t, k=0;
//    cin >> t;
//    vector<int> inp(t), ans(t);
//    a[0] = 1;
//    for(int i=1; i<=60; i++) {
//        if(c%2 == 0) {
//            a[i] = a[i-1] * 2;
//        }
//        else {
//            a[i] = a[i-1] + 1;
//        }
//        c+=1;
//    }
//    for(int i=0; i<t; i++)
//        cin >> inp[i];
//    for(int i=0; i<t; i++) {
//        for(int j=0; j<=60; j++) {
//            if(inp[i] == j) {
////                cout << j << " " << a[j] << "\n";
//                ans[k] = a[j];
//                k++;
//            }
//        }
//    }
//    for(int i=0; i<k; i++)
//        cout << ans[i] << "\n";
//    return 0;
//}