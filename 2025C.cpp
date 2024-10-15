#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        map<int,int> frequency;
        for(auto & i:a) {
            cin >> i;
            frequency[i]++;
        }
        int start = -1; // store the start of the current subarray
        int last = -1; // store last traversed element
        int count = 0, max_count = 0;
        for(auto i : frequency) {
            if(last != i.first - 1) { // if last traversed element is not the previous element of current element
                count = i.second; // start a new subarray
                start = i.first; // store the start of the new subarray
            } else { // if last traversed element is the previous element of current element
                if(i.first - start + 1 > k) { // if the length of the subarray is greater than k,i.e, we have already taken k elements
                    count -= frequency[i.first - k]; // remove the first element of the subarray
                }
                count += i.second; // add the current element to the subarray
            }
            last = i.first; // store the last traversed element
            max_count = max(max_count,count); // store the maximum count
        }
        cout << max_count << endl;
    }
}