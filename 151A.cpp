#include<iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m1 = k*l/nl;
    int m2 = c*d;
    int m3 = p/np;
    cout<<min(m1,min(m2,m3))/n;
}