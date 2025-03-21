#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_set<int> s;
        while(n--) {
            int num;
            cin >> num;
            s.insert(num);
        }
        cout << s.size() << endl;
    }
}