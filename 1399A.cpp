#include<iostream>
#include<vector>
#include<algorithm>
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
        if(n==1) {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        bool r = true;
        for(int i=0;i<n-1;i++) {
            if(a[i+1] - a[i] > 1) {
                r = false;
                break;
            }
        }
        if(r)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}