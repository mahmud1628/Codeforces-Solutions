#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s[0] == s[n-1] ? cout << "NO" <<endl : cout << "YES" <<endl;
    }
}