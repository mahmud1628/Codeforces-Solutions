#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> colors;
    for(int i=0;i<n;i++) {
        int h,a;
        cin>>h>>a;
        colors.push_back({h,a});
    }
    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j!=i) {
                if(colors[i].first == colors[j].second) {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}