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
//    char a[8][8];
//    for(int i=0; i<8; i++) {
//        for (int j=0; j<8; j++)
//            cin >> a[i][j];
//    }
//
//    map<char,int> m1, m2;
//    m1['Q']=9, m1['R']=5, m1['B']=3, m1['N']=3, m1['P']=1, m1['K']=0;
//    m2['q']=9, m2['r']=5, m2['b']=3, m2['n']=3, m2['p']=1, m2['k']=0;
//
//    int ans1 = 0, ans2 = 0;
//    for(int i=0; i<8; i++) {
//        for (int j = 0; j < 8; j++) {
//            if (a[i][j] != '.') {
//                if (a[i][j] >= 'A' and a[i][j] <= 'Z')
//                    ans1 += m1[a[i][j]];
//                if (a[i][j] >= 'a' and a[i][j] <= 'z')
//                    ans2 += m2[a[i][j]];
//            }
//        }
//    }
//
//    if(ans1 > ans2)
//        cout << "White\n";
//    else if(ans2 > ans1)
//        cout << "Black\n";
//    else
//        cout << "Draw\n";
//    return 0;
//}