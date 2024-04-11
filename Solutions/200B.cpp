#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    double sum = 0.00;
    for(int i=0;i<n;i++) {
        int p;
        cin>>p;
        sum += 1.0*p/100;
    }
    cout<< setprecision(12) <<sum/n*100.00<<endl;
    return 0;
}