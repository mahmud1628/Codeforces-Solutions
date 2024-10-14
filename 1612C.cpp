#include<bits/stdc++.h>
using namespace std;

# define ll long long int

bool check(ll mid, ll k, ll x) {
    ll total = 0;
    if(mid <= k) {
        total = mid*(mid + 1)/2;
    }
    else {
        total = k * (k + 1) /2;
        mid = (2*k-1) - mid;
        total += k * (k-1) /2 - mid*(mid + 1)/2;
    }
    return total < x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        ll k,x;
        cin >> k >> x;
        ll result;
        ll left = 0, right = 2 * k -1;
        while(left <= right) {
            ll mid = left + (right - left)/2;
            if(check(mid-1,k,x)) {
                result = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        cout << result << '\n';
    }
}