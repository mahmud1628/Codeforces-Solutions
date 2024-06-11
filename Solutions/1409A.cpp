#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a , b;
        cin>>a>>b;
        int d = abs(a-b);
        if( d %10 == 0) cout<<d/10<<endl;
        else 
        cout<<abs(a-b)/10 + 1<<endl;
    }
}