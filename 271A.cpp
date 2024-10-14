#include<iostream>
#include<unordered_set>
using namespace std;

bool is_beautiful(int n) {
    unordered_set<int> s;
    while(n) {
        s.insert(n%10);
        n=n/10;
    }
    return s.size() == 4;
}

int main() {
    int n;
    cin>>n;
    while(true) {
        n++;
        if(is_beautiful(n)) {
            cout<<n<<endl;
            return 0;
        }
    }
}