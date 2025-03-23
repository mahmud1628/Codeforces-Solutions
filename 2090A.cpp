#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,y,a;
    cin >> x >> y >> a;
    long long target = a;
    long long sum = x + y;
    long long remaining = target - floor(target/sum) * sum;
    if(remaining < x) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}