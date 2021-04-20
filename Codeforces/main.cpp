#include <bits/stdc++.h>

#define ll              long long int
#define vii             vector<int>
#define vll             vector<ll>
#define mii             map<int, int>
#define mll             map<ll, ll>
#define sii             set<int>
#define sll             set<ll>
#define umi             unordered_map<int, int>
#define uml             unordered_map<ll, ll>
#define usi             unordered_set<int>
#define usl             unordered_set<ll>
#define pii             pair<int, int>
#define pll             pair<ll, ll>
#define pb              push_back
#define pf              push_front
#define mk              make_pair
#define endl            "\n"
#define desc            greater<int>()
#define F               first
#define S               second
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
           int n, q;
           string s;
           cin >> n >> q >> s;
           while(q--) {
               int u, v, f1=0, f2=0;
               string s1;
               cin >> u >> v;
               s1 = s.substr((u-1), (v));
               if((u-1)==0 && v==n)
                   cout << "NO\n";
               else {
                   for(int i=0; i<u-1; i++) {
                       if(s1[0]==s[i])
                           f1=1;
                   }
                   for(int i=v; i<n; i++) {
                       if(s1[v-u]==s[i])
                           f2=1;
                   }
                   if(f1==0 && f2==0)
                       cout << "NO\n";
                   else
                       cout << "YES\n";
               }
           }
    }
    return 0;
}