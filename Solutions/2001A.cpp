#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        unordered_map<int,int> m;
        for(auto i : a) {
            if(m.find(i) == m.end()) {
                m[i] = 1;
            }
            else {
                m[i]++;
            }
        }
        int max = 0;
        int sum = 0;
        for(auto i : m) {
            sum += i.second;
            if(i.second > max) max = i.second;
        }
        cout << sum - max << '\n';
    }
}