#include<bits/stdc++.h>
using namespace std;

int main( ) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector<int> ones;
        char last = s[0];
        ones.push_back(0);
        for(char c : s) {
            if(c == last && c == '0') {
                last = c;
                continue;
            }
            if(c != last && c == '0') ones.push_back(0);
            else ones[ones.size()-1]++;
            last = c;
        }
        // for(int i=0;i<ones.size();i++) {
        //     cout << ones[i] << " ";
        // }
        // cout << endl;
        sort(ones.begin(),ones.end());
        int alice = 0;
        for(int i=ones.size()-1;i>=0;i-=2) alice+=ones[i];
        cout << alice << endl;
    }
}