#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<char> v;
    for(auto ch:s) {
        if(ch != '+') v.push_back(ch);
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++) {
        cout<<"+"<<v[i];
    }
    return 0;
}