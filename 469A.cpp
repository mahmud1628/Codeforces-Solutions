#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    vector<bool> arr(n,false);
    while(p--) {
        int a;
        cin>>a;
        arr[a-1] = true;
    }
    cin>>q;
    while(q--) {
        int a;
        cin>>a;
        arr[a-1] = true;
    }
    for(int i=0;i<n;i++) {
        if(!arr[i]) {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}