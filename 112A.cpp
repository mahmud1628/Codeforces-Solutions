#include<iostream>
using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.size();i++) {
        for(int j=0;j<a.size();j++) {
            if(tolower(a[i]) > tolower(b[i])) {
                cout<<1<<endl;
                return 0;
            }
            else if(tolower(a[i]) < tolower(b[i])) {
                cout<<-1<<endl;
                return  0;
            }
        }
    }
    cout<<0<<endl;
    return 0;
}