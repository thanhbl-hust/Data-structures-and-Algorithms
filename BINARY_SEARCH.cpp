//divide conquer
#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int index, int l, int r){
    if(l <= r){
        int mid = (l + r) / 2;

        if(arr[mid] == index) return mid;

        if(arr[mid] > index) return binarySearch(arr, index, l, mid - 1); //check left

        return binarySearch(arr, index, mid + 1, r); //check right;
    }
    return -1;
}

int main(){

    int length; cin >> length; vector<int> arr(length);

    for(int i = 0; i < length; i++) cin >> arr[i]; 

    int index; cin >> index;

    int find = binarySearch(arr, index, 0, length - 1);

    cout << (find == -1 ? "NO" : "YES") << endl;
    return 0;
}