//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int q, m , n, t;
//    cin >> q;
//    t=3*q;
//    vector<int> a(t);
//    for(int i=0; i<t; i++)
//        cin >> a[i];
//    for(int i=0; i<t-2; i+=3) {
//        m = abs(a[i]-a[i+2]);
//        n = abs(a[i+1]-a[i+2]);
//        if(m>n)
//            cout << "Cat B" << "\n";
//        else if(m<n)
//            cout << "Cat A" << "\n";
//        else
//            cout << "Mouse C" << "\n";
//    }
//    return 0;
//}