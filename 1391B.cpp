#include<bits/stdc++.h>
using namespace std;

int main( ) {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<string> belt(n);
        for(int i=0;i<n;i++) 
                cin >> belt[i];
        
        int minChange = 0;

        for(int i=0;i<n;i++)
            if(belt[i][m-1] == 'R') minChange++;
        
        for(int i=0;i<m;i++)
            if(belt[n-1][i] == 'D') minChange++;
        
        cout << minChange << endl;
    }
}