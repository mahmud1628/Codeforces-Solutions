#include<bits/stdc++.h>
using namespace std;

int main( ) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i=0;i<n;i++) cin >> s[i];
        sort(s.begin(),s.end());
        vector<int> diff(n-1);
        for(int i=0;i<n-1;i++) diff[i] = s[i+1] - s[i];
        cout << *min_element(diff.begin(), diff.end()) << endl;
    }
}