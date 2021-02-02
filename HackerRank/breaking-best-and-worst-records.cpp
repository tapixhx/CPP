//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n, max, min, max_count=0, min_count=0;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0; i<n; i++)
//        cin >> a[i];
//    min = max = a[0];
//    for(int i=0; i<n; i++) {
//        if(max < a[i]) {
//            max = a[i];
//            max_count++;
//        }
//        else if (min > a[i]){
//            min = a[i];
//            min_count++;
//        }
//    }
//    cout << max_count << " " << min_count;
//    return 0;
//}