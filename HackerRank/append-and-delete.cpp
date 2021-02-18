//https://www.hackerrank.com/challenges/append-and-delete/problem
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int k, i;
//    string s, t;
//    cin >> s >> t >> k;
//    int ind = min(s.length(), t.length());
//    for (i = 0; i < ind; i++) {
//        if (s[i] != t[i]) {
//            break;
//        }
//    }
//    if (k >= (s.length() + t.length())) {
//        cout << "Yes";
//        exit(0);
//    }
//    int req = t.length() + s.length() - (2 * i);
//    k -= req;
//    if (k >= 0 && k % 2 == 0) {
//        cout << "Yes";
//    } else {
//        cout << "No";
//    }
//	return 0;
//}