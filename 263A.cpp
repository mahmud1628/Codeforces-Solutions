#include<iostream>
using namespace std;

int main() {
    int m,n,a;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin>>a;
            if(a) {
                m = i; n = j;
            }
        }
    }
    cout<<abs(m-2) + abs(n-2)<<endl;
}