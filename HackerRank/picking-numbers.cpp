//https://www.hackerrank.com/challenges/picking-numbers/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int max=0, diff, n, size;
//    cin >> n;
//    vector<int> a(n), s;
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<n; j++) {
//            diff = a[i]-a[j];
//            if(diff==0 || diff==1) {
//                s.push_back(a[j]);
//            }
//        }
//        size = s.size();
//        if(max<size)
//            max=size;
//        s.clear();
//    }
//    cout << max;
//    return 0;
//}