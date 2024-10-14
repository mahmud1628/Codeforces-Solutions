#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int max = a[0];
        for(int i=0;i<n-1;i++) {
            if(a[i] > max) max = a[i];
        }
        cout<<max+a[n-1]<<endl;
    }
}