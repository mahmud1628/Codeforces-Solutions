#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    int mid;
    if((a>b && b>c) || (a<b && b<c)) mid = b;
    else if((b>a && a>c) || (b<a && a<c)) mid = a;
    else mid = c;
    cout<<abs(mid - a) + abs(mid - b) + abs(mid - c)<<endl;
}