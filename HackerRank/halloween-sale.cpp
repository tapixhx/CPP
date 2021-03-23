//https://www.hackerrank.com/challenges/halloween-sale/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    int p, d, m, s, sum=0, ans=0, rem;
//    cin >> p >> d >> m >> s;
//    rem = s;
//    while(p>=m) {
//        sum+=p;
//        rem-=p;
//        p-=d;
//        if(sum>s)
//            break;
//        ans++;
//    }
//    while(rem>=0 && rem>=m) {
//        rem-=m;
//        ans++;
//    }
//    cout << ans;
//    return 0;
//}