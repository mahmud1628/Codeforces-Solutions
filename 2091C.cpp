#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        vector<int> res;

        for(int i = 1; i <= n; i+=2) {
            res.push_back(i);
        }

        for(int i = 2; i <= n ; i+=2) {
            res.push_back(i);
        }

        for(int i=0;i<res.size()-1;i++) {
            cout << res[i] << " ";
        }

        cout << res[res.size()-1] << endl;
    }
}