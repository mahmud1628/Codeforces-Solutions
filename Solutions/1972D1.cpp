#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        int res = 0;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if((i+j) % (j*gcd(i,j)) == 0) res++;
            }
        }
        cout<<res<<endl;
    }
} // not solved