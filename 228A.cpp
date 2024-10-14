#include<iostream>
#include<map>
using namespace std;

int main() {
    int s[4];
    int ans = 0;
    map<int,int> mp;
    for(int i=0;i<4;i++) {
        cin>>s[i];
        if(mp.find(s[i]) != mp.end()) {
            ans++;
        }
        else {
            mp.insert({s[i],1});
        }
    }
    cout<<ans<<endl;
    return 0;
}