#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int n,k;
        cin >> n >>k;
        vector<int> a(n);

        int min_val = INT_MAX, max_val = INT_MIN;

        for(int i=0;i<n;i++) {
            cin >> a[i];
            min_val = min(min_val,a[i]);
            max_val = max(max_val,a[i]);
        }

        int res = k + min_val;

        if(max_val - res <= k) {
            cout << res << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}

/*
    Take the minimum and maximum of the array. 
    Calculate the sum of the minimum and k.
    If maximum - sum is less than or equal to k, then the sum is the answer. Otherwise, it's not possible to have such B.
*/