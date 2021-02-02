//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string w, alpha[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
//    int h[26], index[100], temp, len;
//    for(int i=0; i<26; i++)
//        cin >> h[i];
//    cin >> w;
//    len=w.length();
//    temp=h[w[0]-97];
//    for(int i=0; i<w.length(); i++) {
//        if(temp<h[w[i]-97])
//            temp=h[w[i]-97];
//    }
//    cout << temp*len;
//    return 0;
//}