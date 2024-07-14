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

/*
We repeatedly take a column and then sort it in a non-decreasing order.
Here sum is the summation of elements in that column and curr is a running sum which is calculated by adding the element with previous curr when we encounter one element while traversing the sorted column.
As the column is sorted, we can easily substract the first element from the next elements to obtain a part of the result. And this subtraction is done by subtracting the element (n-1-j) times from the summation of the next elements where (n-1-j) is the number of next elements in the sorted column. 
We do this repeatedly for rest of the elements in the sorted column.
*/