#include<bits/stdc++.h>

using namespace std;

void solve(){
    int length; cin >> length; vector<int> vec(length);
    
    for(int i = 0; i < length; i++) cin >> vec[i];

    //dynamic;
    vector<int> dp(length, 1);

    for(int i = 1; i < length; i++){
        if(vec[i] > vec[i - 1] && dp[i] < dp[i - 1] + 1){
            dp[i] = dp[i - 1] + 1;
            //update value;
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    solve();

    return 0;
}