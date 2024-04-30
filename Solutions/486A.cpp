#include<iostream>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int res;
    if(n%2) {
        res = -1*(n/2) -1;
    }
    else {
        res = n/2;
    }
    cout<<res<<endl;
}