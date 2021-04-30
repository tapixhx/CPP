#include <bits/stdc++.h>

#define ll              long long int
#define mod             1000000007
#define pi              3.141592653589793238
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);

using namespace std;

int main() {
    FASTIO
    int t;
    cin >> t;
    while(t--) {
        int len;
        string s;
        cin >> s;
        len = s.length();
        if(len > 10) {
            cout << s[0] << len-2 << s[len-1] << "\n";
        }
        else
            cout << s << "\n";
    }
    return 0;
}