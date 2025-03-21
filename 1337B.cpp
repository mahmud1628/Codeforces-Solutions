#include <iostream>
using namespace std;

bool checkForDecrease(int x,int m) {
    return x <= 10 * m;
}

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int x,n,m;
        cin >> x >> n >> m; 
        if(checkForDecrease(x,m)) {
            cout << "YES" <<endl;
        }
        else {
            bool isDefeated = false;
            while(n--) {
                x = x / 2 + 10;
                if(checkForDecrease(x,m)) {
                    isDefeated = true;
                    break;
                }
            }
            isDefeated ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}
