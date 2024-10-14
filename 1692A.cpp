#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int res = 0;
        if(b>a) res++;
        if(c>a) res++;
        if(d>a) res++;
        cout<<res<<endl;
    }
}