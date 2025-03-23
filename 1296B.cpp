#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s;
        cin >> s;

        long long spend = 0;

        while(s >= 10) {
            spend += 10 * (s/10);

            s = s % 10 + s/10;
        }

        cout << spend + s << endl;

    }
}