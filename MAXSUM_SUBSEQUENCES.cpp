#include<bits/stdc++.h>

using namespace std;

/*
max_sum: final value;
maxi: max sum from (a[0], a[1]..., a[i]);
*/

int max_sub(vector<int> a){

    int length = a.size(), max_sum = INT_MIN, maxi = 0;

    for(int i = 0; i < length; i++){

        maxi = maxi + a[i];
        if(max_sum < maxi) max_sum = maxi; //update maxsum;
        if(maxi < 0) maxi = 0; 
    }

    return max_sum;
}

int main(){

    //input; 
    int length; cin >> length; vector<int> a(length);

    for(int i = 0; i < length; i++) cin >> a[i];

    cout << max_sub(a) << endl;

    return 0;
}