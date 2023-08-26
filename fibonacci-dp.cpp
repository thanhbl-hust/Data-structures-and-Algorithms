#include<bits/stdc++.h>

using namespace std;

long long fibonacci_dp(int n){
    /*
    using a vector to save (1-n) fibo elements;
    fibo1 = dp[0];
    fibo2 = dp[1];
    -> fibon = dp[n - 1];
    */
    vector<long long> dp(2, 1);
    
    if(n < 3) return 1;
    for(int i = 2; i < n; i++) dp.push_back(dp[i - 1] + dp[i - 2]);
    return dp[dp.size() - 1];
}

long long fibonacci_recursive(int n){

    //fibonacci(1) = 1;
    //fibonacci(2) = 1;
    //               2;
    //               3;

    if(n == 1 || n == 2) return 1;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main(){
    int n; cin >> n;

    //cout << "Fibonacci using recursive: " << fibonacci_recursive(n) << endl;

    cout << "Fibonacci using DP: " << fibonacci_dp(n) << endl;

    return 0;
}