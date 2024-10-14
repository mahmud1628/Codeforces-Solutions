#include<iostream>
#include<map>
using namespace std;

int main() {
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    map<char,int> m1;
    for(auto ch:a) {
        if(m1.find(ch) == m1.end()) {
            m1[ch] = 1;
        }
        else {
            m1[ch]++;
        }
    }
    for(auto ch:b) {
        if(m1.find(ch) == m1.end()) {
            m1[ch] = 1;
        }
        else {
            m1[ch]++;
        }
    }
    for(auto ch:c) {
        if(m1.find(ch) == m1.end()) {
            cout<<"NO"<<endl;
            return 0;
        }
        else {
            m1[ch]--;
        }
    }
    map<char,int>::iterator it = m1.begin();
    while(it != m1.end()) {
        if(it->second != 0) {
            cout<<"NO"<<endl;
            return 0;
        }
        it++;
    }
    cout<<"YES"<<endl;
    return 0;
}