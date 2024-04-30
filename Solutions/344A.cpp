#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    n--;
    int res = 1;
    int m;
    cin>>m;
    while(n--) {
        int mm;
        cin>>mm;
        if(mm!=m) res++;
        m = mm;
    }
    cout<<res<<endl;
}