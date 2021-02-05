//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int y, flag=0;
//    cin >> y;
//    if(y>=1700 && y<=1917) {
//        if(y%4==0)
//            flag=1;
//    }
//    else if(y == 1918)
//        flag=2;
//    else if(y>1918 && y<=2700) {
//        if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
//            flag=1;
//    }
//
//    if(flag == 1)
//        cout << "12.09." << y;
//    else if(flag == 0)
//        cout << "13.09." << y;
//    else
//        cout << "26.09." << y;
//    return 0;
//}