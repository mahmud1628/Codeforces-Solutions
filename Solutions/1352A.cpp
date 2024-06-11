#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        queue<int> q;
        int res = 0;
        while(n) {
            q.push(n%10);
            if(n%10) res++;
            n = n/10;
        }
        cout<<res<<endl;
        int i = 0;
        while(q.size()) {
            if(q.front() != 0)  {
                cout<<q.front()*pow(10,i)<<" ";
            }
            q.pop();
            i++;
        }
        cout<<endl;
    }
}