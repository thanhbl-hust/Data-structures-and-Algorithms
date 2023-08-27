#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generateSubsets(vector<int>& arr) {
    int n = arr.size(); vector<vector<int>> subsets;
    
    for (int i = 0; i < pow(2, n); ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<vector<int>> subsets = generateSubsets(arr);

    cout << "Number of subsets: " << subsets.size() << endl;

    for(int i = 0; i < subsets.size(); i++){
        cout << "Subsets " << i + 1 << ": ";
        for(int j = 0; j < subsets[i].size(); j++){
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}