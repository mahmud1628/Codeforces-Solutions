#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        for(int i=0;i<3;i++) s[i] = tolower(s[i]);
        if(s == "yes") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}