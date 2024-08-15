#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++) cin>>x[i];
        if(n == 2) {
            if(x[0] + 1 != x[1]) cout<<"Yes"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}