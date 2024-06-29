#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> w(2*n);
    for(int i=0;i<2*n;i++) cin>>w[i];
    sort(w.begin(),w.end());
    int ans = INT_MAX;
    //cout<<ans<<endl;
    for(int i=0;i<2*n;i++) { // i stores the index of the first man in single kayak
        for(int j=i+1;j<2*n;j++) { // j stores the index of the second man in single kayak
            vector<int> temp; // stores the people in the tandem kayaks
            for(int k=0;k<2*n;k++) {
                if(k!=i && k!=j) temp.push_back(w[k]);
            }
            int temp_ans = 0;
            for(int k=0;k<2*n-2;k+=2) temp_ans += temp[k+1] - temp[k];
            ans = min(ans,temp_ans);
        }
    }
    cout<<ans<<endl;
}

/* The idea is to take two people in the single kayaks and then calculate the instability of the tandem kayaks. We find every combination of those two people in the single kayaks and calculate the instability for every combination. As n<=50, the running time of O(n^3) won't give a TLE*/