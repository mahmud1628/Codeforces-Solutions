#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool res = true;
    while(n--) {
        int a;cin>>a;
        if(a) res = false;
    }
    if(res) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return  0;
}