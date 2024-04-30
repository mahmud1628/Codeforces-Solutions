#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int res = 0;
    while(n--) {
        int a,b;
        cin>>a>>b;
        if(b-a>=2) res++;
    }
    cout<<res<<endl;
    return 0;
}