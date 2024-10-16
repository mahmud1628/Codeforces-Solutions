#include<bits/stdc++.h>
using namespace std;

int main() {
    set<char> st;
    for(auto c : "codeforces") {
        st.insert(c);
    }
    int t;
    cin >> t;
    getchar();
    while(t--) {
        char c;
        cin >> c;
        if(st.find(c) != st.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}