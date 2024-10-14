#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    string res = "";
    for(int i=0;i<s.size();i++) {
        if(s[i] == '.') res+= '0';
        if(s[i] == '-') {
            if(s[i+1] == '.') {
                res += '1';
            }
            else {
                res += '2';
            }
            i++;
        }
    }
    cout<<res<<endl;
}