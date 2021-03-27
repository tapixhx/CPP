//https://www.hackerrank.com/challenges/cavity-map/problem
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
//int main() {
//    int n;
//    char map[100][100] = {0,};
//    cin >> n;
//    for (int i = 0; i < n; i++){
//        cin >> map[i];
//    }
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
//                cout << map[i][j];
//            }
//            else if (map[i][j] > map[i - 1][j] && map[i][j] > map[i][j - 1] && \
//                map[i][j] > map[i][j + 1] && map[i][j] > map[i + 1][j])
//                cout << "X";
//            else
//                cout << map[i][j];
//        }
//        cout << "\n";
//    }
//    return 0;
//}