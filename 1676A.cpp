#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    getchar();
    while(t--) {
        string s;
        getline(cin,s);
        int a = 0, b = 0;
        for(int i = 0;i<3;i++) 
            a += s[i] - '0';
        for(int i=3;i<6;i++) 
            b += s[i] - '0';
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}