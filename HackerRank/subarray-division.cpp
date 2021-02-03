//https://www.hackerrank.com/challenges/the-birthday-bar/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, d, m, ans=0, s=0;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    cin >> d >> m;
//    for(int i=0; i<(n-m)+1; i++) {
//        s=0;
//        for(int j=i; j<i+m; j++) {
//            s+=a[j];
//        }
//        if(s == d)
//            ans++;
//    }
//    cout << ans;
//    return 0;
//}