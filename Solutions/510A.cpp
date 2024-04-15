#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int flag = 0;
    for(int i=0;i<n;i++) {
        if(i%2 == 0) {
            for(int j=0;j<m;j++) {
                cout<<"#";
            }
        }
        else {
            if(!flag) {
                for(int j=0;j<m-1;j++) {
                    cout<<".";
                }
                cout<<"#";
                flag = 1;
            }
            else {
                cout<<"#";
                for(int j=0;j<m-1;j++) {
                    cout<<".";
                }
                flag = 0;
            }
        }
        cout<<'\n';
    }
    return 0;
}