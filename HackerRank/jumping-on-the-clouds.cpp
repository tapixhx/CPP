//https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, l, k, flag=1, e=100;
//    cin >> n >> k;
//    vector<int> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    l=1;
//    while(l!=0) {
//        if(flag == 1) {
//            l=0;
//            flag++;
//        }
//        l=(l+k)%n;
//        if(a[l] == 1)
//            e-=2;
//        e--;
//    }
//    cout << e;
//    return 0;
//}