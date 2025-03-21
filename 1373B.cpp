#include <iostream>
using namespace std;

int indexOfDiffAdjacents(string s) {
    if(s.empty()) return -1;
    for(int i=0;i<s.size()-1;i++) {
        if(s[i] != s[i+1]) {
            return i;
        };
    }
    return -1;
}

void removeChars(string & s, int i) {
    string newS;
    for(int j = 0;j < i;j++) {
        newS.push_back(s[j]);
    }
    for(int j = i+2;j < s.size();j++) {
        newS.push_back(s[j]);
    }
    s = newS;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int moves = 0;

        while(true) {
            int index = indexOfDiffAdjacents(s);
            if(index == -1) break;
            moves++;
            removeChars(s,index);
        }
        if(moves % 2) cout << "DA" <<endl;
        else cout << "NET" <<endl;
    }
    return 0;
}