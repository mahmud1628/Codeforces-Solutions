#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) {
            if(a[0]) cout<<0<<endl;
            else cout<<1<<endl;
            continue;
        }
        else {
            int res = 0;
            long long int total = 0;
            int max = a[0];
            int k = 0;
            again:
            total+=a[k];
            if(max<a[k]) max = a[k];
            if(total - max == max) res++;
            k++;
            if(k<n) goto again;
            cout<<res<<endl;
            continue;
        }
    }
}