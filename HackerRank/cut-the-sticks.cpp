//https://www.hackerrank.com/challenges/cut-the-sticks/problem
//#include<bits/stdc++.h>
//using namespace std;
//
//int minimum(int a[], int n) {
//    int min = 9999;
//    for(int i=0; i<n; i++) {
//        if(a[i] == 0)
//            continue;
//        else if(min>a[i])
//            min=a[i];
//    }
//    return min;
//}
//
//int main() {
//    int a[1000], n, c, m;
//    cin >> n;
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    c=n;
//    while(c!=0) {
//        cout << c << "\n";
//        c=0;
//        m = minimum(a, n);
//        for(int i=0; i<n; i++) {
//            if(a[i]==0)
//                continue;
//            else
//                a[i]=a[i]-m;
//        }
//        for(int i=0; i<n; i++) {
//            if(a[i]==0)
//                continue;
//            else
//                c++;
//        }
//    }
//    return 0;
//}
