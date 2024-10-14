#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> students(3);
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        students[a-1].push_back(i+1);
    } 
    int res = min(min(students[0].size(),students[1].size()),students[2].size());
    cout<<res<<endl;
    if(res) {
        for(int i=0;i<res;i++) {
            cout<<students[0][i]<< " " << students[1][i] << " " << students[2][i] << endl;
        }
    }
    return 0;
}