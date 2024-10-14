#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k,pb,ps;
        cin>>n>>k>>pb>>ps;
        int p[n];
        int a[n];
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>a[i];
        int temp = k;
        unsigned long long int res_b = 0;
        unsigned long long int res_s = 0;
        while(temp--) {
            bool c_b = false,c_s = false;
            res_b += a[pb-1];
            res_s += a[ps-1];
            if(p[pb-1] <= n && a[p[pb-1]-1] > a[pb-1]) {
                pb = p[pb-1];
            }
            else {
                c_b = true;
            }
            if(p[ps-1] <= n &&a[p[ps-1]-1] > a[ps-1]) {
                ps = p[ps-1];
            }
            else {
                c_s = true;
            }
            if(c_b && c_s) {
                res_b += a[pb-1]*temp;
                res_s += a[ps-1]*temp;
                break;
            }
        }
        if(res_b>res_s) {
            cout<<"Bodya"<<endl;
        }
        else if(res_b<res_s) {
            cout<<"Sasha"<<endl;
        }
        else cout<<"Draw"<<endl;
    }
} // not soved