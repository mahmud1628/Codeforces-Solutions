#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) a.push_back(a[i]);

    int max_rest = 0;
    int rest = 0;

    for(int i : a) {
        if(i) {
            rest++;
        }
        else {
            max_rest = max(rest,max_rest);
            rest = 0;
        }
    }

    cout << max_rest << endl;
}