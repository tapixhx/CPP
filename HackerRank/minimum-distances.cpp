//https://www.hackerrank.com/challenges/minimum-distances/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    ll n, min=9999999, diff;
//    cin >> n;
//    vector<ll> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    for(int i=0; i<n ;i++) {
//        for(int j=0; j<n ; j++) {
//            if(i==j)
//                continue;
//            if(a[i] == a[j]) {
//                diff = abs(i-j);
//                if(diff < min)
//                    min = diff;
//            }
//        }
//    }
//    if(min == 9999999)
//        cout << -1;
//    else
//        cout << min;
//    return 0;
//}