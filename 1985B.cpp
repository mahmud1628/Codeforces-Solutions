#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int max = -1;
        int x = 2;
        for(int i=2;i<=n;i++) {
            int k = (int) floor(n/i);
            int m = i*k*(k+1)/2;
            if(m>max) {
                max = m;
                x = i;
            }
        }
        cout<<x<<endl;
    }
}