//https://www.hackerrank.com/challenges/kaprekar-numbers/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    ll p, q, r=0, len=0, sq, rv=0, t, rem;
//    vector<ll> a;
//    cin >> p >> q;
//    for(ll i=p; i<=q; i++) {
//        sq = i*i;
//        r=0;
//        rv=0;
//        len=0;
//        t=i;
//        while(t!=0) {
//            len++;
//            t/=10;
//        }
//        if((sq%10)!=0) {
//            while (len--) {
//                rem = sq % 10;
//                rv = rv * 10 + rem;
//                sq /= 10;
//            }
//            while (rv != 0) {
//                rem = rv % 10;
//                r = r * 10 + rem;
//                rv /= 10;
//            }
//        }else {
//            for (ll j = len; j >= 0; j--) {
//                rv = rv * 10 + ll(sq / pow(10, j)) % 10;
//            }
//            r = rv;
//            while (len--) {
//                sq /= 10;
//            }
//        }
//        if((sq+r) == i)
//            a.push_back(i);
//    }
//    if(a.empty())
//        cout << "INVALID RANGE";
//    else {
//        sort(a.begin(), a.end());
//        for(int i=0; i<a.size(); i++)
//            cout << a[i] << " ";
//    }
//    return 0;
//}