#include<iostream>
using namespace std;

int main( ) {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int sum = 2*k2 + 3 * k3 + 5 * k5 + 6 * k6;

    int min256 = (min(k2, min(k5,k6)));
    k2 = k2 - min256;
    int min32 = min(k2,k3);

    cout << min256 * 256 + min32 * 32 << endl;
    
}