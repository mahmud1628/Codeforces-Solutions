#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(1000);
    int num = 1;
    for(int i = 0; i < 1000; i++) {
        if(num % 3 != 0 && num % 10 != 3) {
            a[i] = num;
        } else {
            i--;
        }
        num++;
    }
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        cout << a[k-1] << endl;
    }
}