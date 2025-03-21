#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(max(a1,b1) != max(a2,b2)) {
        cout << "No" << endl;
        return;
    }
    
    int total_area = a1 * b1 + a2 * b2;
    int length = floor(sqrt(total_area));
    //cout << length << endl;
    if(length * length == total_area) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}