#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());

    long long length = 0, width = 0;

    for(int i=0;i<n/2;i++) {
        width += a[i];
    }

    for(int i = n/2;i<n;i++) {
        length += a[i];
    }

    cout << length * length + width * width << endl;
}