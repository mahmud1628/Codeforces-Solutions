#include<iostream>
using namespace  std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int t = w*(2*k + (w-1)*k)/2;
    cout<<(t-n > 0 ? t-n:0)<<endl;
}