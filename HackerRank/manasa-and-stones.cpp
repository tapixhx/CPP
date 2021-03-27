//https://www.hackerrank.com/challenges/manasa-and-stones/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    int n, a, b ,t;
//    int c[1000] = { 0, };
//
//    cin >> t;
//
//    while(t--) {
//        cin >> n >> a >> b;
//        for(int i = 0; i < n; i++){
//            if (a == b) {
//                cout << a*(n - 1);
//                break;
//            }
//            else if (a>b)
//                c[i] = (b*(n - 1 - i)) + (a*i);
//            else
//                c[i] = (a * (n - i - 1)) + (b*i);
//            cout << c[i] << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}