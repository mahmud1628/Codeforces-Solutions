#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int zeros,ones,twos,threes,fives;
        zeros = ones = twos = threes = fives = 0;
        int digits = 0;
        bool possible = false;

        vector<int> arr(n);

        for(int i=0;i<n;i++) cin >> arr[i];

        for(int a : arr) {
            if(a == 0) zeros++;
            else if(a == 1) ones++;
            else if(a == 2) twos++;
            else if(a == 3) threes++;
            else if(a == 5) fives++;
            digits++;
            if(zeros >= 3 && ones >= 1 && twos >= 2 && threes >= 1 && fives >= 1) {
                possible = true;
                break;
            }
        }

        possible ? cout << digits << endl : cout << 0 << endl;
    }
}