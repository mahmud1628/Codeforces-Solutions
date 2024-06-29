#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        unsigned long long int n,a,b;
        cin>>n>>a>>b;
        int k;
        unsigned long long int profit = 0;
        k = (a>=b) ? 0 : b-a;
        if(!k) {
            profit = (unsigned long long int) (n * a);
        }
        else if(k>=n) {
            profit = n*(2*b - n +1)/2;
        }
        else {
            profit = k*(2*b - k +1 )/2;  
            profit += (n-k) * a;     
        }
        cout<<profit<<endl;
    }
}