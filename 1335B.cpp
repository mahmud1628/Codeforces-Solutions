#include<bits/stdc++.h>
using namespace std;

void solve(string alphabet) {
    int n,a,b;
    cin >> n >> a >> b;

    string distincts = alphabet.substr(0,b);
    
    string res = "";

    int t = a / b;

    while(t--) {
        res.append(distincts);
    }

    t = a % b;

    if(t) res.append(distincts.substr(0,t));

    t = n / a;

    string result = "";

    while(t--) 
        result.append(res);
    
    t = n % a;

    if(t) result.append(res.substr(0,t));

    cout << result <<endl;

}

int main() {
    int t;
    cin >> t;
    string alphabet = "a";
    for(int i=0;i<25;i++) alphabet.push_back(alphabet[i] + 1);
    while(t--) {
        solve(alphabet);
    }
}