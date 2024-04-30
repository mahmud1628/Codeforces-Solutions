#include<iostream>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    int f=0,s=0;
    while(n) {
        if(n%10 == 4) f++;
        if(n%10 == 7) s++;
        n = n/10;
    }
    if(s+f == 4 || s+f == 7)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return  0;
}