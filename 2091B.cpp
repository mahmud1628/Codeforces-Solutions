#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for(long long i=0;i<n;i++) cin >> a[i];
    sort(a.rbegin(),a.rend());

    long long result = 0, size = 0;

    for(long long i : a) {
        size++;
        if(i * size >= x) {
            result++;
            size = 0;
        }
    }

    cout << result << endl;

}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
}