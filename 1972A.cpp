#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int check(vector<int> a,vector<int> b) {
    for(int i=0;i<a.size();i++) {
        if(a[i]>b[i]) return b[i];
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int res = 0;
        again:
        int r = check(a,b);
        if(r) {
            a.pop_back();
            a.push_back(r);
            sort(a.begin(),a.end());
            res++;
            goto again;
        }
        else
            cout<<res<<endl;
    }
}