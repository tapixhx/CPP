//https://www.hackerrank.com/challenges/angry-professor/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t, n, k, m=0, s, p=0;
//    cin >> t;
//    s = t;
//    vector<int> ans(s);
//    while(t!=0) {
//        cin >> n >> k;
//        p=0;
//        vector<int> a(n);
//        for(int i=0; i<n; i++)
//            cin >> a[i];
//        for(int i=0; i<n; i++) {
//            if(a[i]<=0)
//                p++;
//        }
//        if(p>=k)
//            ans[m] = 0;
//        else
//            ans[m] = 1;
//        m++;
//        t--;
//        a.clear();
//    }
//    for(int i=0; i<m; i++) {
//        if(ans[i] == 0)
//            cout << "NO" << "\n";
//        else
//            cout << "YES" << "\n";
//    }
//    return 0;
//}