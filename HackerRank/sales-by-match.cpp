//https://www.hackerrank.com/challenges/sock-merchant/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, ans=0, c;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    for(int i=0; i<n; i++) {
//        c=1;
//        if(a[i] == 0)
//            continue;
//        for(int j=i+1; j<n; j++) {
//            if(a[i] == a[j]) {
//                a[j]=0;
//                c++;
//            }
//        }
//        ans+=c/2;
//    }
//    cout << ans;
//    return 0;
//}