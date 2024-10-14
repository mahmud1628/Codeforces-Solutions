#include<iostream>
#include<map>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto ch:s) {
        if(mp.find(ch) == mp.end()) {
            mp[ch] = 1;
        }
    }
    if(mp.size()%2) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}