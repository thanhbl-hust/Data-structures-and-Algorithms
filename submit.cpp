/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/


#include<bits/stdc++.h>
using namespace std;


/*

NEW KNOWLEDGE
0. Read, write to file

    + freopen("input.txt", "r", stdin);
    + freopen("output.txt", "w", stdout);

1. Create a vector

    + A vector contains 10 index have value 0: vector<int> a(10, 0);
    + Vector 2D: vector<vector<int> a(n, vector<int> (m)) -- n child vectors, each vector has m indexs;
    + Reverse a vector: reverse(a.begin(), a.end());

2. DS: Set

    + set doesnt contains 2 indexs have same value;
    + set.insert(value) - add element;
    + set.size() - size of set;

3. Rounded numbers

    + Want to change 1.2345 to 1.23: cout << fixed << setprecision(2) << num;

4. Input string

    + Input string have space: string s; getline(cin, s);
    + cin.ignore();

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
 ;

*/



void solve(){

}

 int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}