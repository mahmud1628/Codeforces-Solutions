#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string res = "";
    for(int i=0;i<n;i++) {
        if(i%2 == 0) {
            res += "I hate";
        }
        else {
            res += "I love";
        }
        if(i != n-1) {
            res += " that ";
        }
        else {
            res += " it";
        }
    }
    cout<<res<<endl;
    return 0;
}