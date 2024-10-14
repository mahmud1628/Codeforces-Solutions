#include<iostream>
using namespace std;

int main() {
    int k,r;
    cin>>k>>r;
    int i;
    for(i = 1;;i++) {
        if((k*i - r) % 10 == 0 || (k*i) % 10 == 0) break;
    }
    cout<<i;
}