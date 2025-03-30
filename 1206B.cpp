#include<bits/stdc++.h>
using namespace std;
int  main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i=0;i<n;i++) cin >> a[i];

    long long steps = 0,neg = 0,zeros = 0;

    for(long long i : a) {
        if( i > 0) steps += (i - 1); // for positive numbers,simply make them 1.
        else if(i == 0) zeros++; // count the number of zeros
        else {
            steps += abs(i + 1); // for negative numbers , make them -1
            neg++; // count the negative numebers
        }
    }
    if(neg % 2 != 0) { // if the count of negative numbers is odd, then we hae odd numbers of -1 now
        if(zeros == 0) // if there are no zeros in the array, then we need to convert one -1 to +1, that will cost 2 steps
            steps += 2;
        // if there are zeros, then we can make one zero to -1, then we will have even numbers of -1s, this will cost 1 step.
    }
    steps += zeros; // converting 0 to +1 or -1 takes 1 step.
    
    cout << steps << endl;
}