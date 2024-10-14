#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        m[a] = i+1;
    }
    for(int i=1;i<n+1;i++) cout<<m[i]<<" ";
    return 0;
}