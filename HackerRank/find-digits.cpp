//https://www.hackerrank.com/challenges/find-digits/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t, rem, n, s, c, k=0;
//    cin >> t;
//    vector<int> a(t), b(t);
//    for(int i=0; i<t; i++)
//        cin >> b[i];
//    for(int i=0; i<t; i++) {
//        s=b[i];
//        c=0;
//        while(s!=0) {
//            rem = s%10;
//            if(rem == 0) {
//                s /= 10;
//                continue;
//            }
//            if(b[i]%rem == 0)
//                c++;
//            s/=10;
//        }
//        a[k]=c;
//        k++;
//    }
//    for(int i=0; i<k; i++)
//        cout << a[i] << "\n";
//    return 0;
//}