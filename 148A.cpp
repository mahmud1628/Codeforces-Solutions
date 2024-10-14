#include<iostream>
#include<vector>
using namespace std;

int main() {
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    if(k == 1 || l == 1 || m == 1 || n == 1) {
        cout<<d<<endl;
        return 0;
    }
    int res = 0;
    for(int i=1;i<=d;i++) {
        if( i % k && i % l && i % m && i % n ) {
            res++;
        }
    }
    cout<<d - res<<endl;
    return 0;
}