//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ll i, j, k, t, ans=0, r, l=0, d;
//    cin >> i >> j >> k;
//    for(ll m=i; m<=j; m++) {
//        l=0;
//        t=m;
//        while(t!=0) {
//            r=t%10;
//            l=(l*10)+r;
//            t=t/10;
//        }
//        d=abs(l-m);
//        if(d%k == 0)
//            ans++;
//    }
//    cout << ans;
//    return 0;
//}