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
//    string s;
//    int count=1, flag=0;
//    cin >> s;
//    for(int i=1; i<s.size(); i++) {
//        if(s[i-1]==s[i])
//            count++;
//        else
//            count=1;
//        if(count>=7) {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==0)
//        cout << "NO";
//    else
//        cout << "YES";
//    return 0;
//}