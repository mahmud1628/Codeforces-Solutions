#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int bad_odds = 0, bad_evens = 0;
        for(int i=0;i<n;i++) {
            int num;
            cin >> num;
            if(i % 2 == 0 && num % 2) bad_evens++;
            if(i % 2 && num % 2 == 0) bad_odds++;
        }
        bad_evens == bad_odds ? cout << bad_evens << endl : cout << -1 << endl;
    }
}