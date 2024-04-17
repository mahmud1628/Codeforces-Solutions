#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int hired = 0;
    int untreated = 0;
    int event;
    while(n--) {
        cin>>event;
        if(event == -1) {
            if(hired > 0) {
                hired--;
            }
            else {
                untreated++;
            }
        }
        else {
            hired+=event;
        }
    }
    cout<<untreated<<endl;
    return 0;
}