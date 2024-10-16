#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for(auto & i : a) {
        cin >> i;
        mx = max(mx, i);
    }
    int res = 0;
    for(auto i : a) {
        res += mx - i;
    }
    cout << res << endl;
}