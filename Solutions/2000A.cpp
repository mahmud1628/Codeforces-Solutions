#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string n;
        cin>>n;
        if(n.size() <=2) {
            cout<<"NO"<<endl;
            continue;
        }
        if(n[0] == '1' && n[1] == '0') {
            if(n[2] == '0') {
                cout<<"NO"<<endl;
                continue;
            }
            else if(n[2] == '1' && n.size()==3) {
                cout<<"NO"<<endl;
                continue;
            }
            else {
                cout<<"YES"<<endl;
                continue;
            }
        }
        else cout<<"NO"<<endl;
    }
}