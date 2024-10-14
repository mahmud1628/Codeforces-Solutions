#include<bits./stdc++.h>
using namespace std;

void solve(string s,string t) {
    int ans = 0;
    for(int i=0;i<s.size() && i < t.size();i++) {
        if(s[i] == t[i]) {
            ans++;
        } else {
            break;
        }
    }
    if(ans > 0)
        cout << s.size() + t.size() - ans + 1  << endl;
    else 
        cout << s.size() + t.size() << endl;
}

int main() {
    int q;
    cin >> q;
    getchar();
    while(q--) {
        string s,t;
        getline(cin,s);
        getline(cin,t);
        // cout << s << endl;
        // cout << t << endl;
        solve(s,t);
    }
}