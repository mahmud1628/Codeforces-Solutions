#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int left = 0, right = n-1;
    int sereja = 0, dima = 0;
    bool turn = true;
    while(left<=right) {
        if(turn) {
            if(a[left] > a[right]) {
                sereja += a[left];
                left++;
            }
            else {
                sereja += a[right];
                right--;
            }
            turn = false;
        }
        else {
            if(a[left] > a[right]) {
                dima += a[left];
                left++;
            }
            else {
                dima += a[right];
                right--;
            }
            turn = true;
        }
    }
    cout<<sereja<<" "<<dima<<endl;
}