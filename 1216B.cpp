#include<bits/stdc++.h>
using namespace std;

struct can {
    int d;
    int p;
};

bool compare(can a, can b) {
    return a.d > b.d;
}

int main() {
    int n;
    cin >> n;
    vector<can> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i].d;
        a[i].p = i + 1;
    }

    sort(a.begin(),a.end(),compare);

    int res = 0;
    for(int i=0;i<n;i++) {
        res += a[i].d * i + 1;
    }
    cout << res << endl;

    for(int i=0;i<n;i++) {
        cout << a[i].p << " ";
    }
}