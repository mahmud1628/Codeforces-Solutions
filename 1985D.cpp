#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        getchar();
        for(int i=0;i<n;i++) {
            getline(cin,v[i]);
        }
        // for(int i=0;i<n;i++) {
        //     for(int j=0;j<m;j++) {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int t = 0,l = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(v[i][j] == '#') {
                    t = j+1;
                    break;
                }
            }
            if(t) break;
        }
        for(int i=0;i<m;i++) {
            for(int j = 0;j<n;j++) {
                if(v[j][i] == '#') {
                    l = j + 1;
                    break;
                }
            }
            if(l) break;
        }
        cout<<l<< " " << t <<endl;
        continue;
    }
}