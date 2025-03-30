#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> even,odd;
    int evens = 0, odds = 0;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(a%2) {
            odds++;
            odd.push_back(a);
        }
        else {
            evens++;
            even.push_back(a);
        }
    }

    int m = min(odds,evens);

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    if(odds == evens) {
        cout << 0 << endl;
        return 0;
    } else if(m == odds) {
        evens = odds + 1;
    } else {
        odds = evens + 1;
    }

    if(odds + evens == n) {
        cout << 0 << endl;
        return 0;
    }

    

    int sum = 0;

    for(int i=0;i<odd.size() - odds;i++) {
        sum += odd[i];
    }

    for(int i=0;i<even.size() - evens;i++) {
        sum += even[i];
    }

    cout << sum << endl;
}