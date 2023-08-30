#include<bits/stdc++.h>

//solving knapsack problem using dynamic programming;

using namespace std;

int solving_knapsack_using_dp(int items, int maxWeight, vector<int> profit, vector<int> weight){

    vector<vector<int>> res(items + 1, vector<int> (maxWeight + 1));

    for(int i = 0; i < items + 1; i++){

        for(int w = 0; w < maxWeight + 1; w++){

            if(i == 0 || w == 0){

                res[i][w] = 0;

            }else if(weight[i - 1] <= w){

                res[i][w] = max(res[i - 1][w], profit[i - 1] + res[i - 1][w - weight[i - 1]]);
                //..if a items can be picked many times -> res[i][w] = max(res[i - 1][w], profit[i - 1] + res[i][w - weight[i - 1]]);

            }else res[i][w] = res[i - 1][w];
        }
    }
    return res[items][maxWeight];
}

int main(){

    int items, maxWeight; 
    cin >> items >> maxWeight; 

    vector<int> profit(items); for(int i = 0; i < items; i++) cin >> profit[i];
    vector<int> weight(items); for(int i = 0; i < items; i++) cin >> weight[i];

    int maxValue = solving_knapsack_using_dp(items, maxWeight, profit, weight);

    cout << maxValue;

    return 0;
}