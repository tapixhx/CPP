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
//class node{
//
//public:
//    string name;
//    node* parent_ptr;
//    vector<node*> childs;
//    int cnt_locked_des;
//    int cnt_des;
//    bool isLocked;
//    int uid;
////    set<int> locked_des_uid;
//    set<node*> locked_des_ptr;
//    map<int, int> locked_des_uid;
//
//    node(string str, node* p_ptr){
//        name = str;
//        parent_ptr = p_ptr;
//        cnt_locked_des = 0;
//        isLocked = false;
//        cnt_des = 0;
//        uid = -1;
//    }
//
//};
//
//map<string, node*> mp;
//
//bool lock(string str, int uid){
//
//    node* curr = mp[str];
//    if(curr->cnt_locked_des != 0 or curr->isLocked) return false;
//
//    node* p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL){
//        if(p_ptr->isLocked) return false;
//        p_ptr = p_ptr->parent_ptr;
//    }
//
//    curr->isLocked = true;
//    curr->uid = uid;
//
//    p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL){
//        p_ptr->cnt_locked_des++;
////        p_ptr->cnt_des++;
//        p_ptr->locked_des_ptr.insert(curr);
////        p_ptr->locked_des_uid.insert({uid, 0});
//        p_ptr->locked_des_uid[uid]++;
//        p_ptr = p_ptr->parent_ptr;
//    }
//    return true;
//}
//
//bool unlock(string str, int uid){
//
//    node* curr = mp[str];
//    if(!curr->isLocked or curr->uid != uid) return false;
//    curr->isLocked = false;
//    curr->uid = -1;
//
//    node* p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL){
//        p_ptr->cnt_locked_des--;
//        p_ptr->cnt_des--;
//        p_ptr->locked_des_ptr.erase(curr);
//        if(p_ptr->locked_des_uid[uid] == 1) p_ptr->locked_des_uid.erase(uid);
//        else p_ptr->locked_des_uid[uid]--;
//        p_ptr = p_ptr->parent_ptr;
//    }
//    return true;
//}
//
//bool upgrade(string str, int uid){
//
//    node* curr = mp[str];
////    if(curr->isLocked or curr->locked_des_uid.empty() or
////       curr->locked_des_uid.size() > 1) return false;
//    if(curr->isLocked or curr->locked_des_uid.size() != 1) return false;
//
//    for(auto i : curr->locked_des_uid){
//        if(i.first != uid) return false;
//    }
//
//    set<node*> st = curr->locked_des_ptr;
//    for(node* i : st){
//        unlock(i->name, i->uid);
//    }
//    lock(str, uid);
//    return true;
//
//}
//
//int main() {
//    FASTIO
//    int num, n, qr; cin >> num >> n >> qr;
//    string str; cin >> str;
//    queue<node*> q;
//    node *root = new node(str, NULL);
//    q.push(root);
//    mp[str] = root;
//    num--;
//
//    while(!q.empty() and num){
//        int sz = q.size();
//        for(int i = 0; i < sz and num; i++){
//            node* curr = q.front(); q.pop();
//            for(int j = 0; j < n and num; j++){
//                cin >> str;
//                node* tn = new node(str, curr);
//                curr->childs.push_back(tn);
//                num--;
//                q.push(tn);
//                mp[str] = tn;
//            }
//        }
//    }
//    while(qr--){
//        int tp, uid, sol = 0;
//        cin >> tp;
//        string st; cin >> st >> uid;
//        if(tp == 1 and lock(st, uid)){
//            sol = 1;
//        }
//        else if(tp == 2 and unlock(st, uid)){
//            sol = 1;
//        }
//        else if(tp == 3 and upgrade(st, uid)){
//            sol = 1;
//        }
//        cout << (sol ? "true\n" : "false\n");
//    }
//    return 0;
//}

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
//class MTree {
//public:
//    string name;
//    vector<MTree*> child;
//    MTree* parent_ptr;
//    int cnt_locked_des;
//    bool isLocked;
//    int userId;
//    set<MTree*> locked_des;
//    map<int, int> locked_des_userId;
//
//    MTree(string s, MTree* p) {
//        name = s;
//        parent_ptr = p;
//        cnt_locked_des = 0;
//        isLocked = false;
//        userId = -1;
//    }
//};
//
//map<string, MTree*> mp;
//
//bool lock(string s, int userId) {
//    MTree* curr = mp[s];
//    if(curr->isLocked || curr->cnt_locked_des != 0)
//        return false;
//    MTree* p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL) {
//        if(p_ptr->isLocked)
//            return false;
//        p_ptr = p_ptr->parent_ptr;
//    }
//    curr->isLocked = true;
//    curr->userId = userId;
//    p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL) {
//        p_ptr->cnt_locked_des++;
//        p_ptr->locked_des.insert(curr);
//        p_ptr->locked_des_userId[userId]++;
//        p_ptr = p_ptr->parent_ptr;
//    }
//    return true;
//}
//
//bool unlock(string s, int userId) {
//    MTree* curr = mp[s];
//    if(!curr->isLocked || curr->userId != userId)
//        return false;
//    curr->isLocked = false;
//    curr->userId = -1;
//    MTree* p_ptr = curr->parent_ptr;
//    while(p_ptr != NULL) {
//        p_ptr->cnt_locked_des--;
//        p_ptr->locked_des.erase(curr);
//        p_ptr->locked_des_userId[userId]--;
//        if(p_ptr->locked_des_userId[userId] == 0)
//            p_ptr->locked_des_userId.erase(userId);
//        p_ptr = p_ptr->parent_ptr;
//    }
//    return true;
//}
//
//bool upgrade(string s, int userId) {
//    MTree* curr = mp[s];
//    if(curr->isLocked || curr->locked_des_userId.size() != 1)
//        return false;
//    for(auto i : curr->locked_des_userId) {
//        if (i.first != userId)
//            return false;
//    }
//    for(MTree* i : curr->locked_des) {
//        unlock(i->name, i->userId);
//    }
//    lock(s, userId);
//    return true;
//}
//
//int main() {
//    FASTIO
//    int num, n, qr; cin >> num >> n >> qr;
//    string str; cin >> str;
//    queue<MTree*> q;
//    MTree *root = new MTree(str, NULL);
//    q.push(root);
//    mp[str] = root;
//    num--;
//
//    while(!q.empty() and num){
//        int sz = q.size();
//        for(int i = 0; i < sz and num; i++){
//            MTree* curr = q.front(); q.pop();
//            for(int j = 0; j < n and num; j++){
//                cin >> str;
//                MTree* tn = new MTree(str, curr);
//                curr->child.push_back(tn);
//                num--;
//                q.push(tn);
//                mp[str] = tn;
//            }
//        }
//    }
//    while(qr--){
//        int tp, uid, sol = 0;
//        cin >> tp;
//        string st; cin >> st >> uid;
//        if(tp == 1 and lock(st, uid)){
//            sol = 1;
//        }
//        else if(tp == 2 and unlock(st, uid)){
//            sol = 1;
//        }
//        else if(tp == 3 and upgrade(st, uid)){
//            sol = 1;
//        }
//        cout << (sol ? "true\n" : "false\n");
//    }
//    return 0;
//}