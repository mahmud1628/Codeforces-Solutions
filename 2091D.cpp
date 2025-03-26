#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,m,k;
    cin >> n >> m >> k;

    long long p = (k + n -1)/n; // number of people in the row containing most people

    long long e = m - p + 1; // number of benches in that row

    cout << (p + e - 1) / e << endl; // distribute the peoples in those benches equally
}

long long maxPeople(long long n,long long m,long long b) {
    return ((m / (b + 1) * b) + m % (b + 1)) * n;
}

void solveLinear() { // TLE
    int n,m,k;
    cin >> n >> m>> k;

    int bench_length = 1;

    while(bench_length <= m) {
        if(maxPeople(n,m,bench_length) >= k) {
            cout << bench_length << endl;
            return;
        }
        bench_length++;
    }
}

void solveBinary() {
    long long n,m,k;
    cin >> n >> m >> k;

    long long low = 0, high = 1e9;

    while(high - low > 1) {
        long long mid = (high + low) / 2;

        if(maxPeople(n,m,mid) >= k) {
            high = mid;
        }
        else {
            low = mid;
        }
    }

    cout << high << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}