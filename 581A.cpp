#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int res1 = a < b ? a : b;
    int res2 = a < b ? (b-res1) : (a-res1);
    cout<<res1<<" "<<res2/2<<endl;
}