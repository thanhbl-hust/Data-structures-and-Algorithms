#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generatePermutations(vector<int>& nums) {

    vector<vector<int>> permutations;

    sort(nums.begin(), nums.end());

    while (next_permutation(nums.begin(), nums.end())) permutations.push_back(nums);

    return permutations;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};

    vector<vector<int>> permutations = generatePermutations(nums);
    
    for(int i = 0; i < permutations.size(); i++){
        for(int j = 0; j < permutations[i].size(); j++){
            cout << permutations[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
