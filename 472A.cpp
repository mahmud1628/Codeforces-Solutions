#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x,y;
    if(n % 2 == 0) {
        x = 4;
        y = n - 4;
    } else {
        x = 9;
        y = n - 9;
    }
    cout << x << " " << y << endl;
}