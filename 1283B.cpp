#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        
        if(n % k == 0 || n <= k/2) {
            cout << n << endl;
            continue;
        }

        int res = k * (n/k) + min(k/2,n % k);

        cout << res << endl;
    }
}