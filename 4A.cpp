#include<iostream>
using namespace std;

int main() {
    int w;
    cin>>w;
    if(w==2) {
        cout<<"NO"<<endl;
        return 0;
    }
    if(w%2) {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0;
}