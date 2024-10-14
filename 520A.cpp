#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26) {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<bool> arr(26,false);
    for(auto c:s) {
        c = tolower(c);
        arr[c-97] = true;
    }
    for(auto a:arr) {
        if(!a) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}