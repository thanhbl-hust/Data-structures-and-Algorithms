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
 ;

*/

// int noz(int n){
//     vector<int> a; int res = 0;
//     while(n != 0){
//         if(n % 10 != 0){
//             a.push_back(n % 10);
//         }
//         n /= 10;
//     }
//     reverse(a.begin(), a.end());
//     for(int i = 0; i < a.size(); i++) res = 10 * res + a[i];
//     return res;
// }
// bool check(vector<int> a){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] != 1 and a[i] != 4) return false;
//     }
//     return true;
// }
// bool check(int x, int y){
//     if(x == 1 and y == 1) return true;
//     return false;
// }
// int find(char c, vector<char> bc){
//     for(int i = 0; i < bc.size(); i++){
//         if(bc[i] == c) return i + 1;
//     }
//     return -1;
// }
// int found(char c, vector<char> cc){
//     for(int i = 0; i < cc.size(); i++){
//         if(cc[i] == c) return i;
//     }
//     return -1;
// }
// bool check(string s, int length, vector<char> board){
//     vector<int> dp(26, -1);
//     for(int i = 0; i < length; i++){
//         int index = found(s[i], board);
//         if(dp[index] == -1){
//             dp[index] = i;
//         }else{
//             if(dp[index] == i - 1){
//                 dp[index] += 1;
//             }else return false;
//         }
//     }
//     return true;
// }
// int optimize(int n){
//     n *= -1;
//     //-165 -> 165(min so nay) = 15;
//     int o1 = n, o2 = n;
//     o1 /= 10;
//     int du = o2 % 10;
//     o2 = (o2 - du) / 10; //o2 = 16;
//     o2 -= o2 % 10;
//     o2 += du;
//     return -1 * min(o1, o2);
// }
// int len(int n){
//     int count = 0;
//     while(n != 0){
//         n /= 10; count += 1;
//     }
//     return count;
// }
// bool check(vector<int> a, int index){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] == index) return true;
//     }
//     return false;
// }
// int change(int root, int length, string s){
//     string nw = "";
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == 'U'){
//             nw += 'D';
//         }else nw += 'U';
//     }
//     for(int i = 0; i < nw.size(); i++){
//         if(nw[i] == 'U'){
//             if(root != 9){
//                 root += 1;
//             }else root = 0;
//         }else{
//             if(root != 0){
//                 root -= 1;
//             }else root = 9;
//         }
//     }
//     return root;
// }
// int change(char c){
//     if(c == '0') return 0;
//     if(c == '1') return 1;
//     if(c == '2') return 2;
//     if(c == '3') return 3;
//     if(c == '4') return 4;
//     if(c == '5') return 5;
//     if(c == '6') return 6;
//     if(c == '7') return 7;
//     if(c == '8') return 8;
//     if(c == '9') return 9;
//     return -1;
// }
// string change(string ss){
//     int sum = 0;
//     for(int i = 0; i < ss.size(); i++){
//         sum += change(ss[i]);
//     }
//     return to_string(sum);
// }
// bool check(vector<int> a){
//     for(int i = 0; i < a.size() - 1; i++){
//         if(a[i] > a[i + 1]) return true;
//     }
//     return false;
// }
// bool find(char c, char cc[6]){
//     for(int i = 0; i < 6; i++){
//         if(cc[i] == c) return true;
//     }
//     return false;
// }
// bool check(string s){
//     char cc[6] = {'a', 'e', 'o', 'u', 'i', 'y'};
//     for(int i = 0; i < s.size() - 1; i++){
//         if(find(s[i], cc) == true and find(s[i + 1], cc) == true) return false;
//     }
//     return true;
// }
// int find(vector<int> a, int index){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] == index) return true;
//     }
//     return false;
// }
// string repl(string s){
//     char cc[6] = {'a', 'e', 'o', 'u', 'i', 'y'};
//     string a = ""; int st = 0;
//     while(st < s.size()){
//         if(find(s[st], cc) == true and find(s[st + 1], cc) == true){
//             a += s[st];
//             st += 2;
//         }else{
//             a += s[st];
//             st += 1;
//         }
//     }
//     if(check(a) == true) return a;
//     return repl(a);
// }
// bool check(vector<string> cc, int index){
//     for(int i = 0; i < index; i++){
//         if(cc[i] == cc[index]) return true;
//     }
//     return false;
// }
// int find(char c, vector<char> ls){
//     for(int i = 0; i < 26; i++){
//         if(ls[i] == c) return i;
//     }
//     return -1;
// }
// int count(int a[], int t, int j){
//     int s = 0;
//     for(int i = 0; i < t; i++){
//         if(i != j and a[i] > a[j]) s += 1;
//     }
//     return s;
// }
// bool check(int n){
//     if(n == 1) return true;
//     if(n == 2) return false;
//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0) return true;
//     }
//     return false;
// }
// int change(int root, int length, string s){
//     string nw = "";
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == 'U'){
//             nw += 'D';
//         }else nw += 'U';
//     }
//     for(int i = 0; i < nw.size(); i++){
//         if(nw[i] == 'U'){
//             if(root != 9){
//                 root += 1;
//             }else root = 0;
//         }else{
//             if(root != 0){
//                 root -= 1;
//             }else root = 9;
//         }
//     }
//     return root;
// }
// bool check(int n){
//     if(n == 1) return false;
//     if(n == 2) return true;
//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// bool find(char cc, char c[6]){
//     for(int i = 0; i < 6; i++){
//         if(c[i] == cc) return true;
//     }
//     return false;
// }
// bool check(int index, vector<int> a){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] == index) return true;
//     }
//     return false;
// }
// bool check(string s){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] != 'Y' and s[i] != 'e' and s[i] != 's') return false;
//     }
//     return true;
// }
// int cc(char c){
//     if(c == '1') return 1;
//     if(c == '2') return 2;
//     if(c == '3') return 3;
//     return -1;
// }
// int solution(vector<int> a){
// 	sort(a.begin(), a.end());
// 	int i = 0;
// 	int count = 0;
// 	int length = a.size();
// 	while(i < length - 2){
// 		if((a[i] == a[i + 1]) and (a[i + 1] == a[i + 2])){
// 			count += 1;
// 			return a[i];
// 			break;
// 		}else{
// 			i += 1;
// 		}
// 	}
// 	if(count == 0){
// 		return -1;
// 	}
// }
// string madeString(string s, int st, int en){
//     string a = "";
//     for(int i = st; i < en; i++) a += s[i];
//     return a;
// }
// int change(char c){
//     if(c == '0') return 0;
//     if(c == '1') return 1;
//     if(c == '2') return 2;
//     if(c == '3') return 3;
//     if(c == '4') return 4;
//     if(c == '5') return 5;
//     if(c == '6') return 6;
//     if(c == '7') return 7;
//     if(c == '8') return 8;
//     if(c == '9') return 9;
//     return -1;
// }
// bool check(string s){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] != '4' && s[i] != '7') return false;
//     }
//     return true;
// }
// bool found(char a[5], char c){
//     for(int i = 0; i < 5; i++){
//         if(a[i] == c) return true;
//     }
//     return false;
// }
// int coor(vector<int> a){
//     int st = 1;
//     while(st < a.size()){
//         if(a[st] == 0) return st - 1;
//         st += 1;
//     }
//     return -1;
// }
// int count(string s, string ss){
//     int cnt = 0;
//     int length = ss.size();
//     for(int i = 0; i < s.size() - length + 1; i++){
//         string sss = s.substr(i, length);
//         if(ss == sss) cnt += 1;
//     }
//     return cnt;
// }
// bool check(int n){
//     set<int> s; int count = 0;
//     while(n != 0){
//         s.insert(n % 10);
//         n /= 10;
//         count += 1;
//     }
//     if(s.size() == count) return true;
//     return false;
// }
// int solve(int l, int r){
//     for(int i = l; i < r + 1; i++){
//         if(check(i)) return i;
//     }
//     return -1;
// }
// string madeString(string s, int st, int en){
//     string a = "";
//     for(int i = st; i < en; i++) a += s[i];
//     return a;
// }
// bool palind(string s){
//     int l = 0;
//     int r = s.size() - 1;
//     while(l < r){
//         if(s[l] != s[r]) return false;
//         l += 1;
//         r -= 1;
//     }
//     return true;
// }
// bool check(string s, char c){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == c) return true;
//     }
//     return false;
// }
// bool check(string s){
//     for(int i = 2; i < s.size() + 1; i++){
//         for(int j = 0; j < s.size() - i + 1; j++){
//             string a = madeString(s, j, j + i);
//             if(palind(a)){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// bool check(vector<int> s, int index){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == index) return true;
//     }
//     return false;
// }
// void solve(){
//     int n, a, b, c, distance = 0; cin >> n >> a >> b >> c;
// 	// int distance = 0;
// 	//rabbit - owl = a;
// 	//rabbit - eagl = b;
// 	//owl - eagle = c;
// 	//rabbit = 1;
// 	//owl = 2;
// 	//eagle = 3;
// 	if(n == 1) cout << 0 << endl;
// 	else{
//         int start = 1, location = 1;
// 	    while(start < n){
// 		    if(location == 1){
// 			    distance += min(a, b);
// 			    if(a <= b){
// 				    location = 2;
// 			    }else location = 3;
// 		    }else if(location == 2){
// 			    distance += min(a, c);
// 			    if(a <= c){
// 				    location = 1;
// 			    }else location = 3;
// 		    }else{
// 			    distance += min(b, c);
// 			    if(b <= c){
// 				    location = 1;
// 			    }else location = 2;
// 		    }
// 		    start += 1;
// 	    }
// 	    cout << distance;
//     }
// }
// int sml(int n){
//     for(int i = n; i > 0; i--){
//         if(n % i == 0 and 100 % i == 0) return i;
//     }
//     return -1;
// }
// int change(char c){
//      if(c == '0') return 0;
//      if(c == '1') return 1;
//      if(c == '2') return 2;
//      if(c == '3') return 3;
//      if(c == '4') return 4;
//      if(c == '5') return 5;
//      if(c == '6') return 6;
//      if(c == '7') return 7;
//      if(c == '8') return 8;
//      if(c == '9') return 9;
//      return -1;
//  }
// int find(vector<string> s, string ss, int en){
//     for(int i = en - 1; i > -1; i--){
//         if(s[i] == ss) return i;
//     }
//     return -1;
// }
// int index;
// int find(string s, int st, int en, char c){
//     for(int i = st; i < en; i++){
//         if(s[i] == c) return i;
//     }
//     return -1;
// }
// int sum(int n){
//     int s = 0;
//     while(n != 0){
//         s += n % 10;
//         n /= 10;
//     }
//     return s;
// }
// bool find(vector<int> a, int index){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] == index) return true;
//     }
//     return false;
// }
// bool check(string a, string b){
//     int l = 0;
//     while(l < a.size()){
//         if(a[l] != b[a.size() - 1 - l]){
//             return false;
//         }
//         l += 1;
//     }
//     return true;
// }
// void run(){
    // int t; cin >> t;
    // if(t % 2 == 0 and t > 2){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int count = 0;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int c = 0;
    //     for(int j = 0; j < 3; j++){
    //         cin >> index;
    //         if(index == 1) c += 1;
    //     }
    //     if(c > 1) count += 1;
    // }
    // cout << count;
    // int count = 0, n, k; cin >> n >> k; int a[100];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int pv = a[k - 1];
    // for(int i = 0; i < n; i++){
    //     if(a[i] >= pv and a[i] != 0){
    //         count += 1;
    //     }
    // }
    // cout << count;
    // int n; cin >> n; int a[100]; int sum = 0, ur = 0;
    // for(int i = 0; i < n; i++){
    //     cin >> a[i]; sum += a[i];
    // }
    // sort(a, a + n); int count = 0;
    // while(ur <= sum){
    //     ur += a[n - 1 - count];
    //     sum -= a[n - 1 - count];
    //     count += 1;
    // }
    // cout << count;
    // int count = 1; int t; cin >> t; string a[t];
    // for(int i = 0; i < t; i++){
    //     cin >> a[i];
    // }
    // for(int i = 1; i < t; i++){
    //     if(a[i][0] == a[i - 1][1]){
    //         count += 1;
    //     }
    // }
    // cout << count;
    // vector<int> a;
    // a.push_back(4); a.push_back(7); a.push_back(44); a.push_back(47);
    // a.push_back(74); a.push_back(77); a.push_back(444); a.push_back(447);
    // a.push_back(474); a.push_back(477); a.push_back(744); a.push_back(747);
    // a.push_back(774); a.push_back(777);
    // int t; cin >> t; bool f = false;
    // for(int i = 0; i < a.size(); i++){
    //     if(t % a[i] == 0){
    //         f = true;
    //         cout << "YES" << endl;
    //         break;
    //     }
    // }
    // if(f == 0) cout << "NO" << endl;
    // string s1, s2; cin >> s1 >> s2;
    // if(check(s1, s2)){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // string s; cin >> s; string a = "";
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o'){
    //         a += s[i];
    //     }
    // }
    // bool found = false;
    // for(int i = 0; i < a.size(); i++){
    //     if(a[i] == 'h'){
    //         for(int j = i + 1; j < a.size(); j++){
    //             if(a[j] == 'e'){
    //                 for(int k = j + 1; k < a.size(); k++){
    //                     if(a[k] == 'l'){
    //                         for(int l = k + 1; l < a.size(); l++){
    //                             if(a[l] == 'l'){
    //                                 for(int m = l + 1; m < a.size(); m++){
    //                                     if(a[m] == 'o'){
    //                                         cout << "YES" << endl;
    //                                         found = true;
    //                                         break;
    //                                     }
    //                                 }
    //                             }
    //                             if(found == true) break;
    //                         }
    //                     }
    //                     if(found == true) break;
    //                 }
    //             }
    //             if(found == true) break;
    //         }
    //     }
    //     if(found == true) break;
    // }
    // if(found == false) cout << "NO" << endl;
    // string s; cin >> s; bool found = false; vector<int> dp(s.size(), 1);
    // for(int i = 1; i < s.size(); i++){
    //     if(s[i] == s[i - 1]){
    //         dp[i] = dp[i - 1] + 1;
    //         if(dp[i] > 6){
    //             found = true;
    //             cout << "YES" << endl;
    //             break;
    //         }
    //     }
    // }
    // if(found == false) cout << "NO" << endl;
    // int a, b, c; cin >> a >> b >> c;
    // int s1 = a + b + c;
    // int s2 = a + b * c;
    // int s3 = a * b + c;
    // int s4 = a * b * c;
    // int s5 = (a + b) * c;
    // int s6 = a * (b + c);
    // cout << max(s1, max(s2, max(s3, max(s4, max(s5, s6)))));
    // int t; cin >> t; float sum = 0;
    // for(int i = 0; i < t; i++){
    //     float index; cin >> index; sum += index;
    // }
    // cout << fixed << setprecision(7) << sum / t << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     string s; cin >> s;
    //     if(s.size() > 10){
    //         cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    //     }else cout << s << endl;
    // }
    // int s1 = 0, s2 = 0, s3 = 0, s4 = 0; int t, index, count = 0; cin >> t;
    // for(int i = 0; i < t; i++){
    //     cin >> index;
    //     if(index == 1) s1 += 1;
    //     if(index == 2) s2 += 1;
    //     if(index == 3) s3 += 1;
    //     if(index == 4) s4 += 1;
    // }
    // int du = 0; count += s4; count += s3;
    // du += s3;
    // if(s2 % 2 == 0){
    //     count += s2 / 2;
    // }else{
    //     count += (s2 - 1) / 2;
    //     count += 1;
    //     du += 2;
    // }
    // if(du <= s1){
    //     s1 -= du;
    //     if(s1 > 0){
    //         if(s1 % 4 != 0){
    //             count += (s1 / 4) + 1;
    //         }else count += s1 / 4;
    //     }
    // }
    // cout << count;
    // vector<int> a; int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // sort(a.begin(), a.end());
    // for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    // string s1, s2; cin >> s1 >> s2;
    // for(int i = 0; i < s1.size(); i++){
    //     if(s1[i] != s2[i]){
    //         cout << '1';
    //     }else cout << '0';
    // }
    // string l = "I hate "; string r = "I love "; int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     if(i % 2 == 0){
    //         cout << l;
    //     }else cout << r;
    //     if(i != t - 1){
    //         cout << "that ";
    //     }else cout << "it";
    // }
    // long long t; cin >> t;
    // if(t % 2 == 0){
    //     cout << t / 2 << endl;
    // }else cout << -1*(t / 2) - 1 << endl;
    // int t; cin >> t; int a[t][3]; int st = 0;
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // while(st < 3){
    //     int sum = 0;
    //     for(int i = 0; i < t; i++){
    //         sum += a[i][st];
    //     }
    //     if(sum != 0){
    //         cout << "NO" << endl; break;
    //     }
    //     st += 1;
    // }
    // if(st == 3) cout << "YES";
    // int key = 0; string n; cin >> n;
    // for(int i = 0; i < n.size(); i++){
    //     if((n[i] == 'H') or (n[i] == 'Q') or(n[i]== '9')){
    //         key += 1;
    //         cout << "YES";
    //         break;
    //     }
    // }
    // if(key == 0){
    //     cout << "NO";
    // }
    // int s, n; cin >> s >> n; vector<vector<int>> a(n, vector<int> (2));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n - i - 1; j++){
    //         if(a[j][0] > a[j + 1][0]){
    //             vector<int> tmp = a[j];
    //             a[j] = a[j + 1];
    //             a[j + 1] = tmp;
    //         }
    //     }
    // }
    // int t = 0;
    // bool pos = true;
    // while(t < n){
    //     if(s <= a[t][0]){
    //         pos = false;
    //         cout << "NO" << endl;
    //         break;
    //     }
    //     t += 1;
    //     s += a[t - 1][1];
    // }
    // if(pos == true) cout << "YES" << endl;
    // set<int> s;
    // for(int i = 0; i < 4; i++){
    //     int index; cin >> index; s.insert(index);
    // }
    // cout << 4 - s.size() << endl;
    // int t; cin >> t;
    // while(t--){
    //     bool found = false;
    //     int length; cin >> length;
    //     int a[length];
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     sort(a, a + length);
    //     for(int i = 1; i < length; i++){
    //         if(a[i] - a[i - 1] > 1){
    //             cout << "NO" << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == false) cout << "YES" << endl;
    // }
    // int n, a, b, c, maxValue = 0;;
    // cin >> n >> a >> b >> c;
    // for(int i = 0; a * i <= n; i++){
    //     for(int j = 0; a * i + b * j <= n; j++){
    //         int left = n - a*i - b*j;
    //         if(left % c == 0){
    //             if(i + j + left / c > maxValue) maxValue = i + j + left / c;
    //         }
    //     }
    // }
    // cout << maxValue;
    // int a[3];
    // for(int i = 0; i < 3; i++) cin >> a[i];
    // sort(a, a + 3);
    // cout << a[2] - a[0];
    // int t; cin >> t; int a[t]; int cop = 0, lost = 0;
    // for(int i = 0; i < t; i++){
    //     cin >> a[i];
    //     if(a[i] != -1) cop += a[i];
    //     else{
    //         if(cop > 0){
    //             cop -= 1;
    //         }else lost += 1;
    //     }
    // }
    // cout << lost << endl;
    // int t; cin >> t; vector<int> dp(t, 1);
    // int a[t];
    // for(int i = 0; i < t; i++) cin >> a[i];
    // for(int i = 1; i < t; i++){
    //     if(a[i] >= a[i - 1]){
    //         dp[i] = dp[i - 1] + 1;
    //     }
    // }
    // cout << *max_element(dp.begin(), dp.end());
    // int t; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b;
    //     int aa = abs(a - b);
    //     if(aa % 10 == 0){
    //         cout << aa / 10 << endl;
    //     }else cout << aa / 10 + 1 << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length, count = 0; string s; cin >> length >> s;
    //     for(int i = 0; i < length; i++){
    //         count += change(s[i]);
    //         if(s[i] != '0' and i != length - 1){
    //             count += 1;
    //         }
    //     }
    //     cout << count << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index;
    //     int c = sml(index);
    //     cout << 100 / c << endl;
    // }
    // float a, b, c, d; cin >> a >> b >> c >> d;
    // float res = (b - a) / (c + d);
    // cout << fixed << setprecision(10) << res << endl;
    //solve();
    // int a, b; cin >> a >> b;
    // int count = 1;
    // while(1){
    //     if((a * count) % 10 == b || (a * count) % 10 == 0) break;
    //     count += 1;
    // }
    // cout << count << endl;
    // string s; getline(cin, s);
    // set<char> c;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] != '{' && s[i] != ' ' && s[i] != '}' && s[i] != ','){
    //         //cout << s[i] << " ";
    //         c.insert(s[i]);
    //     }
    // }
    // cout << c.size() << endl;
    // int n; cin >> n; int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int x1 = a[0] % 2, x2 = a[1] % 2;
    // if(x1 != x2){
    //     int cc = a[2] % 2;
    //     if(cc == x1){
    //         cout << 2 << endl;
    //     }else cout << 1 << endl;
    // }else{
    //     //x1 == x2;
    //     int st = 2;
    //     while(st < n){
    //         if(a[st] % 2 != x1) break;
    //         st += 1;
    //     }
    //     cout << st + 1;
    // }
    // int n; cin >> n; set<int> s;
    // int n1; cin >> n1;
    // for(int i = 0; i < n1; i++){
    //     int index; cin >> index; s.insert(index);
    // }
    // int n2; cin >> n2;
    // for(int i = 0; i < n2; i++){
    //     int index; cin >> index; s.insert(index);
    // }
    // if(s.size() == n){
    //     cout << "I become the guy." << endl;
    // }else cout << "Oh, my keyboard!" << endl;
    // int a, b; cin >> a >> b;
    // cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
    // int t; cin >> t;
    // while(t--){
    //     int a, b, c; cin >> a >> b >> c;
    //     int t1 = a - 1; int t2 = abs(c - b) + abs(c - 1);
    //     if(t1 == t2){
    //         cout << 3 << endl;
    //     }else{
    //         if(t1 < t2){
    //             cout << 1 << endl;
    //         }else cout << 2 << endl;
    //     }
    // }
    // int n, k; cin >> n >> k; int left = 240 - k;
    // int count = 0;
    // while(left >= (count + 1) * 5 and count <= n){
    //     count += 1;
    //     left -= count * 5;
    // }
    // if(count > n) count -= 1; cout << count;
    // int t, count = 0; cin >> t;
    // int index; cin >> index; int minVal = index, maxVal = index;
    // for(int i = 1; i < t; i++){
    //     cin >> index;
    //     if(index < minVal){
    //         minVal = index; count += 1;
    //     }
    //     if(index > maxVal){
    //         maxVal = index; count += 1;
    //     }
    // }
    // cout << count;
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     if((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 's' || s[2] == 'S')){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int h, min; cin >> h >> min;
    //     cout << 24 * 60 - min - h * 60 << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int a[4], count = 0;
    //     for(int i = 0; i < 4; i++){
    //         cin >> a[i];
    //         if(i != 0 and a[i] > a[0]) count += 1;
    //     }
    //     cout << count << endl;
    // }
    // int n; cin >> n; vector<vector<int>> a(n, vector<int> (n));
    // for(int i = 0; i < n; i++){
    //     a[i][0] = 1;
    //     a[0][i] = 1;
    // }
    // if(n > 1){
    //     for(int i = 1; i < n; i++){
    //         for(int j = 1; j < n; j++){
    //             a[i][j] = a[i - 1][j] + a[i][j - 1];
    //         }
    //     }
    // }
    // cout << a[n - 1][n - 1] << endl;
    // int t; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b;
    //     int cc = (a * b) % 2;
    //     if(cc == 0){
    //         cout << (a * b) / 2 << endl;
    //     }else cout << (a * b) / 2 + 1 << endl;
    // }
    // vector<long long> or_number;
    // for(int i = 1; i < 10; i++){
    //     for(int j = 1; j < 11; j++){
    //         int length = j;
    //         long long num = i;
    //         for(int k = 1; k < length; k++){
    //             num = num * 10 + i;
    //         }
    //         or_number.push_back(num);
    //     }
    // }
    // //cout << or_number.size() << endl;
    // int t; cin >> t;
    // while(t--){
    //     int index, count = 0; cin >> index;
    //     for(int i = 0; i < or_number.size(); i++){
    //         if(or_number[i] <= index) count += 1;
    //     }
    //     cout << count << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length, index, sum = 0; cin >> length;
    //     for(int i = 0; i < length; i++){
    //         cin >> index; sum += index;
    //     }
    //     if(sum % length == 0){
    //         cout << sum / length << endl;
    //     }else cout << sum / length + 1 << endl;
    // }
    // int count = 0;
    // string s; cin >> s;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == 'Q'){
    //         for(int j = i + 1; j < s.size(); j++){
    //             if(s[j] == 'A'){
    //                 for(int k = j + 1; k < s.size(); k++){
    //                     if(s[k] == 'Q'){
    //                         count += 1;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << count;
    // int length; string s; cin >> length >> s;
    // int z = 0;
    // int n = 0;
    // for(int i = 0; i < length; i++){
    //     if(s[i] == 'z'){
    //         z += 1;
    //     }else if(s[i] == 'n'){
    //         n += 1;
    //     }
    // }
    // for(int i = 0; i < n; i++) cout << 1 << " ";
    // for(int i = 0; i < z; i++) cout << 0 << " ";
    // int t, a[3]; cin >> t;
    // while(t--){
    //     for(int i = 0; i < 3; i++) cin >> a[i];
    //     sort(a, a + 3);
    //     if(a[0] < a[1] && a[1] < a[2]){
    //         if(a[2] == a[0] + a[1]){
    //             cout << "YES" << endl;
    //         }else cout << "NO" << endl;
    //     }else{
    //         if(a[0] == a[1] and a[1] < a[2]){
    //             if(a[2] % 2 == 0){
    //                 cout << "YES" << endl;
    //             }else cout << "NO" << endl;
    //         }else if(a[0] < a[1] and a[1] == a[2]){
    //             if(a[0] % 2 == 0){
    //                 cout << "YES" << endl;
    //             }else cout << "NO" << endl;
    //         }else if(a[0] == a[1] and a[1] == a[2]){
    //             if(a[1] % 2 == 0){
    //                 cout << "YES" << endl;
    //             }else cout << "NO" << endl;
    //         }
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length, sum = 0; cin >> length; int a[length];
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     sort(a, a + length);
    //     int minVal = a[0];
    //     for(int i = 1; i < length; i++){
    //         sum += a[i] - minVal;
    //     }
    //     cout << sum << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     if(check(s)){
    //         cout << "NO" << endl;
    //     }else cout << "YES" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     long long a, b, c, d; cin >> a >> b >> c >> d;
    //     if(a % b == 0 || a % c == 0 || a % d == 0){
    //         cout << 0 << endl;
    //     }else{
    //         if(b < a){
    //             b = b * ((a / b) + 1);
    //         }
    //         if(c < a){
    //             c = c * ((a / c) + 1);
    //         }
    //         if(d < a){
    //             d = d * ((a / d) + 1);
    //         }
    //         cout << min(b - a, min(c - a, d - a)) << endl;
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int n, k; cin >> n >> k; int a[2][n];
    //     for(int i = 0; i < 2; i++){
    //         for(int j = 0; j < n; j++){
    //             cin >> a[i][j];
    //         }
    //     }
    //     //sorting;
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < n - i - 1; j++){
    //             if(a[0][j] > a[0][j + 1]){
    //                 int tmp = a[0][j];
    //                 a[0][j] = a[0][j + 1];
    //                 a[0][j + 1] = tmp;
    //                 tmp = a[1][j];
    //                 a[1][j] = a[1][j + 1];
    //                 a[1][j + 1] = tmp;
    //             }
    //         }
    //     }
    //     int start = 0;
    //     while(start < n){
    //         if(k < a[0][start]) break;
    //         k += a[1][start];
    //         start += 1;
    //     }
    //     cout << k << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     vector<int> coor;
    //     int maxVal = 0;
    //     string s; cin >> s;
    //     for(int i = 0; i < s.size(); i++){
    //         if(s[i] == '1') coor.push_back(i);
    //     }
    //     if(coor.size() < 2) cout << 0 << endl;
    //     else{
    //         for(int i = 1; i < coor.size(); i++) maxVal += coor[i] - coor[i - 1] - 1;
    //         cout << maxVal << endl;
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index;
    //     if(index % 10 == 9) index += 1;
    //     cout << index / 10 << endl;
    // }
    // int t; cin >> t; cout << 9 * t << " " << 8 * t << endl;
    // int l, r; cin >> l >> r;
    // cout << solve(l, r) << endl;
    // int t; cin >> t;
    // while(t--){
    //     int count = 0;
    //     int n, c; cin >> n >> c;
    //     vector<int> a(101, 0);
    //     for(int i = 0; i < n; i++){
    //         int index; cin >> index; a[index] += 1;
    //     }
    //     for(int i = 0; i < 101; i++){
    //         count += min(a[i], c);
    //     }
    //     cout << count << endl;
    // }
    // int s, v1, v2, t1, t2; cin >> s >> v1 >> v2 >> t1 >> t2;
    // int s1 = s * v1 + 2 * t1, s2 = s * v2 + 2 * t2;
    // if(s1 < s2){
    //     cout << "First";
    // }else if(s1 == s2){
    //     cout << "Friendship";
    // }else cout << "Second";
    // int length; string s; cin >> length >> s;
    // int count = 0;
    // char ev[5] = {'0', '2', '4', '6', '8'};
    // for(int i = 0; i < length; i++){
    //     if(found(ev, s[i])) count += i + 1;
    // }
    // cout << count << endl;
    // int a[3]; for(int i = 0; i < 3; i++) cin >> a[i];
    // sort(a, a + 3);
    // if(a[0] + a[1] > a[2]){
    //     cout << 0 << endl;
    // }else cout << a[2] - a[1] - a[0] + 1 << endl;
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index;
    //     for(int i = 10; i < 10 + index; i++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    // int t, maxVal = 0; cin >> t;
    // vector<int> a;
    // vector<int> dp(t, 0);
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    //     if(index == 1) dp[i] = 1;
    // }
    // for(int i = 1; i < t; i++){
    //     if(a[i] == a[i - 1] and a[i] == 1) dp[i] = dp[i - 1] + 1;
    // }
    // if(a[0] == a[t - 1] and a[0] == 1) maxVal = dp[t - 1] + 1 + coor(a);
    // cout << max(*max_element(dp.begin(), dp.end()), maxVal) << endl;
    // int length; string s; cin >> length >> s;
    // if(check(s) == false){
    //     cout << "NO" << endl;
    // }else{
    //     int s1 = 0, s2 = 0;
    //     for(int i = 0; i < length / 2; i++) s1 += change(s[i]);
    //     for(int i = length / 2; i < length; i++) s2 += change(s[i]);
    //     if(s1 == s2){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b; cout << a + b << endl;
    // }
    // int t; cin >> t; int a = 0, b = 0, c = 0;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index;
    //     if(i % 3 == 0) a += index;
    //     if(i % 3 == 1) b += index;
    //     if(i % 3 == 2) c += index;
    // }
    // if(a == max(a, max(b, c))){
    //     cout << "chest";
    // }else if(b == max(a, max(b, c))){
    //     cout << "biceps";
    // }else cout << "back" << endl;
    // int t, st, en, sum = 0; cin >> t;
    // vector<int> a;
    // for(int i = 0; i < t - 1; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // cin >> st >> en;
    // for(int i = st; i < en; i++){
    //     sum += a[i - 1];
    // }
    // cout << sum;
    // int n; cin >> n; vector<int> dp(2, 1);
    // if(n < 2) cout << dp[n] << endl;
    // else{
    //     for(int i = 2; i < n + 1; i++){
    //         dp.push_back(dp[i - 2] + dp[i - 1]);
    //     }
    //     cout << dp[dp.size() - 1] << endl;
    // }
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i]; sort(a, a + t);
    // if(t == 1){
    //     cout << "NO" << endl;
    // }else{
    //     int st = 1;
    //     while(a[st] == a[0] and st < t){
    //         st += 1;
    //     }
    //     if(st == t){
    //         cout << "NO" << endl;
    //     }else cout << a[st] << endl;
    // }
    // int t; cin >> t;
    // vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // sort(a.begin(), a.end());
    // if(t % 2 == 0){
    //     cout << a[t / 2 - 1] << endl;
    // }else cout << a[t / 2] << endl;
    // int length; string s; cin >> length >> s; int sum = 0;
    // vector<int> dp(length, 0);
    // for(int i = 0; i < length; i++){
    //     if(s[i] == 'x') dp[i] = 1;
    // }
    // for(int i = 1; i < dp.size(); i++){
    //     if(s[i] == s[i - 1] and s[i] == 'x') dp[i] = dp[i - 1] + 1;
    // }
    // for(int i = 0; i < dp.size(); i++) cout << dp[i] << " ";
    // for(int i = dp.size() - 1; i > 0; i--){
    //     if(dp[i] >= 3 and (i == dp.size() - 1 || dp[i + 1] == 0)) sum += dp[i] - 2;
    // }
    // cout << sum;
    // string time; int minn; cin >> time >> minn;
    // int bon_min = minn % 60;
    // int bon_hr = minn / 60;
    // int min = 10 * change(time[3]) + change(time[4]);
    // int hour = 10 * change(time[0]) + change(time[1]) + bon_hr;
    // min += bon_min;
    // while(min >= 60){
    //     min -= 60;
    //     hour += 1;
    // }
    // while(hour >= 24){
    //     hour -= 24;
    // }
    // if(hour < 10){
    //     cout << 0 << hour << ':';
    // }else cout << hour << ':';
    // if(min < 10){
    //     cout << 0 << min;
    // }else cout << min;
    // int cnt = 0; int k1, k2, k3, k4; cin >> k1 >> k2 >> k3 >> k4;
    // //k1 = 2
    // //k2 = 3
    // //k3 = 5
    // //k4 = 6
    // int min256 = min(k1, min(k3, k4));
    // cnt += 256 * min256;
    // k1 -= min256;
    // k3 -= min256;
    // k4 -= min256;
    // int min32 = min(k1, k2);
    // cnt += 32 * min32;
    // cout << cnt << endl;
    // int t; cin >> t;
    // while(t--){
    //     vector<int> vec;
    //     int length; cin >> length;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; vec.push_back(index);
    //     }
    //     cout << solution(vec) << endl;
    // }
//}
// void show(int n){
//     if(n % 2 == 0){
//         cout << n / 2 << endl;
//         for(int i = 0; 2 * i < n; i++){
//             cout << 2 << " ";
//         }
//         cout << endl;
//     }else{
//         // n le
//         cout << n / 2 << endl;
//         for(int i = 1; 2 * i + 2 < n; i++)  {
//             cout << 2 << " ";
//         }
//         cout << 3 << " ";
//         cout << endl;
//     }
// }
// int len(int n){
//     if(n == 0) return 0;
//     int count = 0;
//     while(n != 0){
//         n /= 10;
//         count += 1;
//     }
//     return count;
// }
// int change(char c){
//     if(c == '0') return 0;
//      if(c == '1') return 1;
//      if(c == '2') return 2;
//      if(c == '3') return 3;
//      if(c == '4') return 4;
//      if(c == '5') return 5;
//      if(c == '6') return 6;
//      if(c == '7') return 7;
//     if(c == '8') return 8;
//      if(c == '9') return 9;
//      return -1;
//  }
// bool check(vector<string> a){
//     for(int i = 0; i < a.size() - 1; i++){
//         if(a[i][0] == a[i + 1][0]) return false;
//     } 
//     for(int i = 0; i < a.size(); i++){
//         for(int j = 1; j < a[0].size(); j++){
//             if(a[i][j] != a[i][0]) return false;
//         }
//     }
//     return true;
// }
// int found(int index, vector<int> a){
//     int count = 0;
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] >= index) count += 1;
//     }
//     return count;
// }
// int finda(vector<int> a, int st, int index){
//     for(int i = st + 1; i < a.size(); i++){
//         if(a[i] == index) return i;
//     }
//     return -1;
// }
// int find(vector<int> dp){
//     int st = 0;
//     while(st < dp.size()){
//         if(dp[st] == 1) return st;
//         st += 1;
//     }
//     return -1;
// }
// bool check(vector<int> a){
//     for(int i = 0; i < a.size() - 1; i++){
//         if(a[i] == a[i + 1] and a[i] == 0) return false;
//     }
//     return true;
// }
// int opp(int n){
//     if(n == 0) return 2;
//     if(n == 1) return 1;
//     if(n == 2) return 0;
//     return -1;
// }
// int count(int n){
//     int c = 0;
//     for(int i = 1; i < n + 1; i++){
//         c += i;
//     }
//     return c;
// }
// int all(int n){
//     int s = 0;
//     for(int i = 1; i < n + 1; i++){
//         s += i;
//     }
//     return s;
// }
// int found(string s, string a[6]){
//     for(int i = 0; i < 6; i++){
//         if(a[i] == s) return i;
//     }
//     return -1;
// }
// bool check(string s, int st){
//     int q = 0, a = 0;
//     for(int i = st; i < s.size(); i++){
//         if(s[i] == 'Q'){
//             q += 1;
//         }else a += 1;
//     }
//     if(q > a) return false;
//     return true;
// }
// bool found(char c, vector<char> cc){
//     for(int i = 0; i < cc.size(); i++){
//         if(cc[i] == c) return true;
//     }
//     return false;
// }
// int found(int index, vector<int> a){
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] == index) return i;
//     }
//     return -1;
// }
// bool check(string s[30005], int st, int length){
//     for(int i = 1; i < length; i++){
//         if(s[i][st] != s[i - 1][st]) return false;
//     }
//     return true;
// }
// bool found(int a[100], int index, int length){
//     for(int i = 0; i < length; i++){
//         if(a[i] == index) return true;
//     }
//     return false;
// }



void solve(){

    // int n, d, count = 0; cin >> n >> d;
    // int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // sort(a, a + n);
    // for(int i = 0; i < n - 1; i++){
    //     int st = i + 1;
    //     while(st < n){
    //         if(a[st] - a[i] > d){
    //             break;
    //         }
    //         st += 1;
    //         count += 1;
    //     }
    // }
    // cout << count * 2 << endl;
    // int t; cin >> t;
    // int a[201];
    // while(t--){
    //     vector<int> a; vector<int> b;
    //     int length; cin >> length;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; a.push_back(index);
    //     }
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; b.push_back(index);
    //     }
    //     int max_a = *max_element(a.begin(), a.end());
    //     int max_b = *max_element(b.begin(), b.end());
    //     if(max_a > max_b){
    //         for(int i = 0; i < length; i++){
    //             if(a[i] > b[i]){
    //                 int tmp = a[i];
    //                 a[i] = b[i];
    //                 b[i] = tmp;
    //             }
    //         }
    //     }else{
    //         for(int i = 0; i < length; i++){
    //             if(b[i] > a[i]){
    //                 int tmp = a[i];
    //                 a[i] = b[i];
    //                 b[i] = tmp;
    //             }
    //         }
    //     }
    //     max_a = *max_element(a.begin(), a.end());
    //     max_b = *max_element(b.begin(), b.end());
    //     cout << max_a * max_b << endl;
    // }
    // int t; cin >> t; int a[4];
    // while(t--){ 
    //     for(int i = 0; i < 4; i++) cin >> a[i];
    //     int aa = a[0], bb = a[1];
    //     sort(a, a + 4);
    //     if((a[0] == aa and a[1] == bb) || (a[0] == bb and a[1] == aa) || (a[2] == aa and a[3] == bb) || (a[2] == bb and a[3] == aa)){
    //         cout << "NO" << endl;
    //     }else cout << "YES" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int a, b, c; cin >> a >> b >> c;
    //     if(a == b and b == c){
    //         cout << "YES" << endl;
    //         cout << a << " " << b << " " << c << endl;
    //     }else{
    //         if(a != b and b != c and a != c){
    //             cout << "NO" << endl;
    //         }else{
    //             if(a == b and a != c and a < c){
    //                 cout << "NO" << endl;
    //             }else if(a == c and a != b and a < b){
    //                 cout << "NO" << endl;
    //             }else if(b == c and b != a and b < a){
    //                 cout << "NO" << endl;
    //             }else{
    //                 if(a == b and a != c and a > c){
    //                     cout << "YES" << endl;
    //                     cout << a << " " << c << " " << c  << endl;
    //                 }else if(a == c and a != b and a > b){
    //                     cout << "YES" << endl;
    //                     cout << a << " " << b << " " << b  << endl;
    //                 }else if(b == c and b != a and b > a){
    //                     cout << "YES" << endl;
    //                     cout << b << " " << a << " " << a  << endl;
    //                 }
    //             }
    //         }
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length;
    //     int s1 = 0, s2 = 0;
    //     for(int i = 0; i < length * 2; i++){
    //         int index; cin >> index;
    //         if(index % 2 == 0){
    //             s1 += 1;
    //         }else s2 += 1;
    //     }
    //     if(s1 == s2){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // string s; cin >> s; int st = 0;
    // while(st < s.size()){
    //     if(s[st] == '.'){
    //         cout << 0;
    //         st += 1;
    //     }else{
    //         if(s[st] == '-'){
    //             if(s[st + 1] == '.'){
    //                 cout << 1;
    //                 st += 2;
    //             }else{
    //                 cout << 2;
    //                 st += 2;
    //             }
    //         }
    //     }
    // }
    // int n, m; cin >> n >> m; char a[n][m]; bool found = false;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(a[i][j] != 'B' and a[i][j] != 'W' and a[i][j] != 'G'){
    //             found = true;
    //             cout << "#Color" << endl;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    // }
    // if(found == false) cout << "#Black&White" << endl;
    // int n; cin >> n; show(n);
    //1 11 111 1111/ Moi so co 4 so;
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index; int count = 0;
    //     count += (index % 10 - 1) * 10;
    //     int lee = len(index);
    //     for(int i = 1; i < lee + 1; i++) count += i;
    //     cout << count << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     int n1 = change(s[0]) + change(s[1]) + change(s[2]);
    //     int n2 = change(s[3]) + change(s[4]) + change(s[5]);
    //     if(n1 == n2){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length, index, sum = 0; cin >> length; int n1 = 0, n2 = 0;
    //     for(int i = 0; i < length; i++){
    //         cin >> index; sum += index;
    //         if(index == 1) n1 += 1;
    //         if(index == 2) n2 += 1;
    //     }
    //     if(sum % 2 != 0){
    //         cout << "NO"  << endl;
    //     }else{
    //         if(n1 == 0 and n2 != 0){
    //             if(n2 % 2 == 0){
    //                 cout << "YES" << endl;
    //             }else cout << "NO" << endl;
    //         }else if(n1 != 0 and n2 == 0){
    //             cout << "YES" << endl;
    //         }else if(n1 != 0 and n2 != 0){
    //             cout << "YES" << endl;
    //         }
    //     }
    // }
    // int a, b; cin >> a >> b;
    // if(a == b){
    //     cout << 0 << endl;
    // }else if(b % a != 0){
    //     cout << -1 << endl;
    // }else{
    //     int count = 0, num = b / a;
    //     while(num % 3 == 0){
    //         num /= 3; count += 1;
    //     }
    //     while(num % 2 == 0){
    //         num /= 2; count += 1;
    //     }
    //     if(num != 1){
    //         cout << -1 << endl;
    //     }else cout << count << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     if(s[0] != s[1] || s[s.size() - 1] != s[s.size() - 2]){
    //         cout << "NO" << endl;
    //     }else{
    //         bool found = false;
    //         for(int i = 1; i < s.size() - 1; i++){
    //             if(s[i] != s[i - 1] and s[i] != s[i + 1]){
    //                 cout << "NO" << endl;
    //                 found = true;
    //                 break;
    //             }
    //             if(found == true) break;
    //         }
    //         if(found == false) cout << "YES" << endl;
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     cout << change(s[0]) + change(s[2]) << endl;
    // }
    // int n, m; cin >> n >> m;
    // vector<string> a;
    // for(int i = 0; i < n; i++){
    //     string s; cin >> s; a.push_back(s);
    // }
    // if(check(a)){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int t; cin >> t;
    // while(t--){
    //     int maxValue = 0;
    //     int length; cin >> length; vector<int> a;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; a.push_back(index);
    //     }
    //     int st = 1;
    //     while(found(st, a) >= st){
    //         maxValue = st;
    //         st += 1;
    //     }
    //     cout << maxValue << endl;
    // }
    // int n, k, x, time = 0; cin >> n >> k >> x;
    // vector<int> a;
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // sort(a.begin(), a.end());
    // int st = a.size() - 1;
    // while(st > -1){
    //     if(a[st] > x and k > 0){
    //         time += x;
    //         k -= 1;
    //     }else time += a[st];
    //     st -= 1;
    // }
    // cout << time;
    // int t, sum = 0; cin >> t;
    // vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; sum += index; a.push_back(index);
    // }
    // vector<int> dp(t, 1);
    // int each = sum / (t / 2);
    // for(int i = 0; i < t / 2; i++){
    //     int findFirstOne = find(dp);
    //     int secondOne = finda(a, findFirstOne, each - a[findFirstOne]);
    //     cout << findFirstOne + 1 << " " << secondOne + 1 << endl;
    //     dp[findFirstOne] = 0;
    //     dp[secondOne] = 0;
    //     a[findFirstOne] = -1;
    //     a[secondOne] = -1;
    // }
    // int count = 0;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     string name; int a, b; cin >> name >> a >> b;
    //     if(b > a and a >= 2400){
    //         count += 1;
    //     }
    // }
    // if(count == 0){
    //     cout << "NO" << endl;
    // }else cout << "YES" << endl;
    // int t; cin >> t;
    // while(t--){
    //     int height = 1;
    //     int length; cin >> length;
    //     vector<int> a;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; a.push_back(index);
    //     }
    //     if(check(a) == false){
    //         cout << -1 << endl;
    //     }else{
    //         for(int i = 1; i < a.size(); i++){
    //             if(a[i] == 1 and a[i - 1] != 0){
    //                 a[i] = a[i - 1] + 5;
    //                 a[i - 1] = 0;
    //             }
    //         }
    //         for(int i = 0; i < a.size(); i++){
    //             height += a[i];
    //         }
    //         cout << height << endl;
    //     }
    // }
    // int a, b; cin >> a >> b;
    // if(b % a == 0){
    //     cout << b / a << endl;
    // }else cout << b / a + 1 << endl;
    // int t; cin >> t;
    // int a[t];
    // for(int i = 0; i < t; i++) cin >> a[i];
    // int x = 1, y = 2;
    // int minVal = abs(a[0] - a[1]);
    // for(int i = 1; i < t - 1; i++){
    //     if(abs(a[i + 1] - a[i]) < minVal){
    //         minVal = abs(a[i + 1] - a[i]);
    //         x = i + 2;
    //         y = i + 1;
    //     }
    // }
    // if(abs(a[0] - a[t - 1]) < minVal){
    //     x = 1;
    //     y = t;
    // }
    // cout << x << " " << y << endl;
    // vector<string> a;
    // for(int i = 0; i < 3; i++){
    //     string s; cin >> s; a.push_back(s);
    // }
    // bool c = true;
    // for(int i = 0; i < a.size(); i++){
    //     for(int j = 0; j < a[i].size(); j++){
    //         if(a[i][j] != a[opp(i)][opp(j)]){
    //             c = false;
    //             cout << "NO" << endl;
    //             break;
    //         }
    //         if(c == false) break;
    //     }
    //     if(c == false) break;
    // }
    // if(c == true) cout << "YES" << endl;
    // int n, k, l, c, d, p, nl, np;
    // cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // int ml = k * l;
    // int slide = c * d;
    // cout << min(ml/nl, min(c*d, p/np)) / n << endl;
    // int n; cin >> n; int st = 0; int cnt = 0;
    // while(n >= count(st)){
    //     n -= count(st);
    //     st += 1;
    // }
    // cout << st - 1 << endl;
    // int n, x1, x2; cin >> n >> x1 >> x2; vector<int> a;
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // sort(a.begin(), a.end());
    // int first = a[a.size() - x1];
    // int ok = a[a.size() - x1 - 1];
    // cout << first - ok << endl;
    // int t, count = 0; cin >> t;
    // char a[t][t];
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < t; j++){
    //         if(i % 2 == 0){
    //             if(j % 2 == 0){
    //                 a[i][j] = 'C';
    //                 count += 1;
    //             }else a[i][j] = '.';
    //         }else{
    //             if(j % 2 == 1){
    //                 a[i][j] = 'C';
    //                 count += 1;
    //             }else a[i][j] = '.';
    //         }
    //     }
    // }
    // cout << count << endl;
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < t; j++){
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    // int n, m; cin >> n >> m; int change = all(n);
    // while(m >= change){
    //     m -= change;
    // }
    // int st = 1;
    // while(st < n){
    //     if(m < st) break;
    //     m -= st;
    //     st += 1;
    // }
    // cout << m;
    // int length; string s1, s2; cin >> length >> s1 >> s2;
    // int count = 0;
    // for(int i = 0; i < length; i++){
    //     int n1 = change(s1[i]), n2 = change(s2[i]);
    //     int nor = abs(n1 - n2);
    //     int mb;
    //     if(n1 < n2){
    //         mb = n1 + 10 - n2;
    //     }else mb = 10 - n1 + n2;
    //     count += min(nor, mb);
    // }
    // cout << count;
    // int t; cin >> t;
    // vector<vector<char>> res(t, vector<char>(t, 'D'));
    // int st = t / 2;
    // for(int i = 0; i < t / 2; i++){
    //     for(int j = 0; j < st; j++){
    //         res[i][j] = '*';
    //     }
    //     for(int j = res[i].size() - 1; j > res[i].size() - 1 - st; j--){
    //         res[i][j] = '*';
    //     }
    //     st -= 1;
    // }
    // int count = 0;
    // while(count < t / 2){
    //     res[res.size() - 1 - count] = res[count];
    //     count += 1;
    // }
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < t; j++){
    //         cout << res[i][j];
    //     }
    //     cout << endl;
    // }
    // int a[100005];
    // for(int i = 0; i < 100005; i++) a[i] = 0;
    // int t, index; cin >> t;
    // for(int i = 0; i < t - 1; i++){
    //     cin >> index; a[index] = 1;
    // }
    // int st = 1;
    // while(1){
    //     if(a[st] != 1){
    //         cout << st; break;
    //     }
    //     st += 1;
    // }
    // string b[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    // string a[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    // vector<int> dp(6, 0);
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     string s; cin >> s; int index = found(s, a); dp[index] = 1;
    // }
    // cout << 6 - t << endl;
    // for(int i = 0; i < 6; i++){
    //     if(dp[i] == 0) cout << b[i] << endl;
    // }
    // int t; cin >> t; int a[3];
    // while(t--){
    //     for(int i = 0; i < 3; i++) cin >> a[i];
    //     sort(a, a + 3); cout << a[1] << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     bool found = false; int length; cin >> length; string s; cin >> s;
    //     for(int i = 0; i < length; i++){
    //         if(check(s, i) == false){
    //             found = true;
    //             cout << "NO" << endl;
    //             break;
    //         }
    //     }
    //     if(found == false) cout << "YES" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int count = 0; vector<vector<int>> a(3, vector<int> (2));
    //     for(int i = 0; i < 3; i++){
    //         for(int j = 0; j < 2; j++){
    //             cin >> a[i][j];
    //         }
    //     }
    //     for(int i = 0; i < 3; i++){
    //         for(int j = i + 1; j < 3; j++){
    //             if(a[i][0] == a[j][0]) count += 1;
    //             if(a[i][1] == a[j][1]) count += 1;
    //         }
    //     }
    //     if(count > 1){
    //         cout << "NO" << endl;
    //     }else cout << "YES" << endl;
    // }
    // int t; cin >> t;
    // int aa[t];
    // for(int i = 0; i < t; i++) cin >> aa[i];
    // vector<int> a; vector<int> b;  vector<int> c;
    // for(int i = 0; i < t; i++){
    //     if(aa[i] == 1) a.push_back(i);
    //     if(aa[i] == 2) b.push_back(i);
    //     if(aa[i] == 3) c.push_back(i);
    // }
    // int res = min(a.size(), min(b.size(), c.size()));
    // cout << res << endl;
    // for(int i = 0; i < res; i++){
    //     cout << a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << endl;
    // }
    // int t, count = 0, a, b; cin >> t;
    // while(t--){
    //     cin >> a >> b;
    //     if(b - a > 1) count += 1;
    // }
    // cout << count;
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // int l = 0, r = 0;
    // for(int i = 0; i < t; i++){
    //     if(a[i][0] == 1) l += 1;
    // }
    // for(int i = 0; i < t; i++){
    //     if(a[i][1] == 1) r += 1;
    // }
    // cout << min(l, t - l) + min(r, t - r) << endl;
    // int a_s = 0, a_r = 0, b_s = 0, b_r = 0; int a, b, c;
    // int t; cin >> t;
    // while(t--){
    //     cin >> a >> b >> c;
    //     if(a == 1){
    //         a_r += b; a_s += c;
    //     }else{
    //         b_r += b; b_s += c;
    //     }
    // }
    // if(a_r >= a_s){
    //     cout << "LIVE" << endl;
    // }else cout << "DEAD" << endl;
    // if(b_r >= b_s){
    //     cout << "LIVE" << endl;
    // }else cout << "DEAD" << endl;
    // int pos = 0; string a, b; cin >> a >> b;
    // for(int i = 0; i < b.size(); i++){
    //     if(b[i] == a[pos]) pos += 1;
    // }
    // cout << pos + 1;
    // string s; cin >> s;
    // int l = 0;
    // for(int i = 0; i < s.size(); i++){
    //     if(isupper(s[i]) == false) l += 1;
    // }
    // if(s.size() - l > l){
    //     for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
    // }else{
    //     for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    // }
    // cout << s;
    // int t; cin >> t;
    // int pos = 1, st = 1; vector<int> a;
    // for(int i = 0; i < t - 1; i++){
    //     pos += st; st += 1; if(pos > t) pos -= t; a.push_back(pos);
    // }
    // for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    // vector<char> cc;
    // cc.push_back('A'); cc.push_back('E'); cc.push_back('I'); cc.push_back('O'); cc.push_back('U'); cc.push_back('Y');
    // for(int i = 0; i < 6; i++){
    //     cc.push_back(tolower(cc[i]));
    // }
    // string s; getline(cin, s);
    // int st = s.size() - 1;
    // while(st > -1){
    //     if(isalpha(s[st])){
    //         if(found(s[st], cc)){
    //             //cout << s[st] << endl;
    //             cout << "YES" << endl;
    //         }else{
    //             //cout << s[st] << endl;
    //             cout << "NO" << endl;
    //         }
    //         break;
    //     }
    //     st -= 1;
    // }
    // int t; cin >> t; vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // int move = 0;
    // int minVal = *min_element(a.begin(), a.end()), maxVal = *max_element(a.begin(), a.end());
    // int ma = 0, mi = a.size() - 1;
    // while(a[ma] != maxVal){
    //     ma += 1; move += 1;
    // }
    // while(a[mi] != minVal){
    //     move += 1; mi -= 1;
    // }
    // if(ma > mi) move -= 1;
    // cout << move;
    // int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
    // int count = 0;
    // for(int i = 1; i < d + 1; i++){
    //     if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) count += 1;
    // }
    // cout << count;
    // string s; cin >> s;
    // int count = 0;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == '4' || s[i] == '7') count += 1;
    // }
    // if(count == 4 || count == 7){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int n; cin >> n; n -= 10;
    // n is the point need to add;
    // if(n <= 0){
    //     cout << 0;
    // }else if (n > 0 and n < 10){
    //     cout << 4 << endl;
    // }else{
    //     if(n == 10){
    //         cout << 15 << endl;
    //     }else if(n == 11){
    //         cout << 4 << endl;
    //     }else cout << 0 << endl;
    // }
    // int t; cin >> t; vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // for(int i = 0; i < t; i++) cout << found(i + 1, a) + 1 << " ";
    // int n, m; cin >> n >> m; int a[n]; int q = 0, w = 0;
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     if(a[i] == 1){
    //         q += 1;
    //     }else w += 1;
    // }
    // while(m--){
    //     int a, b; cin >> a >> b; int length = b - a + 1;
    //     if(length == 1){
    //         cout << 0 << endl;
    //     }else{
    //         if(length % 2 == 1){
    //             cout << 0 << endl;
    //         }else{
    //             //length % 2 == 0;
    //             if(q >= length / 2 and w >= length / 2){
    //                 cout << 1 << endl;
    //             }else cout << 0 << endl;
    //         }
    //     }
    // }
    // int t; cin >> t; string s[t];
    // for(int i = 0; i < t; i++) cin >> s[i];
    // int st = 0, length = s[0].size();
    // while(st < length){
    //     if(check(s, st, t) == false) break;
    //     st += 1;
    // }
    // cout << st;
    // int n, m; cin >> n >> m; string a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int l = 0, r = m - 1, u = 0, d = n - 1;
    // bool found = false;
    // while(l < m){
    //     for(int i = 0; i < n; i++){
    //         if(a[i][l] == '*'){
    //             //cout << "left: ";
    //             //cout << i << " " << l << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    //     l += 1;
    // }
    // found = false;
    // while(r > -1){
    //     for(int i = 0; i < n; i++){
    //         if(a[i][r] == '*'){
    //             //cout << "right:";
    //             //cout << i << " " << r << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    //     r -= 1;
    // }
    // found = false;
    // while(u < n){
    //     for(int i = 0; i < m; i++){
    //         if(a[u][i] == '*'){
    //             //cout << "up:";
    //             //cout << u << " " << i << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    //     u += 1;
    // }
    // found = false;
    // while(d > -1){
    //     for(int i = 0; i < m; i++){
    //         if(a[d][i] == '*'){
    //             //cout << "down:";
    //             //cout << d << " " << i << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    //     d -= 1;
    // }
    // for(int i = u; i < d + 1; i++){
    //     for(int j = l; j < r + 1; j++){
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    // int length; string s; cin >> length >> s;
    // set<char> c;
    // for(int i = 0; i < length; i++){
    //     char cc = tolower(s[i]);
    //     c.insert(cc);
    // }
    // if(c.size() == 26){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int n, m; cin >> n >> m;
    // vector<vector<char>> res(n, vector<char> (m, '#'));
    // for(int i = 0; i < n; i++){
    //     if(i % 2 == 1 and (i - 1) % 4 == 0){
    //         for(int j = 0; j < m - 1; j++) res[i][j] = '.';
    //     }else if(i % 2 == 1 and (i - 1) % 4 == 2){
    //         for(int j = 1; j < m; j++) res[i][j] = '.';
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << res[i][j];
    //     }
    //     cout << endl;
    // }
    // int n, x, sum = 0; cin >> n >> x;
    // int a[n]; for(int i = 0; i < n; i++){
    //     cin >> a[i]; sum += a[i];
    // }
    // sum = abs(sum);
    // if(sum % x == 0){
    //     cout << sum / x;
    // }else cout << sum / x + 1 << endl;
    // int n, a, b; cin >> n >> a >> b; int q[a]; int w[b];
    // for(int i = 0; i < a; i++) cin >> q[i];
    // for(int i = 0; i < b; i++) cin >> w[i];
    // for(int i = 1; i < n + 1; i++){
    //     if(found(q, i, a)){
    //         cout << 1 << " ";
    //     }else cout << 2 << " ";
    // }
    // int t, count = 0; string s; cin >> t >> s; vector<int> dp(t, 1);
    // for(int i = 1; i < t; i++){
    //     if(s[i] == s[i - 1]) dp[i] = dp[i - 1] + 1;
    // }
    // for(int i = 1; i < t; i++){
    //     if(i == t - 1){
    //         if(dp[i] != 1) count += dp[i] - 1;
    //     }else if(dp[i] != 1 and dp[i + 1] == 1) count += dp[i] - 1;
    // }
    // cout << count;
    // int n, k, count = 0; cin >> n >> k; string s[n];
    // for(int i = 0; i < n; i++) cin >> s[i];
    // for(int i = 0; i < n; i++){
    //     int cc = 0;
    //     for(int j = 0; j < s[i].size(); j++){
    //         if(s[i][j] == '4' || s[i][j] == '7') cc += 1;
    //     }
    //     if(cc < k + 1) count += 1;
    // }
    // cout << count << endl;
    // int n, m; cin >> n; int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // cin >> m;
    // vector<vector<int>> res(m, vector<int> (2));
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> res[i][j];
    //     }
    // }
    // for(int i = 0; i < m; i++){
    //     int row = res[i][0] - 1;
    //     int stt = res[i][1];
    //     int left = stt - 1;
    //     int right = a[row] - stt;
    //     if(row != 0) a[row - 1] += left;
    //     if(row != n - 1) a[row + 1] += right;
    //     a[row] = 0;
    // }
    // for(int i = 0; i < n; i++) cout << a[i] << endl;
    // int n, count = 0; cin >> n; 
    // vector<vector<int>> res(n, vector<int> (n));
    // vector<vector<int>> cnt(n, vector<int> (n, 0));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> res[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i == n / 2 || j == n / 2){
    //             cnt[i][j] += 1;
    //         }else if(i == j){
    //             cnt[i][j] += 1;
    //         }else if(i + j == n - 1){
    //             cnt[i][j] += 1;
    //         }
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(cnt[i][j] != 0) count += res[i][j];
    //     }
    // }
    // cout << count << endl;
    // int k, n, w, m = 0; cin >> k >> n >> w;
    // for(int i = 1; i < w + 1; i++){
    //     m += i * k;
    // }
    // if(n >= m){
    //     cout << 0;
    // }else cout << m - n;
    // int n, m, count = 0; cin >> n >> m; vector<vector<int>> fl(n, vector<int> (2*m));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2*m; j++){
    //         cin >> fl[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(fl[i][2*j] == 1 || fl[i][2*j + 1] == 1) count += 1;
    //     }
    // }
    // cout << count << endl;
    // int n, m; cin >> n >> m;
    // set<int> s;
    // for(int i = 0; i < n; i++){
    //     int length; cin >> length;
    //     for(int j = 0; j < length; j++){
    //         int index; cin >> index; s.insert(index);
    //     }
    // }
    // if(s.size() != m){
    //     cout << "NO" << endl;
    // }else cout << "YES" << endl;
    // int t; cin >> t; vector<int> a(1, 1);
    // for(int i = 2; i < t + 1; i++){
    //     a.push_back(1);
    //     while(1){
    //         if(a[a.size() - 1] != a[a.size() - 2] || a.size() == 1) break;
    //         a.pop_back();
    //         a[a.size() - 1] += 1;
    //     }
    // }
    // for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    // int t, count = 0; cin >> t; long long st; cin >> st;
    // for(int i = 0; i < t; i++){
    //     char c; long long num; cin >> c >> num;
    //     if(c == '-'){
    //         if(st >= num){
    //             st -= num;
    //         }else count += 1;
    //     }else st += num;
    // }
    // cout << st << " " << count;
    // string c; cin >> c;
    // if(c[1] != '1' and c[1] != '8' and c[0] != 'a' and c[0] != 'h'){
    //     cout << 8;
    // }else{
    //     if((c[0] == 'a' || c[0] == 'h') and (c[1] == '1' || c[1] == '8')){
    //         cout << 3;
    //     }else cout << 5;
    // }
    // int a, b; cin >> a >> b; int maxV = max(a, b);
    // if(maxV == 1){
    //     cout << "1/1" << endl;
    // }else if(maxV == 2){
    //     cout << "5/6" << endl;
    // }else if(maxV == 3){
    //     cout << "2/3" << endl;
    // }else if(maxV == 4){
    //     cout << "1/2" << endl;
    // }else if(maxV == 5){
    //     cout << "1/3" << endl;
    // }else cout << "1/6" << endl;
    // int a[2][3], aa = 0, bb = 0;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //         if(i == 0){
    //             if(a[i][j] != 0) aa += a[i][j];
    //         }else{
    //             if(a[i][j] != 0) bb += a[i][j];
    //         }
    //     }
    // }
    // int n; cin >> n;
    // if(aa % 5 == 0){
    //     n -= aa / 5;
    // }else n -= aa / 5 + 1;
    // if(bb % 10 == 0){
    //     n -= bb / 10;
    // }else n -= bb / 10 + 1;
    // if(n >= 0){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // string s; cin >> s; char c = s[0]; c = toupper(c);
    // cout << c;
    // for(int i = 1; i < s.size(); i++) cout << s[i];
    // int n, m; cin >> n >> m; vector<int> a(m, n / m);
    // n -= m * (n / m);
    // for(int i = 0; i < n; i++) a[i] += 1;
    // for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    // int x, y;
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         int index; cin >> index;
    //         if(index == 1){
    //             x = i; y = j;
    //         }
    //     }
    // }
    // cout << abs(2 - i) + abs(2 - j);
    // int n, k; cin >> n >> k;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j ++){
    //         if(i == j) cout << k << " ";
    //         else cout << 0 << " ";
    //     }
    //     cout << endl;
    // }
    // int n, m; cin >> n >> m; string a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int x1, x2, x3, y1, y2, y3, count = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(a[i][j] == '*'){
    //             if(count == 0){
    //                 x1 = i + 1;
    //                 y1 = j + 1;
    //                 count += 1;
    //             }else if(count == 1){
    //                 x2 = i + 1;
    //                 y2 = j + 1; 
    //                 count += 1;
    //             }else{
    //                 x3 = i + 1;
    //                 y3 = j + 1;
    //             }
    //         }
    //     }
    // }
    // if(x1 == x2){
    //     cout << x3 << " ";
    // }else if(x1 == x3){
    //     cout << x2 << " ";
    // }else cout << x1 << " ";
    // if(y1 == y2){
    //     cout << y3 << " ";
    // }else if(y1 == y3){
    //     cout << y2 << " ";
    // }else cout << y1 << " ";
    // string a, b, c; cin >> a >> b >> c; bool found = false;
    // //find(char c, string s);
    // //cout << a.size() << " " << b.size() << " " << c.size() << endl;
    // if(a.size() + b.size() == c.size()){
    //     for(int i = 0; i < a.size(); i++){
    //         if(find(a[i], c) == -1){
    //             found = true;
    //             cout << "NO" << endl;
    //             break;
    //         }
    //         c[find(a[i], c)] = '*';
    //     }
    //     //cout << c << endl;
    //     if(found == false){
    //         for(int i = 0; i < b.size(); i++){
    //             if(find(b[i], c) == -1){
    //                 found = true;
    //                 cout << "NO" << endl;
    //                 break;
    //             }
    //             c[find(b[i], c)] = '*';
    //         }
    //     }
    //     //cout << c << endl;
    //     if(found == false) cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int t, minLength = 1000, min_index = -1; cin >> t; vector<vector<int>> a;
    // while(t--){
    //     vector<int> aa; int length; cin >> length;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index; aa.push_back(index);
    //     }
    //     a.push_back(aa);
    //     if(length < minLength){
    //         minLength = length;
    //         min_index = a.size() - 1;
    //     }
    // }
    // for(int i = 0; i < minLength; i++){
    //     bool found = false; int st = 0;
    //     while(st < a.size()){
    //         int count = 0;
    //         for(int j = 0; j < a[st].size(); j++){
    //             if(a[st][j] == a[min_index][i]) count += 1;
    //         }
    //         if(count == 0){
    //             found = true;
    //             break;
    //         }
    //         st += 1;
    //     }
    //     if(found == false) cout << a[min_index][i] << " ";
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     if(check(s)){
    //         int st = 1;
    //         bool found = false;
    //         while(st < s.size()){
    //             if(s[st] == 'Y' and s[st - 1] != 's'){
    //                 cout << "NO" << endl;
    //                 found = true;
    //                 break;
    //             }
    //             if(s[st] == 'e' and s[st - 1] != 'Y'){
    //                 cout << "NO" << endl;
    //                 found = true;
    //                 break;
    //             }
    //             if(s[st] == 's' and s[st - 1] != 'e'){
    //                 cout << "NO" << endl;
    //                 found = true;
    //                 break;
    //             }
    //             st += 1;
    //         }
    //         if(found == false) cout << "YES" << endl; 
    //     }else cout << "NO" << endl;
    // }
    // int a, b; cin >> a >> b; cout << (a * b) / 2;
    // string s; cin >> s; vector<int> a;
    // for(int i = 0; i < s.size(); i++){
    //     if(cc(s[i]) != -1) a.push_back(cc(s[i]));
    // }
    // sort(a.begin(), a.end());
    // for(int i = 0; i < a.size(); i++){
    //     if(i == a.size() - 1){
    //         cout << a[i];
    //     }else cout << a[i] << '+';
    // }
    // string s; cin >> s;
    // set<char> c;
    // for(int i = 0; i < s.size(); i++) c.insert(s[i]);
    // if(c.size() % 2 == 1){
    //     cout << "IGNORE HIM!" << endl;
    // }else cout << "CHAT WITH HER!" << endl;
    // int length; string s; cin >> length >> s;
    // int a = 0, d = 0;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == 'A'){
    //         a += 1;
    //     }else if(s[i] == 'D'){
    //         d += 1;
    //     }
    // }
    // if(a > d){
    //     cout << "Anton" << endl;
    // }else if(d > a){
    //     cout << "Danik" << endl;
    // }else cout << "Friendship" << endl;
    // long long n, k; cin >> n >> k;
    // if(n % 2 == 0){
    //     if(k <= n / 2){
    //         cout << 2*k - 1 << endl;
    //     }else cout << (k - n/2) * 2 << endl;
    // }else{
    //     if(k <= n/2 + 1){
    //         cout << 2*k - 1 << endl;
    //     }else cout << (k - n/2 - 1)*2 << endl;
    // }
    // string s = "";
    // int n; cin >> n;
    // int count = 1;
    // while(s.size() <= 1000){
    //     string ss = to_string(count);
    //     count += 1;
    //     s += ss;
    // }
    // cout << s[n - 1];
    // string s; cin >> s;
    // char c[6] = {'a', 'o', 'u', 'y', 'e', 'i'};
    // for(int i = 0; i < s.size(); i++){
    //     char ccc = tolower(s[i]);
    //     if(!find(ccc, c)) cout << '.' << ccc;
    // }
    // int a, b, count = 1; cin >> a >> b;
    // while(a <= b){
    //     a *= 3;
    //     b *= 2;
    //     count += 1;
    // }
    // cout << count - 1;
    // int x; cin >> x;
    // if(x % 5 == 0){
    //     cout << x / 5;
    // }else cout << x / 5 + 1;
    // int n, k; cin >> n >> k;
    // while(k > 0){
    //     if(n % 10 == 0){
    //         n /= 10;
    //     }else n -= 1;
    //     k -= 1;
    // }
    // cout << n;
    // int n, h; cin >> n >> h; int count = n;
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; 
    //     if(index > h) count += 1;
    // }
    // cout << count;
    // int n, count = 0; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; if(index == 1) count += 1;
    // }
    // if(count == 0){
    //     cout << "EASY";
    // }else cout << "HARD";
    // int y; cin >> y; int st = y + 1;
    // while(check(st)) st += 1;
    // cout << st;
    // int t; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b;
    //     if(a % b == 0){
    //         cout << 0 << endl;
    //     }else cout << b * (a / b + 1) - a << endl;
    // }
    // string s, res = ""; cin >> s;
    // int st = 0;
    // while(st < s.size()){
    //     if(s[st] == 'W'){
    //         if(s[st + 1] == 'U' and s[st + 2] == 'B'){
    //             if(res.size() != 0 and res[res.size() - 1] != ' ') res += ' ';
    //             st += 3;
    //         }else{
    //             res += s[st];
    //             st += 1;
    //         }
    //     }else{
    //         res += s[st];
    //         st += 1;
    //     }
    // }
    // cout << res;
    // bool check(int n){
    //     set<int> s;
    //     while(n != 0){
    //         s.insert(n % 10);
    //         n /= 10;
    //     }
    //     if(s.size() == 4) return false;
    //     return true;
    // }
    // bool found = false;
    // int a, b; cin >> a >> b;
    // if(check(a) and check(b)){
    //     int st = a + 1;
    //     while(st < b){
    //         if(check(st)){
    //             found = true;
    //             cout << "NO" << endl;
    //             break;
    //         }
    //         st += 1;
    //     }
    //     if(found == false) cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // for(int i = 0; i < t - 1; i++) cout << a[i] + a[i + 1] << " ";
    // cout << a[t - 1] << endl;
    // int length; cin >> length;  string s; cin >> s;
    // vector<int> dp(length, 0);
    // for(int i = 0; i < length; i++){
    //     if(s[i] == 'B') dp[i] = 1;
    // }
    // for(int i = 1; i < length; i++){
    //     if(dp[i] == 1 and dp[i] < dp[i - 1] + 1){
    //         dp[i] = dp[i - 1] + 1;
    //         dp[i - 1] = 0;
    //     }
    // }
    // int count = 0;
    // for(int i = 0; i < length; i++){
    //     if(dp[i] != 0) count += 1;
    // }
    // cout << count << endl;
    // for(int i = 0; i < length; i++){
    //     if(dp[i] != 0) cout << dp[i] << " ";
    // }
    // int n, c; cin >> n >> c; int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // vector<int> dp(1, 1);
    // for(int i = 1; i < n; i++){
    //     if(a[i] - a[i - 1] <= c){
    //         dp.push_back(dp[dp.size() - 1] + 1);
    //     }else dp.push_back(1);
    // }
    // cout << dp[dp.size() - 1] << endl;
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // vector<int> dp(t, 1);
    // for(int i = 1; i < t; i++){
    //     if(a[i] > a[i - 1] and dp[i] < dp[i - 1] + 1) dp[i] = dp[i - 1] + 1;
    // }
    // cout << *max_element(dp.begin(), dp.end());
    // int n; cin >> n; int a[n]; int pos[n + 1];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    //     pos[a[i]] = i;
    // }
    // if(pos[1] == 0 || pos[n] == n - 1 || pos[1] == n - 1 || pos[n] == 0){
    //     cout << n - 1 << endl;
    // }else{
    //     int poss = pos[n];
    //     int pe = pos[1];
    //     cout << max(poss, max(pe, max(n - poss - 1, n - pe - 1)));
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a = 0, b = 0;
    //     for(int i = 0; i < length; i++){
    //         int index; cin >> index;
    //         if(index % 2 == 0){
    //             a += index;
    //         }else b += index;
    //     }
    //     if(a > b) {
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int n, m; cin >> n >> m;
    // int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // sort(a, a + n);
    // for(int i = n - 1; i > -1; i--) a[i - 1] += a[i];
    // int st = 1;
    // while(a[n - st] < m) st += 1;
    // cout << st;
    // int n, m; cin >> n >> m;
    // int count = 0;
    // for(int i = 0; i * i <= n; i++){
    //     for(int j = 0; j * j <= m; j++){
    //         if(i*i + j == n and i + j*j == m) count += 1;
    //     }
    // }
    // cout << count;
    // int t; cin >> t;
    // if(t % 2 == 1){
    //     cout << -1 << endl;
    // }else{
    //     for(int i = 1; i < t + 1; i++){
    //         if(i % 2 == 1){
    //             cout << i + 1 << " ";
    //         }else cout << i - 1 << " ";
    //     }
    // }
    // int t, st = 4; cin >> t;
    // while(check(st) == false || check(t - st) == false){
    //     st += 1;
    // }
    // cout << st << " " << t - st;
    // int n, k, count = 0; cin >> n >> k; 
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; 
    //     if(index + k <= 5) count += 1;
    // }
    // cout << count / 3;
    // int a, b; cin >> a >> b;
    // int aa = 0, bb = 0, cc = 0;
    // for(int i = 1; i < 7; i++){
    //     if(abs(i - a) < abs(i - b)){
    //         aa += 1;
    //     }else if(abs(i - a) == abs(i - b)){
    //         bb += 1;
    //     }else cc += 1;
    // }
    // cout << aa << " " << bb << " " << cc;
    // int n; cin >> n; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int maxVal = 0;
    // for(int i = 1; i < n; i++){
    //     if(a[i] > a[maxVal]) maxVal = i;
    // }
    // sort(a, a + n);
    // cout << maxVal + 1 << " " << a[n - 2] << endl;
    // int n; cin >> n; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int l = 0, r = n - 1;
    // int count = 0;
    // int s = 0, d = 0;
    // while(l <= r){
    //     if(count % 2 == 0){
    //         if(a[l] >= a[r]){
    //             s += a[l];
    //             l += 1;
    //         }else{
    //             s += a[r];
    //             r -= 1;
    //         }
    //     }else{
    //         if(a[l] >= a[r]){
    //             d += a[l];
    //             l += 1;
    //         }else{
    //             d += a[r];
    //             r -= 1;
    //         }
    //     }
    //     count += 1;
    // }
    // cout << s << " " << d;
    // char a = 'a';
    // char b = a + 1;
    // cout << b;
    // vector<char> c(1, 'a');
    // for(int i = 0; i < 25; i++){
    //     char b = c[c.size() - 1] + 1;
    //     c.push_back(b);
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length, num; cin >> length >> num; int loop = length / num;
    //     for(int i = 0; i < loop; i++){
    //         for(int j = 0; j < num; j++) cout << c[j];
    //     length -= (length / num) * num;
    //     for(int i = 0; i < length; i++) cout << c[i];
    //     cout << endl;
    // }
    // int n, k, cnt = 0; cin >> n >> k;
    // int red = 2*n, green = 5*n, blue = 8*n;
    // if(2*n % k == 0){
    //     cnt += 2*n/k;
    // }else cnt += 2*n/k + 1;
    // if(5*n % k == 0){
    //     cnt += 5*n/k;
    // }else cnt += 5*n/k + 1;
    // if(8*n % k == 0){
    //     cnt += 8*n/k;
    // }else cnt += 8*n/k + 1;
    // cout << cnt;
    // int n, t; cin >> n >> t;
    // int aa[n]; for(int i = 0; i < n; i++) cin >> aa[i];
    // vector<int> a;
    // for(int i = 0; i < n; i++){
    //     if(i == 0){
    //         a.push_back(86400 - aa[i]);
    //     }else a.push_back(a[i - 1] + 86400 - aa[i]);
    // }
    // int st = 0;
    // while(st < a.size()){
    //     if(a[st] >= t){
    //         cout << st + 1 << endl;
    //         break;
    //     }
    //     st += 1;
    // }
    // int length, maxVal = 0; cin >> length;
    // cin.ignore();
    // string s; getline(cin, s);
    // vector<int> a(1, 0);
    // for(int i = 0; i < length; i++){
    //     if(s[i] == ' ') a.push_back(i);
    // }
    // a.push_back(s.size());
    // for(int i = 0; i < a.size() - 1; i++){
    //     string ss = madeString(s, a[i], a[i + 1]);
    //     int count = 0;
    //     for(int j = 0; j < ss.size(); j++){
    //         if(isupper(ss[j])) count += 1;
    //     }
    //     if(count > maxVal) maxVal = count;
    // }
    // cout << maxVal;
    // int n, cnt = 0; cin >> n; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 1; i < n - 1; i++){
    //     if((a[i] < a[i - 1] and a[i] < a[i + 1]) || (a[i] > a[i + 1] and a[i] > a[i - 1])) cnt += 1;
    // }
    // cout << cnt;
    // vector<string> res(1, "NO");
    // vector<string> ss;
    // int length; cin >> length; 
    // for(int i = 0; i < length; i++){
    //     string c; cin >> c; ss.push_back(c);
    // }
    // for(int i = 1; i < length; i++){
    //     if(check(ss, i)){
    //         res.push_back("YES");
    //     }else res.push_back("NO");
    // }
    // for(int i = 0; i < res.size(); i++) cout << res[i] << endl;
    // int n; cin >> n; string bus[n];
    // for(int i = 0; i < n; i++) cin >> bus[i];
    // int find = false;
    // for(int i = 0; i < n; i++){
    //     if(bus[i][0] == 'O' and bus[i][1] == 'O'){
    //         find = true; bus[i][0] = '+'; bus[i][1] = '+';
    //     }
    //     else if(bus[i][3] == 'O' and bus[i][4] == 'O'){
    //         find = true; bus[i][3] = '+'; bus[i][4] = '+';
    //     }
    //     if(find == true) break;
    // }
    // if(find == false){
    //     cout << "NO" << endl;
    // }else{
    //     cout << "YES" << endl;
    //     for(int i = 0; i < n; i++) cout << bus[i] << endl;
    // }
    // int n; cin >> n; vector<int> fibonacci(2, 1);
    // while(fibonacci[fibonacci.size() - 1] < 1000){
    //     fibonacci.push_back(fibonacci[fibonacci.size() - 2] + fibonacci[fibonacci.size() - 1]);
    // }
    // for(int i = 1; i < n + 1; i++){
    //     if(check(fibonacci, i)){
    //         cout << 'O';
    //     }else cout << 'o';
    // }
    //char cc[6] = {'a', 'e', 'o', 'u', 'i', 'y'};
    // int length; cin >> length;
    // string ss; cin >> ss;
    // if(check(ss) == false) ss = repl(ss);
    // cout << ss;
    // int cnt = 0;
    // vector<char> board(1, 'a');
    // for(int i = 0; i < 25; i++){
    //     char cc = board[board.size() - 1] + 1;
    //     board.push_back(cc);
    // }
    // string s; cin >> s;
    // bool found = false;
    // int length = s.size() - 1;
    // while(length > 0){
    //     for(int i = 0; i < s.size() - length + 1; i++){
    //         string ss = s.substr(i, length);
    //         if(count(s, ss) > 1){
    //             cout << length << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == true) break;
    //     length -= 1;
    // }
    // if(found == false) cout << 0 << endl;
    //int a, b, c; cin >> a >> b >> c; cout << 7*min(a, min(b / 2, c / 4));
    // string s; cin >> s;
    // cnt += min(find(s[0], board), 26 - find(s[0], board));
    // for(int i = 1; i < s.size(); i++){
    //     int st = find(s[i - 1], board);
    //     int en = find(s[i], board);
    //     int w1 = abs(st - en);
    //     int x = (25 - st) + (en + 1);
    //     int n = (st) + (26 - en);
    //     cnt += min(w1, min(x, n));
    // }
    // cout << cnt;
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // vector<int> dp(t, 1);
    // for(int i = 0; i < t; i++) dp[i] += count(a, t, i);
    // for(int i = 0; i < t; i++) cout << dp[i] << " ";
    // int t; cin >> t;
    // while(t--){
    //     int n; cin >> n; int length = len(n);
    //     int du = n / pow(10, length - 1);
    //     cout << 9 * (length - 1) + du << endl;
    // }
    // int a[4]; for(int i = 0; i < 4; i++) cin >> a[i]; sort(a, a + 4);
    // for(int i = 0; i < 3; i++) cout << a[3] - a[i] << " ";
    // int t; cin >> t;
    // while(t--){
    //     vector<int> res;
    //     int index; cin >> index; vector<int> a;
    //     while(index != 0){
    //         a.push_back(index % 10);
    //         index /= 10;
    //     }
    //     int cnt = 0;
    //     for(int i = 0; i < a.size(); i++){
    //         if(a[i] != 0){
    //             cnt += 1;
    //             res.push_back(a[i] * pow(10, i));
    //         }
    //     }
    //     cout << cnt << endl;
    //     for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    //     cout << endl;
    // }
    // int t; cin >> t; vector<int> a(t); for(int i = 0; i < t; i++) cin >> a[i];
    // int cnt = 0, maxVal = *max_element(a.begin(), a.end());
    // for(int i = 0; i < t; i++) cnt += maxVal - a[i];
    // cout << cnt;
    // vector<int> a; int st = 1;
    // while(a.size() <= 1000){
    //     if(st % 3 != 0 and st % 10 != 3) a.push_back(st);
    //     st += 1;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int n; cin >> n; cout << a[n - 1] << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     cout << "Division ";
    //     int index; cin >> index;
    //     if(index <= 1399){
    //         cout << 4;
    //     }else if(index >= 1400 and index <= 1599){
    //         cout << 3;
    //     }else if(index >= 1600 and index <= 1899){
    //         cout << 2;
    //     }else cout << 1;
    //     cout << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     char c; cin >> c;
    //     if(c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'e' || c == 's'){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; string s; cin >> s;
    //     set<char> c;
    //     for(int i = 0; i < s.size(); i++) c.insert(s[i]);
    //     cout << 2 * c.size() + s.size() - c.size() << endl;
    // }
    //g = b;
    // int t; cin >> t;
    // while(t--){
    //     int length; string a, b; cin >> length >> a >> b;
    //     for(int i = 0; i < length; i++){
    //         if(a[i] == 'G') a[i] = 'B';
    //         if(b[i] == 'G') b[i] = 'B';
    //     }
    //     if(a == b){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int n, dif; cin >> n >> dif; int a[2*n]; for(int i = 0; i < 2*n; i++) cin >> a[i];
    //     sort(a, a + 2*n); int st = 0; bool found = false;
    //     while(st < n){
    //         if(a[st + n] < a[st] + dif){
    //             cout << "NO" << endl;
    //             found = true;
    //             break;
    //         }
    //         st += 1;
    //     }
    //     if(found == false) cout << "YES" << endl;
    // }
    // int cash[5] = {100, 20, 10, 5, 1};
    // int cnt = 0, st = 0, n; cin >> n;
    // while(n != 0){
    //     if(n >= cash[st]){
    //         cnt += n / cash[st];
    //         n -= (n / cash[st]) * cash[st];
    //     }
    //     st += 1;
    // }
    // cout << cnt;
    // int t, cnt = 0; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     if(s == "Tetrahedron"){
    //         cnt += 4;
    //     }else if(s == "Cube"){
    //         cnt += 6;
    //     }else if(s == "Octahedron"){
    //         cnt += 8;
    //     }else if(s == "Dodecahedron"){
    //         cnt += 12;
    //     }else cnt += 20;
    // }
    // cout << cnt;
    // int t, cnt = 0; cin >> t; int a[t][2];
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t - 1; i++){
    //     for(int j = i + 1; j < t; j++){
    //         if(a[i][0] == a[j][1]) cnt += 1;
    //         if(a[i][1] == a[j][0]) cnt += 1;
    //     }
    // }
    // cout << cnt;
    // int n, m; cin >> n >> m; int a[m]; for(int i = 0; i < m; i++) cin >> a[i];
    // sort(a, a + m);
    // int minVal = 200000, st = n - 1;
    // for(int i = st; i < m; i++){
    //     if(a[i] - a[i - n + 1] < minVal) minVal = a[i] - a[i - n + 1];
    // }
    // cout << minVal;
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     cout << s[0];
    //     for(int i = 1; i < s.size() - 1; i += 2) cout << s[i];
    //     cout << s[s.size() - 1];
    //     cout << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length];
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     if(a[0] == a[1]){
    //         int st = 2;
    //         while(st < length){
    //             if(a[st] != a[0]){
    //                 cout << st + 1 << endl;
    //                 break;
    //             }
    //             st += 1;
    //         }
    //     }else{
    //         if(a[2] == a[0]){
    //             cout << 2 << endl;
    //         }else cout << 1 << endl;
    //     }
    // }
    // int t, maxVal = 0, count = 0; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b;
    //     count -= a - b;
    //     if(count > maxVal) maxVal = count;
    // }
    // cout << maxVal;
    // int n, t; cin >> n >> t; string s; cin >> s;
    // while(t--){
    //     int st = 0;
    //     while(st < s.size()){
    //         if(s[st] == 'B' and s[st + 1] == 'G'){
    //             s[st] = 'G'; s[st + 1] = 'B';
    //             st += 2;
    //         }else st += 1;
    //     }
    // }
    // cout << s;
    // int n, m; long long cnt = 0; cin >> n >> m; int a[m]; for(int i = 0; i < m; i++) cin >> a[i];
    // int st = 1;
    // for(int i = 0; i < m; i++){
    //     if(st <= a[i]){
    //         cnt += a[i] - st;
    //     }else cnt += (n - st) + a[i];
    //     st = a[i];
    // }
    // cout << cnt;
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index; cout << (index - 1) / 2 << endl;
    // }
    // int count = 0; int n; cin >> n;
    // while(n != 0){
    //     if(n % 2 == 1) count += 1;
    //     n /= 2;
    // }
    // cout << count << endl;
    // long long n; cin >> n;
    // cout << 25;
    // int t; cin >> t;
    // while(t--){
    //     int a[3]; for(int i = 0; i < 3; i++) cin >> a[i]; sort(a, a + 3);
    //     if(a[0] + a[1] == a[2]){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index;
    //     if(index % 3 == 0){
    //         cout << index / 3 << " " << index / 3 << endl;
    //     }else{
    //         if(index % 3 == 1){
    //             cout << index / 3 + 1 << " " << index / 3 << endl;
    //         }else cout << index / 3 << " " << index / 3 + 1 << endl;
    //     }
    // }
    // int n, k; cin >> n >> k; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int firstt = 0;
    // for(int i = 0; i < k; i++) firstt += a[i];
    // vector<int> dp(1, firstt);
    // //cout << firstt << endl;
    // for(int i = k - 1; i < n - 1; i++){
    //     int cc = dp[dp.size() - 1];
    //     cc -= a[i - k + 1];
    //     cc += a[i + 1];
    //     dp.push_back(cc);
    // }
    // //cout << endl;
    // int minn = *min_element(dp.begin(), dp.end());
    // int st = 0;
    // while(st < dp.size()){
    //     if(dp[st] == minn){
    //         cout << st + 1 << endl;
    //         break;
    //     }
    //     st += 1;
    // }
    // int n; cin >> n;
    // if(n >= 0){
    //     cout << n << endl;
    // }else cout << optimize(n) << endl;
    // int a[4]; for(int i = 0; i < 4; i++) cin >> a[i];
    // string s; cin >> s; int cnt = 0;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == '1'){
    //         cnt += a[0];
    //     }else if(s[i] == '2'){
    //         cnt += a[1];
    //     }else if(s[i] == '3'){
    //         cnt += a[2];
    //     }else cnt += a[3];
    // }
    // cout << cnt;
    // vector<char> board(1, 'A');
    // for(int i = 0; i < 25; i++){
    //     char cc = board[board.size() - 1] + 1;
    //     board.push_back(cc);
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     if(check(s, length, board)){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // vector<string> te;
    // vector<int> s (2, 0);
    // int t; cin >> t;
    // while(t--){
    //     string ss; cin >> ss;
    //     if(te.size() == 0){
    //         te.push_back(ss);
    //         s[0] += 1;
    //     }else if(te.size() == 1){
    //         if(te[0] == ss){
    //             s[0] += 1;
    //         }else{
    //             te.push_back(ss);
    //             s[1] += 1;
    //         }
    //     }else{
    //         if(te[0] == ss){
    //             s[0] += 1;
    //         }else s[1] += 1;
    //     }
    // }
    // if(s[0] > s[1]){
    //     cout << te[0];
    // }else cout << te[1];
    // int t; cin >> t;
    // while(t--){
    //     int a, b, c; cin >> a >> b >> c;
    //     cout << a * ((c - b) / a) + b << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int cnt = 0;
    //     int length; cin >> length; int k; cin >> k; int a[2][length];
    //     for(int i = 0; i < 2; i++){
    //         for(int j = 0; j < length; j++){
    //             cin >> a[i][j];
    //         }
    //     }
    //     sort(a[0], a[0] + length);
    //     sort(a[1], a[1] + length);
    //     //chon k phan tu to nhat trong 2 cai;
    //     int aa = 0;
    //     int bb = length - 1;
    //     while(k--){
    //         if(a[0][aa] >= a[1][bb]){
    //             break;
    //         }
    //         int tmp = a[0][aa];
    //         a[0][aa] = a[1][bb];
    //         a[1][bb] = tmp;
    //         aa += 1;
    //         bb -= 1;
    //     }
    //     sort(a[0], a[0] + length);
    //     for(int i = 0; i < length; i++) cnt += a[0][i];
    //     cout << cnt <<  endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s; int n = s.size();
    //     if(n % 2 == 1){
    //         cout << "NO" << endl;
    //     }else{
    //         int st = 0;
    //         bool find = false;
    //         while(st < n / 2){
    //             if(s[st] != s[st + n / 2]){
    //                 find = true;
    //                 cout << "NO" << endl;
    //                 break;
    //             }
    //             st += 1;
    //         }
    //         if(find == false) cout << "YES" << endl;
    //     }
    // }
    // int a[3];
    // int t; cin >> t;
    // while(t--){
    //     for(int i = 0; i < 3; i++) cin >> a[i];
    //     if(a[0] + a[1] == a[2]){
    //         cout << '+' << endl;
    //     }else cout << '-' << endl;
    // }
    // int n, m; cin >> n >> m; int st = 0;
    // while(n > 0){
    //     n -= 1; st += 1;
    //     if(st != 0 and st % m == 0) n += 1;
    // }
    // cout << st;
    // int a, b, hour = 0, burn = 0; cin >> a >> b;
    // while(a > 0){
    //     hour += a; burn += a;
    //     a = 0;
    //     a += burn / b;
    //     burn = burn % b;
    // }
    // cout << hour;
    // string name = "Timur"; int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     if(length != 5){
    //         cout << "NO" << endl;
    //     }else{
    //         vector<int> dp(length, -1);
    //         for(int i = 0; i < length; i++){
    //             if(check(name, s[i]) == true){
    //                 if(s[i] == 'T') dp[0] += 1; if(s[i] == 'i') dp[1] += 1; if(s[i] == 'm') dp[2] += 1;
    //                 if(s[i] == 'u') dp[3] += 1; if(s[i] == 'r') dp[4] += 1;
    //             }
    //         }
    //         int count = 0;
    //         for(int i = 0; i < 5; i++){
    //             if(dp[i] != 0) count += 1;
    //         }
    //         if(count == 0){
    //             cout << "YES" << endl;
    //         }else cout << "NO" << endl;
    //     }
    // }
    // string s; cin >> s; vector<int> dp(s.size(), 0);
    // for(int i = 1; i < s.size(); i++){
    //     if(s[i] == s[i - 1]) dp[i] = 1;
    // }
    // vector<int> count(1, 0);
    // for(int i = 1; i < s.size(); i++){
    //     int plus = 0;
    //     if(dp[i] == 1) plus += 1;
    //     count.push_back(count[count.size() - 1] + plus);
    // }
    // int t; cin >> t;
    // while(t--){
    //     int l, r; cin >> l >> r;
    //     cout << count[r - 1] - count[l - 1] << endl;
    // }
    //for(int i = 0; i < dp.size(); i++) cout << dp[i] << " ";
    //cout << endl;
    //for(int i = 0; i < count.size(); i++) cout << count[i] << " ";
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; string s; cin >> s; int x = 0, y = 0;
    //     bool found = false;
    //     for(int i = 0; i < length; i++){
    //         if(s[i] == 'U'){
    //             y += 1; if(check(x, y) == true) found = true;
    //         }else if(s[i] == 'D'){
    //             y -= 1; if(check(x, y) == true) found = true;
    //         }else if(s[i] == 'L'){
    //             x -= 1; if(check(x, y) == true) found = true;
    //         }else{
    //             x += 1; if(check(x, y) == true) found = true;
    //         }
    //     }
    //     if(found == true){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // vector<char> bcc(1, 'a');
    // for(int i = 0; i < 25; i++){
    //     char cc = bcc[bcc.size() - 1] + 1; bcc.push_back(cc);
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     int maxVal = find(s[0], bcc);
    //     for(int i = 1; i < s.size(); i++){
    //         int index = find(s[i], bcc);
    //         if(index > maxVal) maxVal = index;
    //     }
    //     cout << maxVal << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     int l = 0, r = length - 1;
    //     while(l < r){
    //         cout << a[l] << " " << a[r] << " ";
    //         l += 1;
    //         r -= 1;
    //     }
    //     if(length % 2 == 1) cout << a[l] << " ";
    //     cout << endl;
    // }
    //int n, m; cin >> n >> m;
    //1 -> 1; 0 
    //2 -> 2; 1
    //3 -> 2; 0 1
    //4 -> 3; 0 1 2
    //5 -> 3; 0 1 2 
    //6 -> 4; 0 1 2 3;
    // -> ways: (n - 1) / 2 + 1;
    // bool found = false;
    // int minValue = -1;
    // for(int i = 0; i * 2 <= n; i++){
    //     int s2 = i;
    //     int s1 = n - s2 * 2;
    //     int s = s1 + s2;
    //     if(s % m == 0){
    //         if(s < minValue || minValue == -1) minValue = s;
    //     }
    // }
    // cout << minValue;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     bool found = false;
    //     sort(a, a + length);
    //     for(int i = 0; i < length - 1; i++){
    //         if(a[i] == a[i + 1]){
    //             cout << "NO" << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == false) cout << "YES" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; string s; cin >> s;
    //     int l = 0, r = 0, cnt = 0;
    //     for(int i = 0; i < length; i++){
    //         if(s[i] == '('){
    //             l += 1;
    //         }else{
    //             r += 1;
    //             if(r > l){
    //                 cnt += 1;
    //                 r -= 1;
    //             }
    //         }
    //     }
    //     cout << cnt << endl;
    // }
    // int n, m, cnt = 0; cin >> n >> m; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int st = 0;
    // sort(a, a + n);
    // while(st < m and a[st] < 0){
    //     cnt -= a[st];
    //     st += 1;
    // }
    // cout << cnt;
    // int t; cin >> t;
    // while(t--){
    //     int n; cin >> n; bool found = false;
    //     for(int i = 0; i * 2020 <= n; i++){
    //         if((n - 2020 * i) % 2021 == 0){
    //             cout << "YES" << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(found == false) cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int x, y, a, b; cin >> x >> y >> a >> b;
    //     long long minVal = min(x, y);
    //     long long maxVal = max(x, y);
    //     2 cach; 
    //     min -> 0 sau do max -> 0;
    //     long long c1 = minVal * b;
    //     c1 += a * (maxVal - minVal);
    //     max -> 0 sau do min -> 0;
    //     long long c2 = maxVal * b;
    //     c2 += (maxVal - minVal) * a;
    //     long long c3 = (minVal + maxVal) * a;
    //     cout << min(c1, min(c2, c3)) << endl;
    // }
    // int t; cin >> t; int a[3];
    // while(t--){
    //     for(int i = 0; i < 3; i++) cin >> a[i];
    //     sort(a, a + 3);
    //     if(a[1] + a[2] > 9){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // string s = "codeforces";
    // int t; cin >> t;
    // while(t--){
    //     int cnt = 0; string ss; cin >> ss;
    //     for(int i = 0; i < s.size(); i++){
    //         if(ss[i] != s[i]) cnt += 1;
    //     }
    //     cout << cnt << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[2 * length]; for(int i = 0; i < 2 * length; i++) cin >> a[i];
    //     vector<int> dp(length, -1);
    //     for(int i = 0; i < 2 * length; i++){
    //         int index = a[i];
    //         if(dp[index - 1] == -1){
    //             cout << index << " ";
    //             dp[index - 1] = 0;
    //         }
    //     }
    //     cout << endl;
    // }
    // int t; cin >> t; string s; cin >> s; int s1 = 0, s0 = 0;
    // for(int i = 0; i < t; i++){
    //     if(s[i] == '0'){
    //         s0 += 1;
    //     }else s1 += 1;
    // }
    // cout << t - 2 * min(s1, s0);
    // int a, b, c;
    // cin >> a >> b >> c;
    // if(min(b, c) >= a){
    //     cout << "YES";
    // }else cout << "NO";
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     vector<int> dp(length, 0);
    //     for(int i = 0; i < length; i++){
    //         if(a[i] == 0) dp[i] = 1;
    //     }
    //     for(int i = 1; i < length; i++){
    //         if(a[i] == a[i - 1] and a[i] == 0 and dp[i] < dp[i - 1] + 1){
    //             dp[i] = dp[i - 1] + 1;
    //         }
    //     }
    //     cout << *max_element(dp.begin(), dp.end()) << endl;
    // }
    // int n, a, b, cnt = 0; cin >> n >> a >> b; int st = a + 1;
    // for(int i = st; i < n + 1; i++){
    //     int after = n - i;
    //     if(after <= b) cnt += 1;
    // }
    // cout << cnt;
    //9 4 3 -> 4
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; cout << length << " ";
    //     for(int i = 1; i < length; i++) cout << i << " ";
    //     cout << endl;
    // }
    // int n; cin >> n;
    // if(n % 2 == 1){
    //     cout << "Ehab" << endl;
    // }else cout << "Mahmoud" << endl;
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s; int b = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(s[i] == 'B') b += 1;
    //     }
    //     if(b == s.size() - b){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int t; cin >> t;
    // int minVal = 1000000, x = 1, y = 1;
    // for(int i = 1; i * i <= t; i++){
    //     if(t % i == 0){
    //         if(abs(i - (t / i)) < minVal){
    //             minVal = abs(i - (t / i));
    //             x = i;
    //             y = t / i;
    //         }
    //     }
    // }
    // cout << x << " " << y;
    // int n, m; cin >> n >> m; vector<string> mp(n); vector<int> x; vector<int> y;
    // for(int i = 0; i < n; i++){
    //     cin >> mp[i];
    //     for(int j = 0; j < m; j++){
    //         if(mp[i][j] == 'S'){
    //             x.push_back(i);
    //             y.push_back(j);
    //         }
    //     }
    // }
    // int cnt = n * m;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(check(x, i) == true and check(y, j) == true) cnt -= 1;
    //     }
    // }
    // cout << cnt;
    // int n, cnt = 0; cin >> n; vector<string> mp(n); for(int i = 0; i < n; i++) cin >> mp[i];
    // for(int row = 0; row < n; row++){
    //     int count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(mp[row][j] == 'C') count += 1;
    //     }
    //     cnt += (count * (count - 1)) / 2;
    // }
    // for(int x = 0; x < n; x++){
    //     int count = 0;
    //     for(int y = 0; y < n; y++){
    //         if(mp[y][x] == 'C') count += 1;
    //     }
    //     cnt += (count * (count - 1)) / 2;
    // }
    // cout << cnt;
    // int count = 0; string s; cin >> s;
    // while(s.size() != 1){
    //     s = change(s);
    //     count += 1;
    // }
    // cout << count;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; vector<int> a(length);
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     if(check(a) == true){
    //         cout << 0 << endl;
    //     }else{
    //         int minVal = a[1] - a[0];
    //         for(int i = 1; i < a.size(); i++){
    //             if(a[i] - a[i - 1] < minVal) minVal = a[i] - a[i - 1];
    //         }
    //         cout << minVal / 2 + 1 << endl;
    //     }
    // }
    // int t, a[3], d; cin >> t;
    // while(t--){
    //     for(int i = 0; i < 3; i++) cin >> a[i]; sort(a, a + 3); cin >> d;
    //     d -= 2 * a[2] - a[1] - a[0];
    //     if(d % 3 == 0 and d >= 0){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    //     //cout << (d % 3 == 0 && d >= 0 ? "YES" : "NO") << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int a, b; cin >> a >> b;
    //     if(a <= 2){
    //         cout << 1 << endl;
    //     }else{
    //         int left = a - 2;
    //         cout << (left % b == 0 ? 1 + left / b: 2 + left / b) << endl;
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index, count = 0; cin >> index;
    //     while(index % 3 == 0){
    //         if(index % 2 == 0){
    //             index /= 6;
    //         }else{
    //             index *= 2;
    //             index /= 6;
    //             count += 1;
    //         }
    //         count += 1;
    //     }
    //     if(index == 1){
    //         cout << count << endl;
    //     }else cout << -1 << endl;
    // }
    // long long x; cin >> x;
    // vector<int> a;
    // while(x != 0){
    //     a.push_back(x % 10);
    //     x /= 10;
    // }
    // reverse(a.begin(), a.end());
    // for(int i = 0; i < a.size(); i++){
    //     if(i == 0){
    //         if(a[i] == 9){
    //             cout << 9;
    //         }else cout << min(a[i], 9 - a[i]);
    //     }else cout << min(a[i], 9 - a[i]);
    // }
    // int n; cin >> n; int a[12]; for(int i = 0; i < 12; i++) cin >> a[i];
    // sort(a, a + 12);
    // for(int i = 10; i > -1; i--) a[i] += a[i + 1];
    // if(a[0] < n){
    //     cout << -1 << endl;
    // }else{
    //     if(n == 0) {
    //         cout << 0 << endl;
    //     }else{
    //         int st = 11;
    //         while(a[st] < n) st -= 1;
    //         cout << 12 - st;
    //     }
    // }
    // int t, index; cin >> t;
    // while(t--){
    //     cin >> index;
    //     if(index % 3 == 0){
    //         cout << index / 3 << endl;
    //     }else if(index % 3 == 2){
    //         cout << 1 + (index - 2) / 3 << endl;
    //     }else{
    //         //4 - 2 + 2
    //         //7 - 2 + 2 + 3
    //         //10 - 2 + 2 + 3 + 3;
    //         //13 - 2 + 2 + 3 + 3 + 3;
    //         if(index == 1){
    //             cout << 2 << endl;
    //         }else cout << (index - 4) / 3 + 2 << endl;
    //     }
    // }
    // int n; cin >> n; vector<int> a;
    // while(n != 0){
    //     a.push_back(n % 10);
    //     n /= 10;
    // }
    // reverse(a.begin(), a.end());
    // if(check(a) == false){
    //     cout << "NO" << endl;
    // }else{
    //     bool found = false;
    //     int st = 0;
    //     while(a[st] == 1){
    //         if(a[st + 1] == 4 and st + 1 < a.size()){
    //             if(a[st + 2] == 4 and st + 2 < a.size()){
    //                 st += 3;
    //             }else st += 2;
    //         }else st += 1;
    //     }
    //     if(st != a.size()) found = true;
    //     cout << (found == false ? "YES" : "NO") << endl;
    // }
    // int t, index; cin >> t;
    // while(t--){
    //     int length; cin >> length; for(int i = 0; i < length; i++) cin >> index;
    //     int left = 10 - length;
    //     cout << ((left * (left - 1)) / 2) * 6 << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     long long index; cin >> index; 
    //     double res = pow(2, index);
    //     cout << fixed << setprecision(0) << res - 1 << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length];
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     sort(a, a + length);
    //     vector<int> dp(length, 1);
    //     for(int i = 1; i < length; i++){
    //         if(dp[i] < dp[i - 1] + 1){
    //             if(a[i] > a[i - 1]){
    //                 dp[i] = dp[i - 1] + 1;
    //             }else dp[i] = dp[i - 1];
    //         }
    //     }
    //     cout << dp[dp.size() - 1] << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; vector<vector<int>> a(length, vector<int> (2));
    //     for(int i = 0; i < length; i++){
    //         for(int j = 0; j < 2; j++){
    //             cin >> a[i][j];
    //         }
    //     }
    //     int maxVal = -1, maxQ = -1;
    //     for(int i = 0; i < length; i++){
    //         int len = a[i][0];
    //         int q = a[i][1];
    //         if(len <= 10 and q > maxQ){
    //             maxVal = i + 1;
    //             maxQ = q;
    //         }
    //     }
    //     cout << maxVal << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length];
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     for(int i = 0; i < length; i++){
    //         int c; string s; cin >> c >> s;
    //         a[i] = change(a[i], c, s);
    //     }
    //     for(int i = 0; i < length; i++) cout << a[i] << " "; cout << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     vector<string> s(8);
    //     for(int i = 0; i < 8; i++) cin >> s[i];
    //     int x = -1, y = -1;
    //     for(int i = 0; i < 8; i++){
    //         for(int j = 0; j < 8; j++){
    //             if(s[i][j] != '.'){
    //                 x = i;
    //                 y = j;
    //                 break;
    //             }
    //             if(x != -1) break;
    //         }
    //         if(x != -1) break;
    //     }
    //     if(x == -1){
    //         cout << "" << endl;
    //     }else{
    //         string a = ""; a += s[x][y];
    //         int stx = x + 1;
    //         while(stx < 8){
    //             if(s[stx][y] == '.') break;
    //             a += s[stx][y];
    //             stx += 1;
    //         }
    //         cout << a << endl;
    //     }
    // }
    // string s = "314159265358979323846264338327"; int t; cin >> t;
    // while(t--){
    //     string ss; cin >> ss;
    //     int cnt = 0, st = 0
    //     while(st < ss.size()){
    //         if(ss[st] != s[st]) break;
    //         cnt += 1;
    //         st += 1;
    //     }
    //     cout << cnt << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     bool found = false;
    //     vector<string> mp(8); for(int i = 0; i < 8; i++) cin >> mp[i];
    //     for(int i = 1; i < 7; i++){
    //         for(int j = 1; j < 7; j++){
    //             if(mp[i - 1][j - 1] == '#' and mp[i - 1][j + 1] == '#' and mp[i + 1][j - 1] == '#' and mp[i + 1][j + 1] == '#'){
    //                 cout << i + 1 << " " << j + 1 << endl;
    //                 found = true;
    //                 break;
    //             }
    //             if(found == true) break;
    //         }
    //         if(found == true) break;
    //     }
    // }
    // int a, b, c; cin >> a >> b >> c;
    // int x1 = a + b + c;
    // int x2 = 2 * a + 2 * b;
    // int x3 = 2 * a + 2 * c;
    // int x4 = 2 * b + 2 * c;
    // cout << min(x1, min(x2, min(x3, x4))) << endl;
    // int n, b, d; cin >> n >> b >> d; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int trash = 0, cnt = 0;
    // for(int i = 0; i < n; i++){
    //     if(a[i] <= b){
    //         if(trash + a[i] > d){
    //             trash = 0;
    //             cnt += 1;
    //         }else trash += a[i];
    //     }
    // }
    //cout << cnt;
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index; set<int> s;
    //     for(int i = 1; i * i <= index; i++) s.insert(i * i);
    //     for(int i = 1; i * i * i <= index; i++) s.insert(i * i * i);
    //     cout << s.size() << endl;
    // }
    // int n, m; cin >> n >> m; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++){
    //     if(a[i] % m == 0){
    //         a[i] /= m;
    //     }else a[i] = a[i] / m + 1;
    // }
    // int maxVal = -1, index = -1;
    // for(int i = 0; i < n; i++){
    //     if(a[i] >= maxVal){
    //         index = i;
    //         maxVal = a[i];
    //     }
    // }
    // cout << index + 1;
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // vector<int> dp(t, 1);
    // for(int i = 1; i < t; i++){
    //     if(a[i] == a[i - 1]) dp[i] = dp[i - 1] + 1;
    // }
    // cout << *max_element(dp.begin(), dp.end()) << endl;
    // int length; cin >> length; string s; cin >> s; int maxVal = -1; string res = "  ";
    // for(int i = 0; i < s.size() - 1; i++){
    //     int cnt = 0;
    //     for(int j = 0; j < s.size() - 1; j++){
    //         if(s[i] == s[j] and s[i + 1] == s[j + 1]) cnt += 1;
    //     }
    //     if(cnt > maxVal){
    //         maxVal = cnt;
    //         res[0] = s[i];
    //         res[1] = s[i + 1];
    //     }
    // }
    // cout << res;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; vector<int> a(length);
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     int maxVal = *max_element(a.begin(), a.end());
    //     int count = 0;
    //     for(int i = 0; i < length; i++){
    //         if(a[i] == maxVal) count += 1;
    //     }
    //     int sec;
    //     if(count == 1){
    //         vector<int> b = a;
    //         sort(b.begin(), b.end());
    //         sec = b[b.size() - 2];
    //     }
    //     for(int i = 0; i < length; i++){
    //         if(a[i] != maxVal){
    //             cout << a[i] - maxVal << " ";
    //         }else{
    //             //maxVal;
    //             if(count == 1){
    //                 cout << maxVal - sec << " ";
    //             }else cout << 0 << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // int t, st = 0; string s; cin >> t;
    // while(t--){
    //     cin >> s;
    //     if(s[1] == '+'){
    //         st += 1;
    //     }else st -= 1;
    // }
    // cout << st;
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     for(int i = 0; i < length; i++){
    //         if(s[i] == 'U'){
    //             cout << 'D';
    //         }else if(s[i] == 'D'){
    //             cout << 'U';
    //         }else cout << s[i];
    //     }
    //     cout << endl;
    // }
    // int t; cin >> t; int a[2][2];
    // while(t--){
    //     int cnt = 0;
    //     for(int i = 0; i < 2; i++){
    //         for(int j = 0; j < 2; j++){
    //             cin >> a[i][j];
    //             if(a[i][j] == 1) cnt += 1;
    //         }
    //     }
    //     if(cnt == 0){
    //         cout << 0 << endl;
    //     }else if(cnt == 1 || cnt == 2 || cnt == 3){
    //         cout << 1 << endl;
    //     }else cout << 2 << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     bool found = false;
    //     for(int i = 0; i < s.size() - 1; i++){
    //         if(s[i] != s[i + 1]){
    //             cout << i + 1 << " " << i + 2 << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if(!found) cout << -1 << " " << -1 << endl;
    // }
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // sort(a, a + t);
    // vector<int> dp(t, 1);
    // for(int i = 1; i < t; i++){
    //     if(a[i] == a[i - 1]) dp[i] = dp[i - 1] + 1;
    // }
    // cout << *max_element(dp.begin(), dp.end());
    // int st; cin >> st;
    // while(1){
    //     if(sum(st) % 4 == 0){
    //         cout << st << endl;
    //         break;
    //     }
    //     st += 1;
    // }
    // int t; cin >> t;
    // while(t--){
    //     string s1, s2; cin >> s1 >> s2;
    //     set<char> s;
    //     for(int i = 0; i < s1.size(); i++) s.insert(s1[i]);
    //     for(int i = 0; i < s2.size(); i++) s.insert(s2[i]);
    //     if(s.size() == 1){
    //         cout << 0 << endl;
    //     }else if(s.size() == 2){
    //         cout << 1 << endl;
    //     }else if(s.size() == 3){
    //         cout << 2 << endl;
    //     }else cout << 3 << endl;
    // }
    // int t; cin >> t; int aa[t]; for(int i = 0; i < t; i++) cin >> aa[i];
    // vector<int> a;
    // for(int i = t - 1; i > -1; i--){
    //     if(find(a, aa[i]) == false) a.push_back(aa[i]);
    // }
    // cout << a.size() << endl;
    // for(int i = a.size() - 1; i > -1; i--) cout << a[i] << " ";
    // int t; cin >> t;
    // while(t--) {
    //     string a = "";
    //     int length; cin >> length; string s; cin >> s;
    //     for(int i = 0; i < length; i++) s[i] = tolower(s[i]);
    //     a += s[0];
    //     for(int i = 1; i < length; i++){
    //         if(s[i] != s[i - 1]) a += s[i];
    //     }
    //     cout << (a == "meow" ? "YES" : "NO") << endl;
    // }
    // int t, cnt = 0; cin >> t; int a[t]; 
    // for(int i = 0; i < t; i++){
    //     cin >> a[i];
    //     if(a[i] == 1) cnt += 1;
    // }
    // cout << cnt << endl;
    // for(int i = 0; i < t - 1; i++){
    //     if(a[i + 1] == 1){
    //         cout << a[i] << " ";
    //     }
    // }
    // cout << a[t - 1] << endl;
    // int n, m; cin >> n >> m;
    // vector<int> a(n); vector<int> b(m);
    // for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < m; i++) cin >> b[i];
    // for(int i = 0; i < n; i++){
    //     if(find(b, a[i])){
    //         cout << a[i] << " ";
    //     }
    // }
    // int t, a, b, a1 = 0, a2 = 0; cin >> t;
    // while(t--){
    //     cin >> a >> b;
    //     if(a > b){
    //         a1 += 1;
    //     }else if(a < b){
    //         a2 += 1;
    //     }
    // }
    // if(a1 == a2){
    //     cout << "Friendship is magic!^^" << endl;
    // }else cout << (a1 > a2 ? "Mishka" : "Chris") << endl;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; vector<int> a(length);
    //     for(int i = 0; i < length; i++) cin >> a[i];
    //     int maxVal = *max_element(a.begin(), a.end());
    //     int minVal = *min_element(a.begin(), a.end());
    //     cout << maxVal - minVal << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int a, b, c; cin >> a >> b >> c;
    //     int meat = b + c;
    //     cout << (a >= meat + 1 ? 2*meat + 1 : 2*a - 1) << endl;
    // }
    // int n, m, a, b; cin >> n >> m >> a >> b;
    // int w1 = n*a; //only use normal;
    // int w2 = n / m;
    // if(n % m != 0) w2 += 1;
    // w2 *= b;
    // int w3 = ((n/m)*b) + (n - (n/m)*m)*a;
    // cout << min(w1, min(w2, w3));
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // sort(a, a + t);
    // cout << a[t - 1] - a[0] - t + 1 << endl;
    // int t; cin >> t;
    // while(t--){
    //     long long a, b; cin >> a >> b; cout << -1*a*a << " " << b*b << endl;
    // }
    // int a, b; cin >> a >> b;
    // cout << (noz(a) + noz(b) == noz(a + b) ? "YES" : "NO") << endl;
    // int n, s = 0; cin >> n; int a[n]; 
    // for(int i = 0; i < n; i++){
    //     cin >> a[i]; s += a[i];
    // }
    // sort(a, a + n);
    // int st = a[n - 1];
    // int op = s;
    // while(st * n - s <= s) st += 1;
    // cout << st;

}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}