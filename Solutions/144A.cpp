#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l,h;
    l=h=0;
    for(int i=0;i<n;i++) {
        if(a[i] > a[h]) {
            h=i;
        }
        if(a[i] <= a[l]) {
            l=i;
        }
    }
    if(l>h) {
        cout<<h + (n-l-1)<<endl;
    }
    else {
        cout<<h + n-l-2<<endl;
    }
}