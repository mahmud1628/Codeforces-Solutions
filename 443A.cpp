#include<iostream>
#include<map>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    if(s.size() <= 2) {
        cout<<0;
        return 0;
    }
    if(s.size() == 3) {
        cout<<1;
        return 0;
    }
    map<char,int> m;
    m['1'] = 1;
    for(int i=1;i<s.size();i+=3) {
        if(m.find(s[i]) == m.end()) {
            m.insert({s[i],1});
        }
    }
    cout<<m.size()-1<<endl;
}