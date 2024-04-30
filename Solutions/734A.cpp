#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a= 0,d=0;
    for(auto c:s) {
        if(c == 'A') a++;
        if(c == 'D') d++;
    }
    if(a>d) cout<<"Anton"<<endl;
    else if(a<d) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}