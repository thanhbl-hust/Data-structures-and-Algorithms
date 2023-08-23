//longest palindrome subsequence substring using greedy;

#include<bits/stdc++.h>

using namespace std;

bool check(string inp){

    int l = 0, r = inp.size() - 1;

    while(l <= r){
        if(inp[l] != inp[r]) return false;
        l += 1;
        r -= 1;
    }
    return true;
}

void solve(){

    bool found = false;

    string s; cin >> s;

    int max_length = s.size(); //longest string that can be a palindrome;

    while(max_length > 1){

        for(int i = 0; i < s.size() - max_length + 1; i++){
            string res = s.substr(i, max_length);
            if(check(res)){

                found = true; //find a palindrome has length > 1;
                cout << max_length << endl;
                break;

            }
        }

        if(found == true) break;

        max_length -= 1;
    }
    if(!found) cout << 1 << endl;
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    solve();

    return 0;
}