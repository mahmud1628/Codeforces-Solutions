#include<bits/stdc++.h>
using namespace std;

int main( ) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int min_a = INT_MAX, min_b = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            min_a = min(min_a,a[i]);
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            min_b = min(min_b,b[i]);
        }

        long long res = 0;
        for(int i = 0; i < n; i++) {
            int move_a = a[i] - min_a;
            int move_b = b[i] - min_b;
            res += max(move_a,move_b);
        }
        cout << res << endl;
    }
}