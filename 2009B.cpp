#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        vector<int> res;
        while(n--) {
            cin>>s;
            for(int i=0;i<4;i++)
                if(s[i] == '#') {
                    res.push_back(i+1);
                    break;
                }
        }
        for(int i = res.size() - 1;i>=0;i--) {
            cout<< res[i] <<" ";
        }
        cout<<endl;
    }
}