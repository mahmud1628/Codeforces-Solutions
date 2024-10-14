#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x,y,k;
        cin>>x>>y>>k;
        int res = 0;
        res += 2 * max((x + k - 1)/k,(y+k-1)/k);
        if((x + k - 1)/k > (y + k - 1)/k) res--;
        cout << res <<endl;
    }
} 