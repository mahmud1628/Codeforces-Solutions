#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int res = 0;
    if(x>=5) {
        res += x/5;
        x = x%5;
    }
    if(x) res++;
    cout<<res<<endl;
}