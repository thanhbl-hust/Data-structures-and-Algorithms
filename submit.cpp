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

// bool check(vector<int> a){
//     sort(a.begin(), a.end());
//     for(int i = 1; i < a.size(); i++){
//         int res = a[i] - a[i - 1];
//         if(res % 2 == 1) return false;
//     }
//     return true;
// }
// void show(vector<vector<int>> res){
//     int st = 1;
//     bool found = false;
//     while(st < res[0].size()){
//         if(res[0][st] != 0 and res[1][st] != 0){
//             found = true;
//             cout << "YES" << endl;
//             cout << 1 << " " << st << endl;
//             break;
//         }
//         st += 1;
//     }
//     if(found == false) cout << "NO" << endl;
// }

void solve(){

    // int t; cin >> t;
    // while(t--){
    //     int n, m; cin >> n >> m;
    //     int a[n], b[m];
    //     for(int i = 0; i < n; i++) cin >> a[i];
    //     for(int i = 0; i < m; i++) cin >> b[i];
    //     vector<vector<int>> count(2, vector<int> (1005, 0));
    //     for(int i = 0; i < n; i++) count[0][a[i]] += 1;
    //     for(int i = 0; i < m; i++) count[1][b[i]] += 1;
    //     show(count);
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length;
    //     vector<int> a(length);
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     cout << (check(a) == true ? "YES" : "NO")  << endl;
    // }
}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}