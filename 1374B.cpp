#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 && n % 3 && n != 1) {
            cout << -1 << endl;
            continue;
        }
        int no_of_twos = 0, no_of_threes = 0;
        while(n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
                no_of_twos++;
            }
            else if(n % 3 == 0) {
                n = n / 3;
                no_of_threes++;
            }
            else {
                no_of_threes = -1;
                break;
            }
        }
        if(no_of_threes >= no_of_twos) cout << 2 * no_of_threes - no_of_twos << endl;
        else cout << -1 << endl;
    }
}

/*
    if a number is to be 1 by dividing it by 6, then the number should contain equal number of 2's and 3's in its prime factorization and no other primes
*/