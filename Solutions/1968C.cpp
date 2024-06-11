#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int x[n];
        for(int i=1;i<n;i++) cin>>x[i];
        int a[n];
        a[0] = x[1] + 1;
        for(int i=1;i<n-1;i++) {
            int k=1;
            a[i] = a[i-1] + x[i];
            while(a[i] <= x[i+1]) {
                k++;
                a[i] = a[i-1] * k + x[i];
            }
        }
        a[n-1] = a[n-2] + x[n-1];
        for(auto i:a) {
            cout<<i<< " ";
        }
        cout<<endl;
    }
}