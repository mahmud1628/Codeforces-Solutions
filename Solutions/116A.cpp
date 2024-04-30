#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b;
    vector<int> cap(n);
    cin>>a>>b;
    cap[0] = b;
    for(int i=1;i<n;i++) {
        cin>>a>>b;
        cap[i] = cap[i-1] -a +b;
    }
    sort(cap.begin(),cap.end());
    cout<<cap[n-1]<<endl;
}