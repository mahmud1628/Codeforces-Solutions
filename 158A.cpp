#include<iostream>
using namespace std;

int main() {
    int n,k,res = 0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) 
        if(a[i]>=a[k-1] && a[i])
            res++;
        else 
            break;
    cout<<res<<endl;
}