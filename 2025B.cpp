#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long solve(int k) {
    if(k == 0) return 1;
    if(k == 1) return 2;
    if(k%2 ==0) {
        return solve(k/2) * solve(k/2) % MOD;
    } else {
        return 2 * solve(k/2) * solve(k/2) % MOD;
    }
}

int main() {
    int t;
    cin >> t;
    vector<long long> n(t),k(t);
    for(auto & a:n) cin >> a;
    for(auto & a:k) cin >> a;

    for(int i=0;i<t;i++) {
        cout << solve(k[i]) << endl;
    }
}