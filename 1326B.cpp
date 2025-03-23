#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n);
    for(int i=0;i<n;i++) cin >> b[i];

    int x = 0;

    vector<int> a;
    a.push_back(b[0]);

    x = max(0,a[0]);

    for(int i=1;i<n;i++) {
        x = max(x,a[i-1]);
        a.push_back(b[i] + x);
    }

    for(int i = 0; i < n-1;i++) cout << a[i] << " ";
    cout << a[n-1] << endl;
}