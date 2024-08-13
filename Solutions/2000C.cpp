#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int m;
        cin>>m;
        getchar();
        string str[m];
        for(int i = 0;i<m;i++) cin>>str[i];
        for(string s : str) {
            if(s.size() != n) {
                cout<<"NO"<<endl;
            }
            else if(n==1 && s.size() == 1) {
                cout<<"YES"<<endl;
                continue;
            }
            else {
                unordered_map<int,char> as;
                unordered_map<char,int> sa;
                as[a[0]] = s[0];
                sa[s[0]] = a[0];
                bool yes = true;
                for(int i = 1;i<s.size();i++) {
                    if(as.find(a[i]) == as.end()) as[a[i]] = s[i];
                    else if(as[a[i]] != s[i]) {
                        yes = false;
                        break;
                    }
                    if(sa.find(s[i]) == sa.end()) sa[s[i]] = a[i];
                    else if(sa[s[i]] != a[i]) {
                        yes = false;
                        break;
                    }
                    as[a[i]] = s[i];
                    sa[s[i]] = a[i];
                }
                if(yes) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
}