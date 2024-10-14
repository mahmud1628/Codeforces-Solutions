#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n % 2 == 0) {
            cout << -1 << '\n' ;
            continue;
        }
        vector<int> res(n);
        res[n/2] = 1;
        for(int i = n/2;i<n-1;i++) {
            res[i+1] = res[i] + 2;
        }
        res[n/2-1] = 2;
        for(int i = n/2 - 1;i > 0;i--) {
            res[i-1] = res[i] + 2;
        }
        for(int i = 0;i<n-1;i++) {
            cout << res[i] << " ";
        }
        cout << res[n-1] << '\n';
    }
}