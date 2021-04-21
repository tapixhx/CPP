//#include <bits/stdc++.h>
//
//#define ll              long long int
//#define mod             1000000007
//#define pi              3.141592653589793238
//#define lcm(a,b)        (a/(__gcd(a,b)))*b
//#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
//
//using namespace std;
//
//int main() {
//    FASTIO
//    int n, num, sum, diff, d;
//    vector<int> b;
//    cin >> n;
//    d = (1 + 8*n);
//    num = abs((1-sqrt(d))/2);
//    sum = (num*num+num)/2;
//    diff = n-sum;
//    cout << num << "\n";
//    for(int i=1; i<=num; i++) {
//        if(i == num)
//            cout << i+diff;
//        else
//            cout << i << " ";
//    }
//    return 0;
//}