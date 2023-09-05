//dynamicP to solve coin change problem;
//can be used in problem total_analysis;

#include<bits/stdc++.h>

using namespace std;

int coin_change(vector<int> cc, int n, int sum){

    vector<vector<int>> dp(n + 1, vector<int> (sum + 1, 0));

    dp[0][0] = 1;

    for(int i = 1; i < n + 1; i++){
        for(int j = 0; j < sum + 1; j++){

            /*
                dynamic;
            */

            dp[i][j] += dp[i - 1][j];
            if(j - cc[i - 1] >= 0) dp[i][j] += dp[i][j - cc[i - 1]];
        }
    }

    return dp[n][sum];
}

int main(){

    int n, sum; cin >> n >> sum;

    vector<int> cc(n); for(int i = 0; i < n; i++) cin >> cc[i];

    cout << coin_change(cc, n, sum) << endl;
    
    return 0;
}