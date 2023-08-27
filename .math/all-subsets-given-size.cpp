#include<bits/stdc++.h>

using namespace std;

void generateSubsetsOfLength(vector<int>& nums, int k, int start, vector<int>& currentSubset, vector<vector<int>>& subsets) {
    if (currentSubset.size() == k) {
        subsets.push_back(currentSubset);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);
        generateSubsetsOfLength(nums, k, i + 1, currentSubset, subsets);
        currentSubset.pop_back();
    }
}

vector<vector<int>> generateSubsetsWithGivenLength(vector<int>& nums, int k) {
    vector<vector<int>> subsets;
    vector<int> currentSubset;
    generateSubsetsOfLength(nums, k, 0, currentSubset, subsets);
    return subsets;
}

int main() {
    int length; cin >> length; vector<int> nums(length);

    for(int i = 0; i < length; i++) nums[i] = i + 1;

    int given_size; cin >> given_size;
    
    vector<vector<int>> subsets = generateSubsetsWithGivenLength(nums, given_size);

    cout << "Number of subsets have length (" << given_size << "): " << subsets.size() << endl;

    cout << "Given size: " << given_size << endl;
    
    for(int i = 0; i < subsets.size(); i++){
        for(int j = 0; j < subsets[i].size(); j++){
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
