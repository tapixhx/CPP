//https://www.hackerrank.com/challenges/beautiful-triplets/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    ll ans=0, n, d;
//    cin >> n >> d;
//    vector<ll> a(n);
//    for(int i=0; i<n ; i++)
//        cin >> a[i];
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<n; j++) {
//            if(a[j]-a[i]!=d)
//                continue;
//            for(int k=0; k<n; k++) {
//                if((a[j]-a[i] == d) && (a[k]-a[j] == d))
//                    ans++;
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}