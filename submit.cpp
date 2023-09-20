/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

// typedef long long ll;
/*

NEW KNOWLEDGE
0. Read, write to file

    + freopen("input.txt", "r", stdin);
    + freopen("output.txt", "w", stdout);

1. Create a vector

    + A vector contains 10 index have value 0: vector<int> a(10, 0);
    + Vector 2D: vector<vector<int> a(n, vector<int> (m)) -- n child vectors, each vector has m indexs;
    + Reverse a vector: reverse(a.begin(), a.end());
    + Insert an element to a vector:
        + You want to insert an element has a value 10 to position 2.
            <vector_name>.insert(<vector_name>.begin() + 2, value);

    + Delete a value in a vector:
        + You want to delete a[i] from vector<int> a:
            a.erase(a.begin() + i);
        + You want to delete multiple elements (a[1] -> a[4]):
            a.erase(a.begin() + 1, a.begin() + 5);

2. DS: Set

    + set doesnt contains 2 indexs have same value;
    + set.insert(value) - add element;
    + set.size() - size of set;

3. Rounded numbers

    + Want to change 1.2345 to 1.23: cout << fixed << setprecision(2) << num;
    + Also, u can use this for clearly see the number too big;

4. Input string

    + Input string have space: string s; getline(cin, s);
    + cin.ignore();
    + s.substr(i, l):
        - i: first index to take sub string;
        - l: length of string you want substring to be (substring.size() = l);

5. UPPER and LOWER:

    - 5.1. To check a char is upper or lower:
        + check upper: isupper(c);
        + check lower: islower(c);

    - 5.2. Change from normal to lower or upper:
        + to upper: c = toupper(c);
        + to lower: c = tolower(c);

6. ALPHA and DIGIT:
    Check if a char is a alpha || digit:
        + char is a character: isalpha(c);
        + char is a number(dg): isdigit(c);

7. MOVING FROM STRING AND NUM;
    - String to num: 
        + string s = "123";
        + int ss = stoi(s);
        + cout << ss + 1 << endl;    ---124;

    - Num to string:
        + int aa = 5;
        + int bb = to_string(aa);
        + bb += '1';
        + cout << bb;                ----"51";

8. BOARD OF ALL CHARACTER;
    - Create a board;
        + vector<char> c(1, 'a');
        + for(int i = 0; i < 25; i++){
            + char b = c[c.size() - 1] + 1;
            + c.push_back(b);
        + }


9. IF - ELSE STATEMENT
    - Clean code:
        + root:
            if(d % 3 == 0 and d >= 0){
                cout << "YES" << endl;
            }else cout << "NO" << endl;
        + change: cout << (d % 3 == 0 && d >= 0 ? "YES" : "NO") << endl
        (condition -> ? -> :)

*/

// bool find(vector<char> cc, char c){
//     for(int i = 0; i < cc.size(); i++){
//         if(cc[i] == c) return true;
//     }
//     return false;
// }

void solve(){

    // string ss; cin >> ss;
    // vector<char> character = {'A', 'E', 'I', 'O', 'U', 'Y'};
    // int current = -1;
    // int res = 0;
    // for(int i = 0; i < ss.size(); i++){
    //     if(find(character, ss[i]) == true){
    //         if(i != ss.size() - 1){
    //             int distance = i - current;
    //             res = max(res, distance);
    //             current = i;
    //         }else{
    //             int distance = ss.size() - 1 - current;
    //             res = max(res, distance);
    //         }
    //     }else{
    //         if(i == ss.size() - 1){
    //             int distance = ss.size() - current;
    //             res = max(res, distance);
    //         }
    //     }
    // }
    // cout << res;
    // string s; cin >> s;
    // int min = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
    // vector<int> a;
    // a.push_back(24 * 60);
    // a.push_back(1 * 60 + 10);
    // a.push_back(2 * 60 + 20);
    // a.push_back(3 * 60 + 30);
    // a.push_back(4 * 60 + 40);
    // a.push_back(5 * 60 + 50);
    // a.push_back(10 * 60 + 1);
    // a.push_back(11 * 60 + 11);
    // a.push_back(12 * 60 + 21);
    // a.push_back(13 * 60 + 31);
    // a.push_back(14 * 60 + 41);
    // a.push_back(15 * 60 + 51);
    // a.push_back(20 * 60 + 2);
    // a.push_back(21 * 60 + 12);
    // a.push_back(22 * 60 + 22);
    // a.push_back(23 * 60 + 32);
    // sort(a.begin(), a.end());
    // int st = 0;
    // while(a[st] < min) st += 1;
    // if(min == 0){
    //     cout << 0;
    // }else cout << a[st] - min;



}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}