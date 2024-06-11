#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int r = 240 - k;
    int i = 0;
    int s = 0;
    while(s <= r) {
        i++;
        s += 5*i;
    }
    i--;
    cout<< (i<=n ? i : n);
}