#include<iostream>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int a;
    int res = 0;
    while(n--) {
        cin>>a;
        if(a>h) res+=2;
        else res++;
    }
    cout<<res<<endl;
}