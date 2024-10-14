#include<iostream>
using namespace std;

int main() {
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int n = s.size();
    for(int i=0;i<n;i++) {
        if(s[i] != t[n-i-1]) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}