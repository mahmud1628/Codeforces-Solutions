#include<iostream>
using namespace std;

int check(string s) {
    if(s.size() == 0) return -1;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'U') return i;
    }
    return -1;
}

void flip(string & s,int p) {
    if(s.size()==1) s.pop_back();
    else if(s.size() == 2) {
        if(p==0) s[0] = s[1];
        s.pop_back();
    }
    else {
        if(p==0) {
            s[p+1] = (s[p+1] == 'U' ? 'D' : 'U');
            s[s.size()-1] = (s[s.size()-1] == 'U' ? 'D' : 'U');
            for(int i=p;i<s.size()-1;i++) {
                s[i] = s[i+1];
        }
        }
        if(p==s.size()-1) {
            s[p-1] = (s[p-1] == 'U' ? 'D' : 'U');
            s[0] = (s[0] == 'U' ? 'D' : 'U');
        }
        if(p>0 && p<s.size()-1) {
            s[p+1] = (s[p+1] == 'U' ? 'D' : 'U');
            s[p-1] = (s[p-1] == 'U' ? 'D' : 'U');
                        for(int i=p;i<s.size()-1;i++) {
                s[i] = s[i+1];
        }
        }
        s.pop_back();
    }

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = 0;
        again:
        int p = check(s);
        if(p>=0) {
            flip(s,p);
            res++;
            goto again;
        }
        if(res%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}