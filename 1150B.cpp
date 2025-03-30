#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;

    vector<vector<bool>> board(n,vector<bool>(n,false));

    for(int i=0;i<n;i++) {
        cin >> s;
        for(int j = 0;j<n;j++) {
            if(s[j] == '#') board[i][j] = true;
        }
    }

    bool possible = true;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(!board[i][j]) {
                if(j - 1 >=0 && j + 1 < n && i + 2 < n && !board[i+1][j-1] && !board[i+1][j] && !board[i+1][j+1] && !board[i+2][j]) {
                    board[i+1][j-1] = true;
                    board[i+1][j] = true;
                    board[i+1][j+1] = true;
                    board[i+2][j] = true;
                }
                else {
                    possible = false;
                    break;
                }
            }
        }
        if(!possible) break;
    }
    possible ? cout << "YES" << endl : cout << "NO" << endl;
}