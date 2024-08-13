#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(n <= 2) {
            cout<<"YES"<<endl;
            continue;
        }
        vector<bool> occupied(n,false);
        occupied[a[0]-1] = true;
        bool yes = true;
        for(int i=1;i<n;i++) {
            int s = a[i] - 1;
            if(s == 0) {
                if(!occupied[s+1]) {
                    yes = false;
                    break;
                }
            }
            else if(s == n-1) {
                if(!occupied[s-1]) {
                    yes = false;
                    break;
                }
            }
            else if(!occupied[s-1] && !occupied[s+1]) {
                yes = false;
                break;
            }
        occupied[s] = true;
        }
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}