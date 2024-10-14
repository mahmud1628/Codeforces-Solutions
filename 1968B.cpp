#include<iostream>
using namespace std;

int is_valid(string a,string b)
{
    int cnt = 0;
    for(auto c:b) {
        if(cnt == a.size()) break;
        if(c == a[cnt]) cnt++;
    }
    return cnt;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        string a,b;
        getchar();
        getline(cin,a);
        getline(cin,b);
        cout<<is_valid(a,b)<<endl;
    }
}