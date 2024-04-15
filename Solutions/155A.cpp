#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int points[n];
    for(int i=0;i<n;i++) {
        cin>>points[i];
    }
    int res = 0;
    int max = points[0];
    int min = max;
    for(int i=1;i<n;i++) {
        if(points[i] > max) {
            res++;
            max = points[i];
        }
        if(points[i] < min) {
            res++;
            min = points[i];
        }
    }
    cout<<res<<endl;
}