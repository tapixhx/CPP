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
//    string s, temp="";
//    cin >> s;
//    vector<string> v;
//    for(int i=0; i<s.length(); i++) {
//        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i<s.length()-2){
//            if(temp!="")
//                v.push_back(temp);
//            temp="";
//            i+=2;
//        }
//        else
//            temp+=s[i];
//    }
//    v.push_back(temp);
//    for(auto i : v)
//        cout<<i<<" ";
//    return 0;
//}