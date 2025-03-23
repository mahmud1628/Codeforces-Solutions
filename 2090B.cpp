#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    bool possible = true;
    vector<string> grid(n);
    for(int i=0;i<n;i++)
        cin >> grid[i];
    for(int i=1;i<n;i++) {
        for(int j = 1;j<m;j++) {
            if(grid[i][j] == '1') {
                if(grid[i-1][j] == '0' && grid[i][j-1] == '0') {
                    possible = false;
                    break;
                }
                else if(grid[i-1][j] == '1' && grid[i][j-1] == '0') {
                    for(int k = i - 1;k >= 0;k--) {
                        if(grid[k][j] == '0') {
                            possible = false;
                            break;
                        }
                    }
                }
                else if(grid[i-1][j] == '0' && grid[i][j-1] == '1') {
                    for(int k = j - 1;k >= 0;k--) {
                        if(grid[i][k] == '0') {
                            possible = false;
                            break;
                        }
                    }
                }
                else {
                    bool row = true, col = true;
                    for(int k = i - 1;k >= 0;k--) {
                        if(grid[k][j] == '0') {
                            row = false;
                            break;
                        }
                    }
                    for(int k = j - 1;k >= 0;k--) {
                        if(grid[i][k] == '0') {
                            col = false;
                            break;
                        }
                    }
                    if(!row && !col) {
                        possible = false;
                        break;
                    }
                }
            }
        }
        if(!possible) break;
    }
    possible ? cout << "YES" <<endl : cout << "NO" <<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}