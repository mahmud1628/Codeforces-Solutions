#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int a,b;
        cin>>a>>b;
        cout<<setprecision(10)<<ceil(1.0*a/b)*b - a<<endl;
    }
}