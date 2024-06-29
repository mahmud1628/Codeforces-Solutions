#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> c(n,vector<int>(m));
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) cin>>c[i][j];
        long long ans = 0;
        for(int i=0;i<m;i++) {
            long long sum = 0;
            vector<long long> temp;
            for(int j=0;j<n;j++) {
                temp.push_back(c[j][i]);
                sum+=c[j][i];
            }
            long long curr = 0;
            sort(temp.begin(),temp.end());
            for(int j=0;j<n;j++) {
                curr+=temp[j];
                ans += llabs(sum-curr - (n-1-j)*temp[j]);
            }
        }
        cout<<ans<<endl;
    }
}