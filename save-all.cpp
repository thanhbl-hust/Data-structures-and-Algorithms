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
// bool count(int n, vector<int> a){
// 	int s = 0;
// 	for(int i = 0; i < n; i++) s += a[i];
// 	if(s == a[n]) return false;
// 	return true;
// }
// bool check1(vector<int> a){
// 	sort(a.begin(), a.end());
// 	if(a[0] == a[a.size() - 1]) return true;
// 	return false;
// }
// void show(int n, vector<int> a){
// 	//n is length of vector<int> a;	
// 	if(n == 2 && a[0] == a[1] || check1(a)){
// 		cout << "NO" << endl;
// 	}else{
// 		cout << "YES" << endl;
// 		int st = 1;
// 		while(st < n){
// 			if(count(st, a) == false) break;
// 			st += 1;
// 		}
// 		if(st == n){
// 			for(int i = 0; i < n; i++) cout << a[i] << " ";
// 		}else{
// 			sort(a.begin(), a.end());
// 			cout << a[n - 1] << " ";
// 			for(int i = 0; i < n - 1; i++) cout << a[i] << " ";
// 		}
// 		cout << endl;
// 	}
// }
// int solution(int n, int m, int sx, int sy, int d){
//     //n m la kich thuoc
//     //n ngang, m doc
//     //sx,sy la dia chi laser xuat phat
//     if(d == 0){
//         return n + m - 2;
//     }else{
//         if(((sx + d >= n) and (sy + d >= m)) or ((sx - d <= 1) and (sy - d <= 1))){ //chan 2 goc
//             return -1;
//         }else if((sx - d <= 1) and (sx + d >= n)){
//             return -1;
//         }else if((sy - d <= 1) and (sy + d >= m)){
//             return -1;
//         }else return n + m - 2;
//     }
// }
// bool check(vector<int> a, int d){
//     int length = a.size();
//     for(int i = 0; i < length; i++){
//         if(a[i] > d) return false;
//     }
//     return true;
// }
// void show(vector<int> a, int d){
//     sort(a.begin(), a.end());
//     if(check(a, d) == true){
//         cout << "YES" << endl;
//     }else{
//         if(a[0] + a[1] > d){
//             cout << "NO" << endl;
//         }else cout << "YES" << endl;
//     }
// }
// int gcd(int a, int b){
//     return b == 0 ? a : gcd(b, a % b);   
// }
// int gsum(vector<int> a){
//     int length = a.size(), sum = 0;
//     for(int i = 0; i < length; i++) sum += a[i];
//     return sum;
// }
// int solution(vector<int> a){
//     int length = a.size();
//     if(gsum(a) % length == 0){
//         int count = 0, alleq = gsum(a) / length;
//         for(int i = 0; i < length; i++){
//             if(a[i] > alleq) count += 1;
//         }
//         return count;
//     }else return -1;
// }
// int solution(vector<int> a){
// 	int length = a.size(), odd = 0; // le
// 	for(int i = 0; i < length; i++){
// 		if(a[i] % 2 == 1) odd += 1;
// 	}
// 	int even = length - odd;
// 	return min(odd, even);
// }
// long long gs(vector<int> a, int start, int end){
//     long long sum = 0;
//     for(int i = start; i <= end; i++) sum += a[i];
//     return sum;
// }
// long long solution(int n, int k, vector<int> a){
//     if(a.size() <= k){
//         return gs(a, 0, a.size() - 1);
//     }else{
//         for(int i = 0; i < a.size() - k; i++){
//             if(a[i] > a[i + k]){
//                 int tmp = a[i];
//                 a[i] = a[i + k];
//                 a[i + k] = tmp;
//             }
//         }
//         return gs(a, a.size() - k , a.size() - 1);
//     }
// }
// bool check(vector<int> a, int n){
// 	if(n >= a[0] && n <= a[1]) return true;
// 	return false;
// }
// int maxHeightcanbuild(vector<vector<int>> a, int h, int n){
// 	int maxMoney = h;	
// 	//solution;
// 	for(int i = 0; i < a.size(); i++){
// 		if(n >= a[i][0] && n <= a[i][1]){
// 			if(a[i][2] < maxMoney) maxMoney = a[i][2];
// 		}
// 	}	
// 	return maxMoney * maxMoney;
// }
// int solution(vector<vector<int>> v){
// 	int length = v[0].size();
// 	int a1 = 0, b1 = 0, differ = 0;
// 	for(int i = 0; i < length; i++){
// 		if(v[0][i] == 1) a1 += 1;
// 		if(v[1][i] == 1) b1 += 1;
// 		if(v[0][i] != v[1][i]) differ += 1;
// 	}
// 	if(a1 == b1){
// 		if(differ != 0) return 1;
//         return 0;
// 	}else{
// 		//a1 != b1;
// 		if(abs(a1 - b1) == differ) return differ;
//         return abs(a1 - b1) + 1;
// 	}
// }
// int solution(vector<int> a){
// 	if((a[0] == 1) and (a[1] == 1)){
// 		return 0;
// 	}else if((a[0] == 1) or ((a[1]) == 1)){
// 		return max(a[0], a[1]);
// 	}else{
// 		if(a[0] == a[1]){
// 			return 3*a[0] - 2;
// 		}else{
// 			int m = max(a[0], a[1]);
// 			int mi = min(a[0], a[1]);
// 			return 2*mi + m - 2;
// 		}
// 	}
// }
// vector<int> smaller(int n){
// 	vector<int> a; int i = 9;
// 	while(1){
// 		if(n > i){
// 			n -= i;
// 			a.push_back(i);
// 			i -= 1;
// 		}else if(n == i){
// 			a.push_back(i);
// 			break;
// 		}else{ // n < i
// 			a.push_back(n);
// 			break;
// 		}
// 	}
// 	return a;
// }
// int solution(vector<int> a){
// 	int res = 0;
// 	int length = a.size();
// 	sort(a.begin(), a.end());
// 	for(int i = 0; i < length; i++) res += a[i] * pow(10, length - i - 1);
// 	return res;
// }
// int solution(vector<int> a){
//     if(a[0] == a[1]){
//         return 4 * a[1] * a[1];
//     }else{
//         int large = max(a[0], a[1]);
//         int small = min(a[0], a[1]);
//         if(2 * small >= large) return 4 * small * small;
//         return large * large;
//     }
// }
// long long solution(int a[50], int b[50], int m){
//     int mina = *min_element(a, a + m);
//     int minb = *min_element(b, b + m);
//     int c[30];
//     long long value = 0;
//     for(int i = 0; i < m; i++){
//         if((a[i] != mina) and (b[i] != minb)){
//             value += abs(a[i] - mina) + abs(b[i] - minb) - min(abs(a[i] - mina), abs(b[i] - minb));
//         }else value += abs(a[i] - mina) + abs(b[i] - minb);
//     }
//     return value;
// }
// int solution(int a[1000], int num){
//     int minn = a[1] - a[0];
//     for(int i = 1; i < num - 1; i++){
//         if(a[i + 1] - a[i] < minn) minn = a[i + 1] - a[i];
//     }
//     return minn;
// }
// int devidebytwo(int x){
//     if(x % 2 == 1){
//         return 0;
//     }else{
//         int div = 1;
//         while(1){
//             if(x % 2 == 1) return div;
//             x /= 2;
//             div *= 2;
//         }
//     }
// }
// void solution(vector<int> a){
//     int x = a[0];
//     int y = a[1];
//     int frie = a[2];
//     if((x % 2 == 1) and (y % 2 == 1)){
//         if(frie == 1){
//             cout << "YES" << endl;
//         }else cout << "NO" << endl;
//     }else{
//         int x1 = devidebytwo(x);
//         int x2 = devidebytwo(y);
//         int impos = 0;
//         if((x1 != 0) and (x2 != 0)){
//             impos +=  x1 * x2;
//         }else impos += max(x1, x2);
//         if(impos >= frie){
//             cout << "YES" << endl;
//         }else cout << "NO" << endl;
//     }
// }
// int solution(vector<int> a){
//     //a[0] = 1;
//     //a[1] = 2;
//     if((a[0] == 0) and (a[1] == 0)){
//         return 1;
//     }else if((a[0] == 0) or (a[1] == 0)){
//         if(a[0] == 0) return 1;
//         return a[0] + 1;
//     }
//     return a[0] + 2 * a[1] + 1;
// }
// int solution(vector<int> a){
//     int aa = a[0], bb = a[1];
//     // steps to make a == b;
//     // plus le
//     // minus chan
//     if(aa == bb){
//         return 0;
//     }else{
//         if(aa < bb){
//             int diff = bb - aa;
//             if(diff % 2 == 1) return 1;
//             return 2;
//         }else{
//             int diff = aa - bb;
//             if(diff % 2 == 0) return 1;
//             return 2;
//         }
//     }
// }
// int solution(vector<int> a){
// 	int value = 0, length = a.size();
// 	vector<int> dev;
// 	for(int i = 0; i < length - 1; i++){
// 		int small = min(a[i], a[i + 1]), big = max(a[i], a[i + 1]);
// 		if(2 * small < big){
// 			if(big % small == 0){
// 				dev.push_back(big / small);
// 			}else dev.push_back((int)big / small + 1);
// 		}
// 	}
// 	int lengthRes = dev.size();
// 	for(int i = 0; i < lengthRes; i++){
// 		//dev[i] is times bigger;
// 		int pow_2 = 2, plus = 1;
// 		while(dev[i] > pow(2, pow_2)){
// 			plus += 1;
// 			pow_2 += 1;
// 		}
// 		value += plus;
// 	}
// 	return value;
// }
// void show(int a[1000], int length, int x){
//     //chon x phan tu tu a va nhan duoc so le
//     int odd = 0;
//     for(int i = 0; i < length; i++){
//         if(a[i] % 2 == 1) odd += 1;
//     }
//     int even = length - odd;
//     //dieu kien tao so le la so chan la chan so le la le
//     if(odd == 0){
//         cout << "No" << endl;
//     }else{
//         //chac chan la phai lay so le cac so le
//         //x chan thi phai chon ca 2 cai deu le
//         //x le thi so chan chan so le le
//         int check = 0;
//         for(int i = 0; i <= even; i++){
//             for(int j = 0; j <= odd; j++){
//                 if(i + j == x){
//                     if(x % 2 == 0){
//                         if(i % 2 == 1 && j % 2 == 1){
//                             check += 1;
//                             break;
//                         }
//                     }else{
//                         //x le
//                         if(i % 2 == 0 && j % 2 == 1){
//                             check += 1;
//                             break;
//                         }
//                     }
//                 }
//             }
//         }
//         cout << (check == 0 ? "NO" : "YES") << endl;
//     }
// }
// void show(vector<int> a, int length){
// 	//length : size of a;
// 	int first = 0, second = 0, third = 0, check = -1;
// 	for(int i = 1; i < length - 1; i++){
// 		//res.push_back(a[i]);
// 		int head = -1; //tim phan tu dung truoc va nho hon
// 		int last = -1; //tim phan dung sau va nho hon
// 		int h = 0; //phan tu de duyet dau
// 		int l = i + 1; //phan tu de duyet cuoi;
// 		while(h < i){
// 			if(a[h] < a[i]){
// 				head = h;
// 				break;
// 			}
// 			h += 1;
// 		}
// 		while(l < length){
// 			if(a[l] < a[i]){
// 				last = l;
// 				break;
// 			}
// 			l += 1;
// 		}
// 		if(head != -1 && last != -1){
// 			first = head;
// 			second = i;
// 			third = last;
// 			check += 1; // da tim duoc
// 			break;
// 		}
// 	}
// 	if(check == -1){
// 		cout << "NO" << endl;
// 	}else{
// 		cout << "YES" << endl;
// 		cout << first + 1 << " " << second + 1<< " " << third + 1 << endl;
// 	}
// }
// int solution(vector<int> a){
// 	int length = a.size();
// 	if(length == 1){
// 		if(a[0] == 0) return 1;
// 		return 0;
// 	}
// 	int count = 0; // dem so lan xuat hien 1;
// 	for(int i = 0; i < length; i++){
// 		if(a[i] == 1) count += 1;
// 	}
// 	if(count == length) return length - 1;
// 	int bonus = 0;
// 	//bay gio trong moi doan can biet tang duoc bao nhieu
// 	for(int i = 0; i < length; i++){
// 		for(int j = i; j < length; j++){
// 		    int count1 = 0;
// 			for(int k = i; k <= j; k++)	{
// 				if(a[k] == 1) count1 += 1;
// 			}
// 			if(j - i + 1 - count1 > count1){ // 0 appear > 1 appear;
// 				if(j - i + 1 - 2 * count1 > bonus){ //bonus them = 0 appear - 1 appear
// 					bonus = 	j - i + 1 - 2 * count1;
// 				}
// 			}
// 		}
// 	}
// 	return count + bonus;
// }
// bool check(vector<int> a){
// 	return is_sorted(begin(a), end(a));
// }
// void show(vector<vector<int>> a){
// 	int length = a.size(), checkk = 0;
// 	for(int i = 0; i < length; i++){
// 		if(check(a[i]) == false){
// 			checkk += 1;
// 			cout << "Happy Alex" << endl;
// 		}
// 		if(checkk != 0) break;
// 	}
// 	if(checkk == 0) cout << "Poor Alex" << endl;
// }
// void show(vector<int> a){
//     int length = a.size(), minValue = *min_element(a.begin(), a.end());
//     sort(a.begin(), a.end());
//     int start = 0, acc = 0;
//     while(a[start] <= minValue && start <= length - 1){
//         start += 1;
//         acc += 1;
//     }
//     cout << length - acc << endl;
// }
// int solution(int t, string s){
// 	int value = 0;
// 	for(int i = 0; i < t; i++){
// 		if(s[i] == '+'){
// 			value += 1;
// 		}else{
// 			if(value > 0) value -= 1;
// 		}
// 	}
// 	return value;
// }
// void show(vector<string> a){
// 	if(a.size() == 1){
// 		cout << a[0][0] << a[0][1] << 'a' << endl;
// 	}else{
// 		int st, count = 0, start = 0; 
//         while(start < a.size() - 1){
//             if(a[start][1] != a[start + 1][0]){
//                 st = start;
//                 count += 1;
//                 break;
//             }
//             start += 1;
//         }
//         vector<char> res;
//         if(count == 0){
//             res.push_back(a[0][0]);
//             for(int i = 0; i < a.size(); i++) res.push_back(a[i][1]);
//             res.push_back(a[a.size() - 1][1]);
// 	    }else{
// 		    res.push_back(a[0][0]);
// 		    for(int i = 0; i < a.size(); i++){
// 			    if(i == start + 1){
// 				    res.push_back(a[i][0]);
// 				    res.push_back(a[i][1]);
// 			    }else res.push_back(a[i][1]);
// 		    }
// 	    }
//         for(int i = 0; i < res.size(); i++) cout << res[i];
//         cout << endl;
// 	}
// }
// void show(long long n, long long k){
// 	cout << n / (2 * (k + 1)) << " " << (n / (2 * (k + 1))) * k << " " << n - (n / (2 * (k + 1))) * k - n / (2 * (k + 1)) << endl;
// }
// int minValuee(vector<int> a){
// 	int maxValue = a[1] - a[0];
// 	for(int i = 0; i < a.size() - 1; i++){
// 		if(a[i + 1] - a[i] > maxValue) maxValue = a[i + 1] - a[i];
// 	}
// 	return maxValue;
// }
// vector<int> popp(vector<int> a, int n){
// 	a.erase(a.begin() + n); return a;
// }
// int solution(vector<int> a){
// 	int minValue = 10001;
// 	for(int i = 1; i < a.size() - 1; i++){
// 		vector<int> b = popp(a, i);
// 		int value = minValuee(b);
// 		if(value < minValue) minValue = value;
// 	}
// 	return minValue;
// }
// int solution(vector<vector<int>> a){
// 	int money = 0;
// 	//sum: all meat need to eat;
// 	int start = 0;
// 	while(start < a.size()){
// 		money += a[start][0] * a[start][1];
// 		int check = a[start][1], bonus = 1;
// 		while(start + bonus < a.size()){
// 			if(a[start + bonus][1] < check) break;
// 			money += a[start + bonus][0] * check;
// 			bonus += 1;
// 		}
// 		start += bonus;
// 	}
// 	return money;
// }
// bool check(vector<int> a, int n){
// 	if(n >= min(a[0], a[1]) && n <= max(a[1], a[0])) return true;
// 	return false;
// }
// int solution(int t, int x0, vector<vector<int>> v){
// 	int value = -1, start = 0, c = 0;
// 	for(int i = 0; i < t; i++){
// 		if(check(v[i], x0) == true) c += 1;
// 	}
// 	if(c == t) return 0;
// 	vector<int> res;
// 	while(start <= 1000){
// 		int count = 0;
// 		for(int i = 0; i < t; i++){
// 			if(check(v[i], start) == true) count += 1;
// 		}
// 		if(count == t){
// 			value = abs(start - x0);
// 			res.push_back(value);
// 		}
// 		start += 1;
// 	}
// 	if(res.size() == 0){
// 		return -1;
// 	}else{
// 		sort(res.begin(), res.end());
// 		return res[0];
// 	}
//     return -1;
// }
// int solution(vector<int> v){
// 	int l =  v[0], r = v[1];
// 	if(l == r){
// 		if(l % 2 == 1) return -1 * l;
// 		return l;
// 	}else{
// 		//l < r;
// 		if((r - l) % 2 == 1){
// 			//co chan chu so can tinh tong;
// 			int number = r - l + 1;
// 			if(l % 2 == 0) return -1*number / 2;
// 			return number / 2;
// 		}else{
// 			//co le chu so can tinh;
// 			int number = r - l + 1;
// 			//number la mot so le;
// 			if(l % 2 == 0) return -1*number / 2 + r;
// 			return number / 2 - r;
// 		}
// 	}
// }
// int counting(vector<int> a){
//     int value = 1;
//     for(int i = 1; i < a.size(); i++){
//         if(a[i] != a[i - 1]) value += 1;
//     }
//     return value;
// }
// int solution(vector<int> a){
//     sort(a.begin(), a.end());
//     for(int i = 1; i < a.size(); i++){
//         if(a[i] == a[i - 1]) a[i] *= -1;
//     }
//     sort(a.begin(), a.end());
//     return counting(a);
// }
// int counting(vector<int> a){
//     int count = 0;
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] % 2 == 0) count += 1;
//     }
//     return count;
// }
// void show(vector<int> a){
//     vector<int> odd; vector<int> even;
//     int t = a.size();
//     for(int i = 0; i < t; i++){
//         if(i % 2 == 0){
//             even.push_back(a[i]);
//         }else odd.push_back(a[i]);
//     }
//     if((counting(odd) != 0 && counting(odd) != odd.size()) or (counting(even) != 0 && counting(even) != even.size())){
//         cout << "NO" << endl;
//     }else cout << "YES" << endl;
// }
// int solution(int n, int m, int r, int c, vector<string> a){
// 	if(a[r - 1][c - 1] == 'B') return 0; //already;
// 	int count = 0;
// 	for(int i = 0; i < n; i++){
// 		for(int j = 0; j < m; j++){
// 			if(a[i][j] == 'B') count += 1;
// 			if(count == 1) break;
// 		}
// 		if(count == 1) break;
// 	}
// 	if(count == 0) return -1;
// 	for(int i = 0; i < m; i++){
// 		if(a[r - 1][i] == 'B') return 1;
// 	}
// 	for(int i = 0; i < n; i++){
// 		if(a[i][c - 1] == 'B') return 1;
// 	}
// 	return 2;
// }
// int solution(int a, int b, int c){
// 	if(c < a) return -1; //no;
// 	if(c == a) return 1;
// 	//c > a;
// 	int left = c - a;
// 	if(c < a + b) return -1;
// 	if(left % b == 1 || left % b == 0) return 1;
// 	return -1;
// }
// void solution(long long a, long long b, long long c){	
// 	//float c1 = a;
// 	//float c2 = c / b;
// 	if(a * b == c){
// 		if(c > 1){
// 			cout << 1 << " " << -1 << endl;
// 		}else cout << -1 << " " << -1 << endl;
// 	}else if(c > a * b){
// 		cout << 1 << " " << -1 << endl;
// 	}else{
// 		int value = 1;
// 		if(a >= c) value = -1;
// 		cout << value << " " << b << endl;
// 	}
// }
// void solution(vector<int> a){
// 	int n = a[0], k = a[1], count = 0;
// 	for(int i = 0; i < n; i++){
// 		for(int j = 0; j < n; j++){
// 			if(i == j && i % 2 == 0 && count < k){
// 				cout << 'R';
// 				count += 1;
// 			}else cout << '.';
// 		}
// 		cout << endl;
// 	}
// } 
// void show(vector<int> a){
// 	int n = a[0], k = a[1];
// 	if(n % 2 == 0 && k > (n / 2)){
// 		cout << -1 << endl;
// 	}else if(n % 2 == 1 && n != 1 && k > ((n / 2) + 1)){
// 		cout << -1 << endl;
// 	}else solution(a);
// }
// long long solution(int n, int k, vector<long long> a){
// 	long long sum = 0; sort(a.begin(), a.end());
// 	int start = 1;
// 	while(start < n){
// 		if((a[start] - a[0]) % k != 0) return -1;
// 		start += 1;
// 	}
// 	for(int i = 1; i < n; i++) sum += (a[i] - a[0]) / k;
// 	return sum;
// }
// bool check(vector<int> a){
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] % 2 == 0) return true;
// 	}
// 	return false;
// }
// int solution(int n){
// 	vector<int> digits;
// 	while(n != 0){
// 		digits.push_back(n % 10);
// 		n /= 10;
// 	}
// 	if(check(digits) == false) return -1;
// 	if(digits[digits.size() - 1] % 2 == 0) return 1;
// 	return 2;
// }
// int i,j,k,n,m,t,a[66666],b[66666];
// int solution(int t, string s){
// 	return 1 + t;
// }
// long long solution(int n, long long b[200000], vector<int> buy){
// 	int x = buy[0]; //buy most expensive;
// 	int y = buy[1]; //sum of y items in x expensive;
// 	long long all_money = 0;
// 	if(x == n){
// 		all_money += b[n - 1];
// 	}else all_money += b[n - 1] - b[n - 1 - x];
// 	//all money is money to buy most expensive x items;
// 	if(x == y) return all_money;
// 	// all - (x - y) most expensive;
// 	return all_money - (b[n - 1] - b[n - 1 - (x - y)]);
// }
// bool check(vector<int> a, int n){
// 	if(n == a[0] || n == a[1]) return true;
// 	return false;
// }
// void show(int length, vector<int> a){
// 	cout << (a[0] == 1 ? "YES" : "NO") << endl;
// }
// int strTonum(char s){
// 	if(s == '1') return 1;
// 	if(s == '2') return 2;
// 	if(s == '3') return 3;
// 	if(s == '4') return 4;
// 	if(s == '5') return 5;
// 	if(s == '6') return 6;
// 	if(s == '7') return 7;
// 	if(s == '8') return 8;
// 	if(s == '9') return 9;
// 	return -1;
// }
// int solution(int n, int m, vector<string> s){	
// 	set<int> count;
// 	for(int i = 0; i < m; i++){
// 		vector<int> score;
// 		for(int j = 0; j < n;  j++){
// 			int sc = strTonum(s[j][i]);
// 			score.push_back(sc);
// 		}
// 		int maxScore = *max_element(score.begin(), score.end());
// 		for(int j = 0; j < n; j++){
// 			if(score[j] == maxScore) count.insert(j);
// 		}
// 	}
// 	return count.size();
// }
// void show(int t){
// 	int weeks = t / 7;
// 	int left = t - weeks * 7;
// 	int maxValue, minValue;
// 	if(left == 1){
// 		maxValue = 1;
// 		minValue = 0;
// 	}else if(left >= 2 && left <= 5){
// 		maxValue = 2;
// 		minValue = 0;
// 	}else if(left == 6){
// 		minValue = 1;
// 		maxValue = 2;
// 	}
// 	if(t % 7 == 0){
// 		cout << t * 2 / 7 << " " << t * 2 / 7 << endl;
// 	}else cout << weeks * 2 + minValue << " " << weeks * 2 + maxValue<< endl;
// }
// int g(int a){
// 	int gt = 1;
// 	for(int i = 2; i <= a; i++) gt *= i;
// 	return gt;
// }
// int solution(int t, vector<vector<int>> a){
// 	int n1 = 0, n2 = 0;
// 	for(int i = 0; i < t; i++){
// 		if(a[0][i] > a[1][i]) n1 += 1;
// 		if(a[0][i] < a[1][i]) n2 += 1;
// 	}
// 	if(n1 == 0) return -1;
// 	if(n2 == 0) return 1;
// 	//n1 != 0 and n2 != 0;
// 	int start = n2;
// 	if(n2 % n1 == 0){
// 		return n2 / n1 + 1;
// 	}else{
// 		n2 += n1 - (n2 % n1);
// 		return n2 / n1;
// 	}
// }
// bool check(char a[5], char s){
// 	for(int i = 0; i < 5; i++){
// 		if(a[i] == s) return true;
// 	}
// 	return false;
// }
// void show(string s){
// 	char a[5] = {'u', 'e', 'o', 'a', 'i'};
// 	if(s.size() == 1){
// 		char c = s[0];
// 		if(check(a, c) == false && c != 'n'){
// 			cout << "NO" << endl;
// 		}else cout << "YES" << endl;
// 	}else if(check(a, s[s.size() - 1]) == false && s[s.size() - 1] != 'n'){
// 		cout << "NO" << endl;
// 	}
// 	else{
//         int c = 0, start = 0;
//         while(start < s.size() - 1){
//             char check1 = s[start];
//             char c1 = s[start + 1];
//             if(check(a, check1) == false && check1 != 'n' && check(a, c1) == false){
//                 cout << "NO" << endl;
// 			    c += 1;
// 			    break;
//       		}
// 		    start += 1;
// 	    }
// 	    if(c == 0) cout << "YES" << endl;
// 	}
// }
// void show(int a, int b){
// 	if(a + 1 == b){
// 		cout << a << " " << b << endl;
// 	}else if(a == 9 && b == 1){
// 		cout << 9 << " " << 10 << endl;
// 	}else if(a == b){
// 		cout << 10 * a + 1 << " " << 10 * a + 2 << endl;
// 	}else cout << -1 << endl;
// }
// bool check(vector<int> a, int n){
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] == n) return true;
// 	}
// 	return false;
// }
// int solution(vector<int> a, vector<int> b){
// 	for(int i = 1; i < 10; i++){
// 		if(check(a, i) == true && check(b, i) == true) return i;
// 	}
// 	int mina = *min_element(a.begin(), a.end());
// 	int minb = *min_element(b.begin(), b.end());
// 	if(mina == minb) return mina;	
// 	return min(mina, minb) * 10 + max(mina, minb);
// }
// void show(int n, int m, vector<vector<string>> root, vector<vector<string>> user){
// 	for(int i = 0; i < m; i++){
// 		string check = user[i][1];
// 		check.pop_back();
// 		int start = 0;
// 		while(start < n){
// 			if(check == root[start][1]) break;
// 			start += 1;
// 		}
// 		string last = '#' + root[start][0];
// 		cout << user[i][0] << " " << user[i][1] << " " << last << endl;
// 	}
// }
// void show(string s){
// 	int count = 0;
// 	for(int i = 0; i < s.size(); i++){
// 		if(s[i] == 'N') count += 1;
// 	}
// 	if(count == 1){
// 		cout << "NO" << endl;
// 	}else cout << "YES" << endl;
// }
// int o(int n){
// 	int ii = 1;
// 	for(int i = 1; i <= n; i++) ii *= 2;
// 	return ii;
// }
// int solution(int n, int m){
// 	if(n >= 27) return m;
// 	return m % o(n);
// }
// string takeString(string s, int start, int last){
// 	string str_check = "";
// 	for(int i = start; i < last; i++){
// 		char c = s[i];
// 		str_check.push_back(c);
// 	}
// 	return str_check;
// }
// bool checkPalin(string s){
// 	string s1 = s;
// 	reverse(s.begin(), s.end());
// 	if(s == s1) return true;
// 	return false;
// }
// int solution(string s){
// 	int maxLen = 0;
// 	int max_pos = s.size();
// 	for(int i = 1; i <= s.size(); i++){
// 		for(int j = 0; j < s.size() - i + 1; j++){
// 			string s1 = takeString(s, j, j + i);
// 			if(checkPalin(s1) == false){
// 				if(s1.size() > maxLen) maxLen = s1.size();
// 			}
// 		}
// 	}
// 	return maxLen;
// }
// int solution(vector<int> a){
// 	int c = 0, value = -1;
// 	vector<int> b = a;
// 	sort(b.begin(), b.end());
// 	if(b[0] == b[b.size() - 1]) return value;
// 	int maxindex = 0, start = 0;
// 	while(start < a.size()){
// 		if(a[start] == b[b.size() - 1]){
// 			if((start - 1 >= 0 && a[start] > a[start - 1]) || (start + 1 < a.size() && a[start] > a[start + 1])) return start + 1;
// 		}
// 		start += 1;
// 	}
// 	return -1;
// }
// void show(int n){
// 	int c = 0;
// 	for(int i = 0; i*3 <= n; i++){
// 		for(int j = 0; i*3 + j*7 <= n; j++){
// 			if(i*3 + j*7 == n){
// 				c += 1;
// 				cout << "YES" << endl;
// 			}
// 			if(c == 1) break;
// 		}
// 		if(c == 1) break;
// 	}
// 	if(c == 0) cout << "NO" << endl;
// }
// void s(long long index){
// 	int t = 0;
// 	while(index % 2 == 0) index /= 2;
// 	if(index % 2 == 1 && index != 1){
// 		cout << "YES" << endl;
// 	}else cout << "NO" << endl;
// }
// int solution(int length, vector<vector<int>> a){
// 	long long maxValue = a[0][1] + a[0][0]; 
// 	int maxOX = a[0][0];
// 	int maxOY = a[0][1];
// 	for(int i = 1; i < length; i++){
// 		long long l = a[i][1] + a[i][0];
// 		if(l > maxValue){
// 			maxValue = l;
// 			maxOX = a[i][0];
// 			maxOY = a[i][1];
// 		}
// 	}	
// 	return maxOX + maxOY;
// }
// int solution(vector<int> a){
// 	int st = 0;
// 	int n = a[0];
// 	int m = a[1];
// 	while(n > 0 && m > 0){
// 		if(n >= m){
// 			st += n / m;
// 			n = n % m;
// 		}else{
// 			st += m / n;
// 			m = m % n;
// 		}
// 	}
// 	return st;
// }
// long long gs(vector<int> a){
// 	long long sum = 0;
// 	for(int i = 0; i < a.size(); i++) sum += a[i];
// 	return sum;
// }
// void solution(int n, vector<int> a, int q, vector<vector<int>> que){
// 	long long sumofA = gs(a);
// 	//n: length of vector<int> a;
// 	//q: length of vector<vector<int>> que;
// 	int odd = 0, even = 0;
// 	for(int i = 0; i < n; i++){
// 		if(a[i] % 2 == 0) even += 1;
// 	}
// 	odd = n - even;
// 	for(int i = 0; i < q; i++){
// 		if(que[i][0] == 0){
// 			//add to even number;
// 			sumofA += even * que[i][1];
// 			if(que[i][1] % 2 == 1){
// 				odd += even;
// 				even = 0;
// 			}
// 			cout << sumofA << endl;
// 		}else{
// 			//add to odd;
// 			sumofA += odd * que[i][1];
// 			if(que[i][1] % 2 == 1){
// 				even += odd;
// 				odd = 0;
// 			}
// 			cout << sumofA << endl;
// 		}
// 	}
// }
// void show(vector<int> a){
// 	int n1 = 0, n0 = 0;
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] == 1) n1 += 1;
// 		if(a[i] == 0) n0 += 1;
// 	}
// 	if(n1 == 0){
// 		cout << 0 << endl;
// 	}else if(n0 == 0){
// 		cout << n1 << endl;
// 	}else{
// 		//n1 != 0 and n0 != 0;
// 		//value = n1 * (so cach chon 0 phan tu);	
// 		long long value = n1 * pow(2, n0);
// 		cout << value << endl;	
// 	}
// }
// int solution(vector<int> a, int n, int m, int k){
// 	int value = 0;
// 	int start = 0;
// 	while(start < n){
// 		if(a[start] == 1){
// 			if(m > 0){
// 				m -= 1;
// 			}else value += 1;
// 		}else{
// 			//a[start] == 2;
// 			if(k > 0){
// 				k -= 1;
// 			}else{
// 				if(m > 0){
// 					m -= 1;
// 				}else value += 1;
// 			}
// 		}
// 		start += 1;
// 	}
// 	return value;
// }
// void solution(int n){
// 	int c = 0;
// 	for(int i = 0; i * 3 <= n; i++){
// 		for(int j = 0; i*3 + j*5 <= n; j++){
// 			for(int k = 0; i*3 + j*5 + k*7 <= n; k++){
// 				if(i*3 + j*5 + k*7 == n){
// 					cout << i << " " << j << " " << k << endl;
// 					c += 1;
// 				}
// 				if(c == 1) break;
// 			}
// 			if(c == 1) break;
// 		}
// 		if(c == 1) break;
// 	}
// 	if(c == 0) cout << -1 << endl;
// }
// bool checkprime(int n){
// 	if(n == 2) return true;
// 	for(int i = 2; i <= n / 2 + 1; i++){
// 		if(n % i == 0) return false;
// 	}
// 	return true;
// }
// void show(int index){
// 	vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};	
// 	if(checkprime(index) == true){
// 		for(int i = 1; i <= index; i++){
// 			for(int j = 1; j <= index; j++) cout << 1 << " ";
// 			cout << endl;
// 		}
// 	}else{
// 		//index khong phai la so nguyen to;
// 		int start = primes.size();
// 		while(start >= 1){
// 			if(checkprime(primes[start] - index + 1) == false) break;
// 			start -= 1;
// 		}
// 		for(int i = 1; i <= index; i++){
// 			for(int j = 1; j <= index; j++){
// 				if(i == j) cout << primes[start] - index + 1 << endl;
// 				else cout << 1 << " ";
// 			}
// 			cout << endl;
// 		}	
// 	}
// }
// int solution(vector<int> v){
// 	int number = 2 * abs(v[0] - v[1]);
// 	for(int i = 0; i < 3; i++){
// 		if(v[i] > number) return -1;
// 	}
// 	if(v[2] <= number / 2){
// 		return v[2] + number / 2;
// 	}else return v[2] - number / 2;
// }
// int solution(vector<int> v){
// 	int length = v.size();
// 	int sum = 0;
// 	for(int i = 0; i < length; i++) sum  += v[i];
// 	if(sum % length == 0) return 0;
// 	return 1;
// }
// int calculate(int n){
// 	int t = 1;
// 	for(int i = 1; i <= n; i++) t *= 2;
// 	return t;
// }
// int solution(int n){
// 	//2 ** 1 -> 2 ** n;	
// 	int sum1 = 0, sum2 = 0;
// 	for(int i = 1; i < n / 2; i++) sum1 += calculate(i);
// 	sum1 += calculate(n);
// 	for(int i = n / 2; i < n; i++) sum2 += calculate(i);
// 	return sum1 - sum2;
// }
// int solution(vector<int> v){
// 	int pos = v[0]; //position of A;
// 	int dif = v[1]; //|OB - BA| = k;
// 	if(pos <= dif) return dif - pos;
// 	//dif < pos;
// 	if((dif + pos) % 2 == 0) return 0;
// 	return 1;
// }
// int count(vector<int> a){
// 	int count = 1;
// 	for(int i = 1; i < 4; i++){
// 		if(a[i] != a[i - 1]) count += 1;
// 	}
// 	return count;
// }
// int solution(int n){
// 	if(n == 1) return 1;
// 	int sum = 0;
// 	sum += 2 * n - 1; //middle row
// 	int bonus = 1;
// 	for(int i = 1; i < n; i++){
// 		sum += bonus * 2;
// 		bonus += 2;
// 	}
// 	return sum;
// }
// void show(vector<int> a){
// 	int length_a_to_b = a[0] + a[1], m = 0;
// 	for(int i = 0; i <= a[0]; i++){
// 		int n = 0;
// 		for(int j = 0; j <= a[1]; j++){
// 			if(i + j == a[1] + a[0] - i - j){
// 				cout << i << " " << j << endl;
// 				n += 1;
// 				break;
// 			}
// 		}
// 		if(n == 1){
// 			m += 1;
// 			break;
// 		}
// 	}
// 	if(m == 0) cout << -1 << " " << -1 << endl;
// }
// void show(vector<string> a){
// 	string s1 = a[0], s2 = a[1];
// 	if(s1 == s2){
// 		cout << '=' << endl;
// 	}else{
// 		//truong hop khac nhau
// 		char size1 = s1[s1.size() - 1], size2 = s2[s2.size() - 1];
// 		if(size1 == size2){
// 			if(size1 == 'L'){
// 				if(s1.size() > s2.size()){
// 					cout << '>' << endl;
// 				}else cout << '<' << endl;
// 			}else{
// 				if(s1.size() > s2.size()){
// 					cout << '<' << endl;
// 				}else cout << '>' << endl;
// 			}
// 		}else{
// 			//size1 != size2
// 			if(size1 != 'M' and size2 != 'M'){
// 				if(size1 == 'L'){
// 					cout << '>' << endl;
// 				}else cout << '<' << endl;
// 			}else{
// 				if(size1 == 'M'){
// 					if(size2 == 'L'){
// 						cout << '<' << endl;
// 					}else cout << '>' << endl;
// 				}else{
// 					if(size1 == 'L'){
// 						cout << '>' << endl;
// 					}else cout << '<' << endl;
// 				}
// 			}
// 		}
// 	}
// }
// bool check(vector<int> a, int n){
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] == n) return false;
// 	}
// 	return true;
// }
// vector<vector<int>> getNeighbor(int n, int m, int i, int j){
// 	vector<vector<int>> location;
// 	//i: row
// 	//j: column
// 	if(i - 1 >= 0){
// 		vector<int> a;
// 		a.push_back(i - 1);
// 		a.push_back(j);
// 		location.push_back(a);
// 	}
// 	if(i + 1 < n){
// 		vector<int> a;
// 		a.push_back(i + 1);
// 		a.push_back(j);
// 		location.push_back(a);
// 	}
// 	if(j - 1 >= 0){
// 		vector<int> a;
// 		a.push_back(i);
// 		a.push_back(j - 1);
// 		location.push_back(a);
// 	}
// 	if(j + 1 < m){
// 		vector<int> a;
// 		a.push_back(i);
// 		a.push_back(j + 1);
// 		location.push_back(a);
// 	}
// 	return location;
// }
// void show(int n, int m, vector<string> s){
// 	int c = 0;
// 	vector<string> res = s;
// 	for(int i = 0; i < n; i++){
// 		for(int j = 0; j < m; j++){
// 			if(s[i][j] == 'S'){
// 				vector<vector<int>> neighbor = getNeighbor(n, m, i, j); //location of neighbor;
// 				for(int k = 0; k < neighbor.size(); k++){
// 					if(s[neighbor[k][0]][neighbor[k][1]] == 'W'){
// 						c += 1;
// 						cout << "NO" << endl;
// 						break;
// 					}else if(s[neighbor[k][0]][neighbor[k][1]] == '.'){
// 						res[neighbor[k][0]][neighbor[k][1]] = 'D';
// 					}
// 				}
// 			}
// 			if(c == 1) break;
// 		}
// 		if(c == 1) break;
// 	}
// 	if(c == 0){
// 		cout << "YES" << endl;
// 		for(int i = 0; i < n; i++) cout << res[i] << endl;
// 	}
// }
// void show(int length, vector<vector<string>> a){
// 	for(int i = 0; i < length; i++){
// 		if(a[i][1] == "rat") cout << a[i][0] << endl;
// 	}
// 	for(int i = 0; i < length; i++){
// 		if(a[i][1] == "woman" || a[i][1] == "child") cout << a[i][0] << endl;
// 	}
// 	for(int i = 0; i < length; i++){
// 		if(a[i][1] == "man") cout << a[i][0] << endl;
// 	}
// 	int st = 0;
// 	while(st < length){
// 		if(a[st][1] == "captain") cout << a[st][0] << endl;
// 		st += 1;
// 	}
// }
// int solution(string s1, string s2){
// 	int length = 0;, es1 = s1.size() - 1, es2 = s2.size() - 1;
// 	while(es1 >= 0 && es2 >= 0){
// 		if(s1[es1] != s2[es2]) break;
// 		length += 1;
// 		es1 -= 1;
// 		es2 -= 1;
// 	}
// 	if(length == 0) return s1.size() + s2.size();
// 	return s1.size() + s2.size() - 2 * length;
// }
// void show(int length, vector<int> a){
// 	int start = 0, end = length - 1;
// 	while(start < end){
// 		while(start < length){
// 			if(a[start] >= 0) break;
// 			start += 1;
// 		}
// 		while(end > 0){
// 			if(a[end] < 0) break;
// 			end -= 1;
// 		}
// 		if(start < end){
// 			a[start] *= -1;
// 			a[end] *= -1;
// 		}
// 	}
// 	vector<int> b = a;
// 	sort(b.begin(), b.end());
//     cout << (b == a ? "YES" : "NO") << endl;
// }
// void show(string s){
// 	int start = 0;
// 	while(start < s.size() - 1){
// 		if(s[start] != s[start + 1]) break;
// 		start += 1;
// 	}
// 	if(start == s.size() - 1){
// 		cout << "-1" << endl;
// 	}else{
// 		if(s[0] != s[s.size() - 1]){
// 			cout << s << endl;
// 		}else{
// 			int st = s.size() - 2;
// 			while(st > 0){
// 				if(s[st] != s[s.size() - 1]){
// 					char c = s[st];
// 					s[st] = s[s.size() - 1];
// 					s[s.size() - 1] = c;
// 					break;
// 				}
// 				st -= 1;
// 			}
// 			cout << s << endl;
// 		}
// 	}
// }
// void show(vector<long long> a){
// 	long long minus = abs(a[0] - a[1]);
// 	cout << (minus == 1 ? "NO" : "YES") << endl;
// }
// long long solution(vector<vector<int>> a){
// 	long long sum = 0;
// 	int length = a[1].size();
// 	for(int i = 0; i < length - 1; i++){
// 		for(int j = 0; j < 2; j++){
// 			sum += abs(a[j][i + 1] - a[j][i]);
// 		}
// 	}
// 	return sum;
// }
// vector<vector<int>> change_vector(vector<vector<int>> a){
// 	//a[0] is smaller vector;
// 	int length = a[1].size();
// 	for(int i = 0; i < length; i++){
// 		if(a[0][i] > a[1][i]){
// 			int tmp = a[0][i];
// 			a[0][i] = a[1][i];
// 			a[1][i] = tmp;
// 		}
// 	}
// 	return a;
// }
// long long solution(long long a, long long b){
// 	if(a == 0 || b == 0) return 0;
// 	long long minVal = min(a, b);
// 	long long maxVal = max(a, b);
// 	if(maxVal == minVal) return (2 * minVal) / 4;
// 	if(minVal * 3 <= maxVal) return minVal;
// 	//maxVal < 3 * minVal;
// 	return (maxVal + minVal) / 4;
// }
// bool check(vector<int> a){
// 	for(int i = 1; i < a.size(); i++){
// 		if(a[i] % a[0] != 0) return false;
// 	}
// 	return true;
// }
// void show(vector<int> v){
// 	int a = v[0];
// 	int b = v[1];
// 	int c = v[2];
// 	if(c - b == b - a){
// 		cout << "YES" << endl;
// 	}else{
// 		if((c + a) % 2 == 0 and ((c + a) / 2) % b == 0){
// 			cout << "YES" << endl;
// 		}else if((b - (c - b)) % a == 0 and (b - (c - b)) > 0){
// 			cout << "YES" << endl;
// 		}else if((b + (b - a)) % c == 0 and (b + (b - a)) > 0){
// 			cout << "YES" << endl;
// 		}else cout << "NO" << endl;
// 	}
// }
// void show(int length){
// 	if(length == 1){
// 		cout << 1 << endl;
// 		cout << "1 2" << endl;
// 	}else{
// 		if(length % 2 == 0){
// 			cout << length / 2 << endl;
// 		}else cout << length / 2 + 1 << endl;
// 		int end = 3 * length;
// 		int start = 2;
// 		while(start < end){
// 			cout << start << " " << end << endl;
// 			start += 3;
// 			end -= 3;
// 		}
// 	}
// }
// int solution(vector<int> t){
//     int a = t[0], b = t[1], n = t[2];
//     int count = 0;
//     while((a <= n) and (b <= n)){
//         if(a >= b){
//             b += a;
//             count += 1;
//         }else{
//             a += b;
//             count += 1;
//         }
//     }
//     return count;
// }
// int solution(vector<int> a){
//     int length = a.size(), sum = 0;
//     for(int i = 0; i < length; i++) sum += a[i];
//     if(sum == length){
//         return 0;
//     }else if(sum > length){
//         return sum - length;
//     }else return 1;
// }
// int solution(vector<int> a, int length){
//     //length is just size of a
//     int up = 0;
//     //int down = 0;
//     for(int i = 0; i < length; i++){
//         if(a[i] == 1 || a[i] == 3) up += 1;
//     }
//     return up;
// }
// int solution(string s){
//     int length = s.size();
//     int num1 = 0;
//     for(int i = 0; i < length; i++){
//         if(s[i] == '1') num1 += 1;
//     }
//     int num0 = length - num1;
//     if(num0 == num1) return num1 - 1;
//     return min(num1, num0);
// }
// long long solution(vector<long long> a){
//     long long n = a[0]; // hang = 3
//     long long m = a[1]; // cot = 5
//     long long x = a[2]; // value = o x;
//     long long cot = 0;
//     long long hang = 0;
//     //tinh cot; 
//     if(x % n == 0){
//         cot += x / n;
//     }else cot += x / n + 1; 
//     long long times = x / n;
//     if(x % n == 0){
//         hang += n;
//     }else hang += x % n; 
//     return cot + (hang - 1)*m;
// }
// void show(vector<int> a){
//     if(2 * a[0] > a[1]){
//         cout << -1 << " " << -1 << endl;
//     }else cout << a[0] << " " << 2*a[0] << endl;
// }
// long long solution(vector<long long> a){
//     //so du khi chia cho n co the la [1, 2, ... n - 1];
//     if(a[1] == 1) return 1;
//     //solve
//     long long sodu = 0;
//     if(a[1] % (a[0] - 1) == 0){
//         sodu += a[0] - 1;
//     }else sodu += a[1] % (a[0] - 1);
//     long long main = 0;
//     if(a[1] % (a[0] - 1) == 0){
//         main += (a[1] / (a[0] -  1)) - 1;
//     }else main += a[1] / (a[0] - 1);
//     return sodu + main * a[0];
// }
// void show(int t){
// 	if(t % 4 == 1){
// 		cout << 0 << " " << 'A' << endl;
// 	}else if(t % 4 == 0){
// 		cout << 1 << " " << 'A' << endl;
// 	}else if(t % 4 == 2){
// 		cout << 1 << " " << 'B' << endl;
// 	}else cout << 2 << " " << 'A' << endl;
// }
// int solution(int n){
//     if(n % 7 == 0){
//         return n;
//     }else{
//         int finalNum = n % 10;
//         int div7 = n % 7; //so du khi chia het cho 7
//         int canplus = 7 - div7; //cong vao thi chia het cho 7;
//         if(finalNum - div7 >= 0) return n - div7;
//         if(finalNum + canplus <= 9) return n + canplus;
//     }
//     return -1;
// }
// long long solution(vector<long long> a){
//     long long right = a[0];
//     long long left = a[1];
//     long long step = a[2];
//     if(step % 2 == 0){
//         return step / 2 * (right - left);
//     }else return step / 2 * (right - left) + right;
// }
// void show(vector<long long> a){
//     if(a[0] == a[1]){
//         cout << "YES" << endl;
//     }else{
//         if(max(a[0], a[1]) > min(a[0], a[1]) * (1 + a[2])){
//             cout << "NO" << endl;
//         }else cout << "YES" << endl;
//     }
// }
// void show(long long n, long long m){
//     if((n / m) % 2 == 0){
//         cout << "NO" << endl;
//     }else cout << "YES" << endl;
// }
// int count(string s, int n){
//     int count = 0, length = s.size();
//     if(n - 1 >= 0 && s[n - 1] == '1') count += 1;
//     if(n + 1 <= length - 1 && s[n + 1] == '1') count += 1;
//     return count;
// }
// string show(string s, int length){
//     string res = "", duplicate = s;
//     for(int i = 0; i < length; i++){
//         if(duplicate[i] == '0' && count(duplicate, i) == 1){
//             res += '1';
//         }else res += s[i];
//     }
//     return res;
// }
// string truesol(string s, long long loops){
//     int length = s.size();
//     vector<string> a;
//     int start = 0;
//     while(start <= loops - 1){
//         s = show(s, length); //a[start];
//         a.push_back(s);
//         if(a.size() > 1){
//             if(a[start] == a[start - 1]){
//                 return a[start];
//                 break;
//             }
//         }
//         start += 1;
//     }
//     return a[start - 1];
// } 
// int solution(long long n){
//     int step = 0;
//     while(n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
//         if(n % 2 == 0){
//             n /= 2;
//             step += 1;
//         }else if(n % 3 == 0){
//             n = 2 * n / 3;
//             step += 1;
//         }else{
//             n = 4 * n / 5;
//             step += 1;
//         }
//     }
//     if(n == 1){
//         return step;
//     }
//     return -1;
// }
// int solution(vector<int> a, int skill){
//     int solved = 0, length = a.size(), start = 0;
//     while(start <= length - 1){
//         if(a[start] > skill) break;
//         start += 1;
//         solved += 1;
//     }
//     int end = length - 1;
//     while(end >= start){
//         if(a[end] > skill) break;
//         end -= 1;
//         solved += 1;
//     }
//     return solved;
// }
// void show(int n, int x, int a[50], int b[50]){
//     sort(a, a + n); sort(b, b + n); // sort 2 arrays;
//     int i = 0, check = 0;
//     while(i < n){
//         if(a[i] + b[n - i - 1] > x){
//             check += 1;
//             cout << "NO" << endl;
//             break;
//         }
//         i += 1;
//     }
//     if(check == 0) cout << "YES" << endl;
// }
// void show(int n){
// 	if(n % 2 == 0){
// 		for(int i = 1; i <= n; i++){
// 			if(i % 2 == 0){
// 				cout << i - 1 << " ";
// 			}else cout << i + 1 << " ";
// 		}
// 		cout << endl;
// 	}else{
// 		for(int i = 1; i <= n; i++){
// 			if(i == 1 || i == 2 || i == 3){
// 				if(i == 1){
// 					cout << 3 << " ";
// 				}else if(i == 2){
// 					cout << 1 << " ";
// 				}else cout << 2 << " ";
// 			}else{
// 				if(i % 2 == 0){
// 					cout << i + 1 << " ";
// 				}else cout << i - 1 << " ";
// 			}
// 		}
// 		cout << endl;
// 	}
// }
// void show(vector<int> a){
// 	int length = a.size();
// 	if(a[0] + a[1] > a[length - 1]){
// 		cout << -1 << endl;
// 	}else cout << 1 << " " << 2 << " " << length << endl;
// }
// int solution(int length, int a[100], int f, int l){
//     if(f == l){
//         return 0;
//     }else{
//         int all = 0;
//         for(int i = 0; i < length; i++) all += a[i];
//         //se co 2 cach di chuyen
//         int minVal = min(f, l);
//         int maxVal = max(f, l);
//         //tim cach di chuyen tu min den max;
//         int d1 = 0;
//         //int d2 = 0;
//         //solution;
//         for(int i = minVal - 1; i < maxVal - 1; i++) d1 += a[i];
//         int d2 = all - d1;
//         return min(d1, d2);
//     }
// }
// int solution(vector<int> a, int length){
//     //length: length of vector a;
//     int minVal = *min_element(a.begin(), a.end());
//     int maxVal = *max_element(a.begin(), a.end());
//     int ma = 0, mi = 0;
//     while(ma < length){
//         if(a[ma] == maxVal) break;
//         ma += 1;
//     }
//     while(mi < length){
//         if(a[mi] == minVal) break;
//         mi += 1;
//     }
//     //ma, mi is location of min and max value of vector;
//     int both = min(mi, ma) + 1 + (length - max(mi, ma)); // di qua 2 thang qua 2 dau;
//     int frommin = max(mi, ma) + 1;
//     int frommax = length - min(mi, ma);
//     return min(both, min(frommax, frommin));
// }
// string solution(int t, string s){
// 	string res = "";
// 	int length = 1;
// 	int start = 0;
// 	while(start < t){
// 		res += s[start];
// 		start += length;
// 		length += 1;
// 	}
// 	return res;
// }
// void show(vector<int> a){
// 	int l1 = a[0], r1 = a[1], l2 = a[2], r2 = a[3];
// 	cout << a[0] << " ";
// 	int i = a[2];
// 	while(i <= a[3]){
// 		if(i != a[0]){
// 			cout << i << endl;
// 			break;
// 		}
// 		i += 1;
// 	}
// }
// void show(vector<int> a, int length){
// 	//length : size of a;
// 	int first = 0, second = 0, third = 0, check = -1;
// 	for(int i = 1; i < length - 1; i++){
// 		//res.push_back(a[i]);
// 		int head = -1; //tim phan tu dung truoc va nho hon
// 		int last = -1; //tim phan dung sau va nho hon
// 		int h = 0; //phan tu de duyet dau
// 		int l = i + 1; //phan tu de duyet cuoi;
// 		while(h < i){
// 			if(a[h] < a[i]){
// 				head = h;
// 				break;
// 			}
// 			h += 1;
// 		}
// 		while(l < length){
// 			if(a[l] < a[i]){
// 				last = l;
// 				break;
// 			}
// 			l += 1;
// 		}
// 		if(head != -1 && last != -1){
// 			first = head;
// 			second = i;
// 			third = last;
// 			check += 1; // da tim duoc
// 			break;
// 		}
// 	}
// 	if(check == -1){
// 		cout << "NO" << endl;
// 	}else{
// 		cout << "YES" << endl;
// 		cout << first + 1 << " " << second + 1<< " " << third + 1 << endl;
// 	}
// }
// int find_length(int n){
// 	int count = 0;
// 	while(1){
// 		if(n == 0) break;
// 		count += 1;
// 		n /= 10;
// 	}
// 	return count;
// }
// void show(int b, int k, vector<int> a){
//     int odd = 0, sum = 0;
//     for(int i = 0; i < k - 1; i++) sum += a[i];
//     if(b % 2 == 0){
//     	if(a[k - 1] % 2 == 1) odd += 1;
//     }else{
//     	//b la so le
//     	if(sum % 2 == 0 && a[k - 1] % 2 == 1) odd += 1;
// 		if(sum % 2 == 1 && a[k - 1] % 2 == 0){
// 			int count = 0;
// 			for(int i = 0; i < k - 1; i++){
// 				if(a[i] % 2 == 1) count += 1;
// 			}
// 			if(count % 2 == 1) odd += 1;
// 		}
//     }
//     if(odd == 0){
//         cout << "even" << endl;
//     }else cout << "odd" << endl;
// }
// int solution(int n, string s){
//     if(s[0] == '0'){
//         return 1;
//     }else{
//         int start = 1;
//         int count = 1;
//         while(start < n){
//             if(s[start] == '0'){
//             	count += 1;
//                 break;
//             }
//             start += 1;
//             count += 1;
//         }
//         return count;
//     }
// }
// int count(string a){
// 	int countt = 0;
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] == '1') countt += 1;
// 	}
// 	return countt;
// }
// int solution(vector<string> a){
//     int length = a.size();
//     if(length == 1){
//     	if(count(a[0]) == 0) return 0;
// 		return 1;
//     }else{
//         int maxValue = 0;
//         for(int i = 0; i < 7; i++){
//             int count = 0;
//             int index = i;
//             for(int j = 0; j < length; j++){
//                 if(a[j][i] == '1') count += 1;
//             }
//             if(count > maxValue) maxValue = count;
//         }
//         return maxValue;
//     }
// }
// bool check(vector<int> dis, int n){
//     for(int i = 0; i < dis.size(); i++){
//         if(dis[i] == n) return false;
//     }
//     return true;
// }
// int solution(int n, int m, vector<int> games, vector<int> wallet){
//     int index_games = 0, index_wallet = 0, canBuy = 0;
//     while(index_games < n && index_wallet < m){
//         if(games[index_games] <= wallet[index_wallet]){
//             index_wallet += 1;
//             canBuy += 1;
//         }
//         index_games += 1;
//     }
//     return canBuy;
// }
// int solution(int n, int c0, int c1, int h, string s){
//n la do dai cua string s;
//c0 la gia mua string 0;
//     int appear0 = 0;
//     for(int i = 0; i < n; i++){
//         if(s[i] == '0') appear0 += 1;
//     }
//     int appear1 = n - appear0;
//     int buy1 = appear0 * c0 + appear1 * c1; //mua luon khong doi;
//     int buy2 = n * c0 + h * appear1;        //tat ca la 0;
//     int buy3 = n * c1 + h * appear0;
//     return min(buy1, min(buy2, buy3));
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
// bool check(vector<vector<int>> a){
//     for(int i = 0; i < a.size() - 1; i++){
//         for(int j = i + 1; j < a.size(); j++){
//             int tar1 = a[i][0] + a[i][1];
//             int tar2 = a[j][0] + a[j][1];
//             if(tar1 == a[j][0] and tar2 == a[i][0]) return true;
//         }
//     }
//     return false;
// }
// int solution(vector<int> a){
// 	int length = a[0];
// 	int la = a[2];
// 	int lb = a[3];
// 	int step = a[1];
// 	if(step >= (min(la, lb) - 1) + (length - max(la, lb))){
// 		return length - 1;
// 	}else return abs(la - lb) + step;
// }
// bool check(vector<vector<int>> a, int i, int j){
// 	int t = a.size();
// 	int value = a[i][j];
// 	if(value == 1) return true;
// 	for(int x = 0; x < t; x++){
// 		for(int y = 0; y < t; y++){
// 			if(a[i][x] + a[y][j] == value) return true;
// 		}
// 	}
// 	return false;
// }
// void solution(int n){
// 	int col = 1;
// 	int index = 1;
// 	int bonus = 1;
// 	int bonus_down = 0;
// 	while(1){
// 		if(n <= index + bonus_down && n >= index){
// 			break;
// 		}
// 		index += bonus;
// 		bonus += 2;
// 		bonus_down += 2;
// 		col += 1;
// 	}
// 	int bonus_tomaxRow = bonus_down / 2;
// 	if(n <= index + bonus_tomaxRow){
// 		cout << n - index + 1 << " " << col << endl;
// 	}else{
// 		int row = bonus_tomaxRow + 1;
// 		int dif = n - (index + bonus_tomaxRow);
// 		cout << row << " " << col - dif << endl;
// 	}
// }
// int solution(int a, int b, int c, int d){
// 	int st = min(a, b);
// 	int ls = max(a, b);
// 	int point = c;
// 	int cover = d;
// 	vector<int> cv; //vector<int> a contains 2 elements from first and last it covers;
// 	cv.push_back(point - cover);
// 	cv.push_back(point + cover);
// 	if(cv[0] <= st && cv[1] >= ls) return 0; //contains all;
// 	if(cv[0] >= st && cv[1] <= ls) return ls - st - 2 * cover; //road contain;
// 	if(cv[0] >= ls || cv[1] <= st) return ls - st; //all disconnect;
// 	if(cv[0] < st) return ls - st - (cv[1] - st);
// 	if(cv[0] < ls) return ls - st - (ls - cv[0]);
// }
// string solution(int n){
// 	string s = "";
// 	if(n == 1){
// 		s += '1';
// 		return s;
// 	}
// 	if(n == 2){
// 		s += '2';
// 		return s;
// 	}
// 	//n >= 3;
// 	if(n % 3 == 0){
// 		for(int i = 0; i < n / 3; i++) s += "21";
// 		return s;
// 	}else if(n % 3 == 1){
// 		s += '1';
// 		for(int i = 0; i < n / 3; i++) s += "21";
// 		return s;
// 	}else{
// 		s += '2';
// 		for(int i = 0; i < n / 3; i++) s += "12";
// 		return s;
// 	}
// }
// int solution(int n, int k){
// 	if(k >= 3*n) return 0;   //possible to scores 3 all exam;
// 	int value = 0;
// 	while(value <= n){
// 		if(value * 2 + (n - value) * 3 == k){
// 			return value;
// 			break;
// 		}
// 		value += 1;
// 	}
// 	return value;
// }
// int solution(string s){
// 	set<string> a;	
// 	for(int i = 0; i < s.size(); i++){
// 		s = s[s.size() - 1] + s;
// 		s.pop_back();
// 		a.insert(s);
// 	}
// 	return a.size();
// }
// int solution(vector<int> a){
// 	int n = a[0]; //all eggs
// 	int aa = a[1]; //all stickers
// 	int b = a[2]; //all toys;
// 	if(aa == n || b == n){
// 		if(aa == n && b == n) return 1;
// 		return n - min(aa, b) + 1;
// 	}
// 	return n - min(aa, b) + 1;
// }
// int solution(vector<int> index){
// 	int sum = 0;
// 	for(int i = 0; i < index.size(); i++){
// 		if(index[i] % 2 == 0){
// 			sum += (index[i] / 2) * ((index[i] / 2) - 1);
// 		}else{
// 			int first = index[i] / 2;
// 			int second = index[i] / 2 + 1;
// 			sum += ((first * (first - 1)) + (second * (second - 1))) / 2;
// 		}
// 	}
// 	return sum;
// }
// long long solution(long long n, long long m, vector<vector<long long>> a){
// 	//sort follow a[i][1];
// 	for(int i = 0; i < m - 1; i++){
// 		for(int j = 0; j < m - 1 - i; j++){
// 			if(a[j][1] < a[j + 1][1]){
// 				swap(a[j], a[j + 1]);
// 			}
// 		}
// 	}
// 	long long canhold = n;
// 	long long start = 0;
// 	long long sum = 0;
// 	while(start < m){
// 		if(canhold <= a[start][0]){
// 			sum += canhold * a[start][1];
// 			break;
// 		}
// 		sum += a[start][0] * a[start][1];
// 		canhold -= a[start][0];
// 		start += 1;
// 	}
// 	return sum;
// }
// int solution(vector<int> a){
// 	int x = a[0];
// 	int y = a[1];
// 	if(x == 1 || y == 1){
// 		if(max(x, y) == 1) return 0;
// 		if(max(x, y) == 2) return 1;
// 		return -1;
// 	}
// 	//x != 1 && y != 1;
// 	if(x == y) return 2 * x - 2;
// 	int step = min(x, y) * 2 - 2; //move to a[min - 1][min - 1]
// 	int distance = max(x, y) - min(x, y);
// 	if(distance % 2 == 0) return step + distance * 2;
// 	return step + distance * 2 - 1;
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
// bool snt(int n){
//     if(n == 1) return false;
//     if(n == 2) return true;
//     for(int i = 2; i * i <= n; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// bool check(int a[], int length){
//     for(int i = 0; i < length - 1; i++){
//         if(a[i] > a[i + 1]) return false;
//     }
//     return true;
// }
// bool check(string s){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == '0') return true;
//     }
//     return false;
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
// int left(string s){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == '0') return i;
//     }
//     return -1;
// }
// int right(string s){
//     for(int i = s.size() - 1; i > -1; i--){
//         if(s[i] == '0') return i;
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
// int change(char s){
// 	if(s == '0') return 0;
// 	if(s == '1') return 1;
// 	if(s == '2') return 2;
// 	if(s == '3') return 3;
// 	if(s == '4') return 4;
// 	if(s == '5') return 5;
// 	if(s == '6') return 6;
// 	if(s == '7') return 7;
// 	if(s == '8') return 8;
// 	if(s == '9') return 9;
// }
// bool check_vector(vector<int> dgb){	
// 	int st = dgb.size() - 1;
// 	while(st >= 0){
// 		if(dgb[st] == 0){
// 			break;
// 		}
// 		st -= 1;
// 	}
// 	for(int i = 1; i < st; i++){
// 		if(dgb[i] != 0){
// 			return false;
// 		}
// 	}
// 	for(int i = 0; i < dgb.size() - 1; i++){
// 		for(int j = 0; j < dgb.size() - 1 - i; j++){
// 			if(dgb[j] != 0 and dgb[j + 1] != 0 and dgb[j] > dgb[j + 1]){
// 				return false;
// 			}
// 		}
// 	}
// 	return true;
// }
// void change1(int a[200000], int t){
// 	int start = 0;
// 	while(start < t / 2){
// 		int st = start;
// 		int end = t - 1 - st;
// 		while(st < end){
// 			int tmp = a[st];
// 			a[st] = a[end];
// 			a[end] = tmp;
// 			st += 1;
// 			end -= 1;
// 		}
// 		start += 1;
// 	}
// }
// void change(int a[200000], int t){
// 	int st = 0, end = t - 1;
// 	while(st < end){
// 		if(st % 2 == 0){
// 			int tmp = a[st];
// 			a[st] = a[end];
// 			a[end] = tmp;
// 		}
// 		st += 1;
// 		end -= 1;
// 	}
// }
// bool check(string a, string b){
// 	vector<int> dga;
// 	vector<int> dgb;
// 	for(int i = 0; i < a.size(); i++) dga.push_back(change(a[i]));
// 	for(int i = 0; i < b.size(); i++) dgb.push_back(change(b[i]));
// 	if(dgb.size() != 1 and dgb[0] == 0) return false;
// 	sort(dga.begin(), dga.end());
// 	sort(dgb.begin(), dgb.end());
// 	if(dga == dgb and dga.size() == 1 and dga[0] == 0) return true;
// 	if(dga == dgb) return true;
// 	return false;
// }
// void show(string a, string b){
// 	vector<int> dgb;
// 	for(int i = 0; i < b.size(); i++) dgb.push_back(change(b[i]));
// 	bool h = check_vector(dgb);
// 	if(h){
// 		cout << "OK" << endl;
// 	}else cout << "WRONG_ANSWER" << endl;
//}
// void show(int n, int k, string s){
// 	int st = 0, a = 0, b = 0;
// 	while(st < n){
// 		if(s[st] == 'T') a = st;
// 		if(s[st] == 'G') b = st;
// 		st += 1;
// 	}
// 	if(abs(a - b) % k == 0){
// 		int c = -1;
// 	    for(int i = min(a, b); i <= max(a, b); i += k){
// 		    if(s[i] == '#'){
// 			    cout << "NO" << endl;
// 			    c += 1;
// 	     	}
// 		    if(c != -1) break;
// 	    }
// 	    if(c == -1){
// 		    cout << "YES" << endl;
// 	    }
// 	} else cout << "NO" << endl;
// }
// bool check(vector<int> s, int index){
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == index) return true;
//     }
//     return false;
// }
// bool check(int a[5]){
// 	for(int i = 0; i < 4; i++){
// 		if(a[i] == a[i + 1]) return false;
// 	}
// 	return true;
// }
// int solution(vector<int> a){
// 	int distance = abs(a[0] - a[1]);
// 	int step = a[2] + a[3];
// 	if(distance % step == 0) return distance / step;
// 	return -1;
// }
// void show(int n){
// 	cout << n << endl;
// 	for(int i = 1; i<= n; i++) cout << 1 << " ";
// }
// long long solution(vector<long long> a){
// 	long long s = a[0]; // 9
// 	long long aa = a[1]; // 3
// 	long long b = a[2]; // 7
// 	long long c = a[3];// 3
// 	long long buy = s / c;
// 	if(buy >= aa) buy += (buy / aa) * b;
// 	return buy;
// }
// int solution(int n){
// 	if(n == 2) return 2;
// 	return 1;
// }
// void show(vector<string> a){
//     int length = a.size();
//     vector<int> index;
//     for(int i = 0; i < length; i++){
//         for(int j = 0; j < length; j++){
//             if(a[i][j] == '*'){
//                 index.push_back(i);
//                 index.push_back(j);
//             }
//         }
//     }//
//     int x1 = index[0];
//     int y1 = index[1];
//     int x2 = index[2];
//     int y2 = index[3];
//     if(x1 == x2 || y1 == y2){
//         if(x1 == x2){
//             if(x1 == 0){
//                 a[x1 + 1][y1] = '*';
//                 a[x2 + 1][y2] = '*';
//             }else{
//                 a[x1 - 1][y1] = '*';
//                 a[x2 - 1][y2] = '*';
//             }
//         }else{
//             if(y1 == 0){
//                 a[x1][y1 + 1] = '*';
//                 a[x2][y2 + 1] = '*';
//             }else{
//                 a[x1][y1 - 1] = '*';
//                 a[x2][y2 - 1] = '*';
//             }
//         }
//     }else{
//         a[x1][y2] = '*';
//         a[x2][y1] = '*';
//     }
//     for(int i = 0; i < length; i++) cout << a[i] << endl;
// }
// int solution(vector<int> a){
// 	int button = 0;
// 	int df = abs(a[0] - a[1]);
// 	button += df / 5;
// 	df -= button * 5;
// 	if(df == 3 || df == 4){
// 		button += 2;
// 	}else if(df == 2 || df == 1){
// 		button += 1;
// 	}
// 	return button;
// }
// bool check(vector<int> a, int n){
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] == n) return false;
// 	}
// 	return true;
// }
// bool check(vector<vector<string>> a, vector<string> b){
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i][0] == b[0] && a[i][1] == b[1]) return false;
// 	}
// 	return true;
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
// int solution(vector<int> a, int length){
//     sort(a.begin(), a.end());
//     int start = a[0];
//     int value = 1;
//     for(int i = 1; i < length; i++){
//         if(a[i] == start) value += 1;
//     }
//     if(value == length) return 0;
//     return length - value;
// }
// void show(vector<int> a){
//     vector<int> odd; vector<int> even;
//     for(int i = 0; i < a.size(); i++){
//         if(a[i] % 2 == 1){
//             odd.push_back(i + 1);
//         }else even.push_back(i + 1);
//     }
//     if(even.size() != 0){
//         cout << 1 << endl;
//         cout << even[0] << endl;
//     }else{
//         if(odd.size() <= 1){
//             cout << -1 << endl;
//         }else{
//             cout << 2 << endl;
//             cout << odd[0] << " " << odd[1] << endl;
//         }
//     }
// }
// long long solution(vector<int> a){
//     //a[0] la so hang
//     //a[1] la so cot
//     long long sum = 0;
//     for(int i = 1; i <= a[1]; i++) sum += i;
//     for(int i = 2; i <= a[0]; i++) sum += i * a[1];
//     return sum;
// }
// void show(string s){
//     int length = s.size(), start = length - 1, count = 0;
//     while(start >= 0){
//         if(s[start] != ')'){
//             break;
//         }
//         count += 1;
//         start -= 1;
//     }
//     if(count <= length - count){
//         cout << "NO" << endl;
//     }else cout << "YES" << endl;
// }
// long long solution(vector<long long> a, int times){
//     int length = a.size();
//     if(length == 2) return a[0] + a[1];
//     sort(a.begin(), a.end());
//     for(int i = length - 1 - times; i < length - 1; i++) a[length - 1] += a[i];
//     return a[length - 1];
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
// int solution(int n){
//     if(n % 2 == 0){
//         int val = n / 2;
//         return val;
//     }else{
//         int val = (int)n/2 + 1;
//         return val;
//     }
// }
// int solution(vector<vector<int>> a){
//     int xa = a[0][0];
//     int ya = a[0][1];
//     int xb = a[1][0];
//     int yb = a[1][1];
//     int xf = a[2][0];
//     int yf = a[2][1];
//     if((xa == xb) or (ya == yb)){
//         if(xa == xb){
//             if(xf != xa){
//                 return abs(ya - yb);
//             }else{
//                 if((yf < max(ya, yb)) and (yf > min(ya, yb))) return abs(ya - yb) + 2;
//                 return abs(ya - yb);
//             }
//         }else{
//             if(yf != ya){
//                 return abs(xa - xb);
//             }else{
//                 if((xf < max(xa, xb)) and (xf > min(xa, xb))) return abs(xa - xb) + 2;
//                 return abs(xa - xb);
//             }
//         }
//     }
//     return abs(xa - xb) + abs(ya - yb);
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
    // int t; cin >> t; int a[200000];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// change(a, t);
	// for(int i = 0; i < t; i++) cout << a[i] << " ";
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
        // int maxVal = 0, n, m; cin >> n >> m;
    // string aa[n]; for(int i = 0; i < n; i++) cin >> aa[i];
    // int s[m];     for(int i = 0; i < m; i++) cin >> s[i];
    // for(int i = 0; i < m; i++){
    //     int a = 0, b = 0, c = 0, d = 0, e = 0;
    //     for(int j = 0; j < n; j++){
    //         if(aa[j][i] == 'A') a += 1;
    //         if(aa[j][i]  == 'B') b += 1;
    //         if(aa[j][i]  == 'C') c += 1;
    //         if(aa[j][i]  == 'D') d += 1;
    //         if(aa[j][i]  == 'E') e += 1;
    //     }
    //     maxVal += max(a, max(b, max(c, max(d, e)))) * s[i];
    // }
    // cout << maxVal;
    // string room = "0000000000"; int length; string ss; cin >> length >> ss;
    // for(int i = 0; i < length; i++){
    //     if(ss[i] == 'L'){
    //         int index = left(room);
    //         room[index] = '1';
    //     }else if(ss[i] == 'R'){
    //         int index = right(room);
    //         room[index] = '1';
    //     }else room[stoi(ss.substr(i, 1))] = '0';
    // }
    // cout << room << endl;
    // int length; string s; cin >> length >> s;
    // int count = 0;
    // for(int i = 0; i < length; i++){
    //     if(s[i] == '8') count += 1;
    // }
    // int st = 1;
    // while(st <= count and (length - st) / 10 >= st) st += 1;
    // cout << st - 1;
    // int n; cin >> n;
    // if(n % 10 == 0){
    //     cout << n << endl;
    // }else if(n % 5 == 0){
    //     cout << n - 5 << endl;
    // }else{
    //     int du = n % 10;
    //     if(du < 5){
    //         cout << n - du << endl;
    //     }else cout << n + (10 - du) << endl;
    // }
    //int n, k; cin >> n >> k;
    //cout << ((n / k) + 1) * k << endl;
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
        // int t; cin >> t;
    // vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     int num;
    //     cin >> num;
    //     vector<int> b;
    //     for(int j = 0; j < num; j++){
    //         int index;
    //         cin >> index;
    //         b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i], a[i].size()) << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int num, maxScore; cin >> num >> maxScore;
    //     int a[1000];
    //     for(int j = 0; j < num; j++) cin >> a[j];
    //     int plus = 0;
    //     for(int j = 1; j < num; j++) plus += a[j];
    //     if(a[0] + plus < maxScore){
    //         cout << a[0] + plus << endl;
    //     }else cout << maxScore << endl;
    // }
    // int t; cin >> t;
    // vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     vector<int> b;
    //     int num;
    //     cin >> num;
    //     for(int j = 0; j < num; j++){
    //         int index;
    //         cin >> index;
    //         b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // int t; cin >> t;
    // if(t % 3 == 0){
    //     cout << 2 * (t / 3) << endl;
    // }else cout << 2 * (t / 3) + 1 << endl;
    // int t; cin >> t; vector<vector<string>> a;
	// for(int i = 0; i < t; i++){
	// 	vector<string> b;
	// 	string s, s1;
	// 	cin >> s >> s1;
	// 	b.push_back(s);
	// 	b.push_back(s1);
	// 	if(check(a, b) == true) a.push_back(b);
	// }
	// cout << a.size() << endl;
    // int t, mem; cin >> t >> mem;
	// vector<int> a; vector<int> index;
	// for(int i = 0; i < t; i++){
	// 	int index;
	// 	cin >> index;
	// 	a.push_back(index);
	// }
	// //a la vector chua rank
	// vector<int> rank;
	// for(int i = 0; i < t; i++){
	// 	if(check(rank, a[i]) == true && check(index, i + 1) == true){
	// 		rank.push_back(a[i]);
	// 		index.push_back(i + 1);
	// 	}
	// }
	// //vector<int> index;
	// if(index.size() < mem){
	// 	cout << "NO" << endl;
	// }else{
	// 	cout << "YES" << endl;
	// 	for(int i = 0; i < mem; i++) cout << index[i] << " ";
	// }
    // long long myyel, myblue; cin >> myyel >> myblue;
	// long long yel, gre, blue; cin >> yel >> gre >> blue;
	// long long yel_need = 2 * yel + gre;
	// long long blue_need = 3 * blue + gre;
	// if(myyel >= yel_need and myblue > blue_need){
	// 	cout << 0 << endl;
	// }else{
	// 	long long need = 0;
	// 	long long needy = yel_need - myyel;
	// 	long long needb = blue_need - myblue;
	// 	if(needy >= 0) need += needy;
	// 	if(needb >= 0) need += needb;
	// 	cout << need << endl;
	// }
    // int t; cin >> t;
	// vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	int index;
	// 	cin >> index;
	// 	a.push_back(index);
	// }
	// for(int i = 0; i < t; i++) cout << a[i] / 2  << endl;
    // int t; cin >> t; string s; cin >> s;
	// int f1 = 0, f2 = 0;
	// for(int i = 0; i < t; i++){
	// 	if(s[i] == 'S' and s[i + 1] == 'F'){
	// 		f1 += 1;
	// 	}else if(s[i] == 'F' and s[i + 1] == 'S'){
	// 		f2 += 1;
	// 	}
	// }
	// if(f1 > f2){
	// 	cout << "YES" << endl;
	// }else cout << "NO";
    // int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    // cout << max(abs(x1 - x2), abs(y1 - y2));
    // vector<int> aa;
    // int a, b, c, d; cin >> a >> b >> c >> d;
    // aa.push_back(a);
    // aa.push_back(b);
    // aa.push_back(c);
    // sort(aa.begin(), aa.end());
    // int step = 0;
    // if(aa[2] < aa[1] + d) step += aa[1] + d - aa[2];
    // if(aa[0] > aa[1] - d) step += aa[0] - (aa[1] - d);
    // cout << step;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// int l = 0, r = 0;
	// for(int i = 0; i < t; i++){
	// 	if(a[i][0] > 0){
	// 		r += 1;
	// 	}else l += 1;
	// }
	// //cout << l << " " << r << endl;
	// if(l > 1 && r > 1){
	// 	cout << "NO" << endl;
	// }else cout << "YES" << endl;
    // int t;
	// cin >> t;
	// vector<vector<long long>> a(t, vector<long long> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    //int t; cin >> t; cout << solution(t) << endl;
    //int t; cin >> t; show(t);
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int sum = 0;
	// int a[5];
	// for(int i = 0; i < 5; i++){
	// 	cin >> a[i];
	// 	sum += a[i];
	// }
	// sort(a, a + 5);
	// if(check(a) == true){
	// 	cout << sum << endl;
	// }else{
	// 	vector<int> minus;
	// 	//co the trung hon 2 lan(max 3 lan);
	// 	for(int i = 4; i >= 1; i--){
	// 		if(a[i] == a[i - 1]){
	// 			if(i - 2 >= 0 && a[i - 1] == a[i - 2]){
	// 				minus.push_back(a[i] + a[i - 1] + a[i - 2]);
	// 			}else minus.push_back(a[i] + a[i - 1]);
	// 		}
	// 	}
	// 	sort(minus.begin(), minus.end());
	// 	cout << sum - minus[minus.size() - 1] << endl;
	// }
    // int t; cin >> t;
	// while(t--){
	// 	int n, m; cin >> n >> m;
	// 	int a[m][2];
	// 	for(int i = 0; i < m; i++) cin >> a[i][0] >> a[i][1];
	// 	if(n > m){
	// 		cout << "YES" << endl;
	// 	}else cout << "NO" << endl;
	// }
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++){
	// 	//cout << a[i][0] << " " << a[i][1] << " " <<  << endl;
	// 	int aa = a[i][0];
	// 	int b = a[i][1];
	// 	int c = a[i][2];
	// 	long long z = c;
	// 	long long y = z + b;
	// 	long long x = y + aa;
	// 	cout << x << " " << y << " " << z << endl;
	// }
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	// int n, k; cin >> n >> k;
	// int a[1000]; int b[1000];
	// for(int i = 0; i < n; i++){
	// 	cin >> a[i];
	// 	b[i] = a[i];
	// }
	// //////////////
	// sort(a, a + n);
	// cout << a[n - k] << endl;
	// int count = 0;
	// for(int i = n - 1; i >= 0; i--){
	// 	if(b[i] >= a[n - k] && count < k){
	// 		cout << i + 1 << " ";
	// 		count += 1;
	// 	}
	// }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (4)); vector<int> score;
    // for(int i = 0; i < t; i++){
    //     int sum = 0;
    //     for(int j = 0; j < 4; j++){
    //         cin >> a[i][j];
    //         sum += a[i][j];
    //     }
    //     score.push_back(sum);
    // }
    // int bigger = 0, sonScore = score[0];
    // sort(score.begin(), score.end());
    // int start = t - 1;
    // while(start >= 0){
    //     if(score[start] <= sonScore){
    //         break;
    //     }
    //     bigger += 1;
    //     start -= 1;
    // }
    // cout << bigger + 1 << endl;
    // int t; cin >> t;
    // vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index;
    //     cin >> index;
    //     a.push_back(index);
    // }
    // sort(a.begin(), a.end());
    // int start = 0, count = 0;
    // while(start < t){
    //     if(a[start] == a[start + 1]){
    //         count += 1;
    //         start += 2;
    //     }else start += 1;
    // }
    // cout <<  count / 2<< endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n;
    //     cin >> n;
    //     if(n % 3 == 0){
    //         cout << n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1 << endl;
    //     }else if(n % 3 == 1){
    //         //o giua = n / 3 + 2;
    //         int mid = n / 3 + 2;
    //         cout << (n - mid) / 2 + 1 << " " << mid << " " << (n - mid) / 2 << endl;
    //     }else{
    //         int mid = n / 3 + 2;
    //         cout << (n - mid) / 2 + 1 << " " << mid << " " << (n - mid) / 2 - 1 << endl;
    //     }
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, m; cin >> n >> m;
    //     int sum = 0;
    //     int a[100];
    //     for(int j = 0; j < n; j++){
    //         cin >> a[j];
    //         sum += a[j];
    //     }
    //     if(sum == m){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int tt; cin >> tt;
    // while (tt--) {
    //     int n; cin >> n; vector<int> a(n);
    //     for (int i = 0; i < n; i++) cin >> a[i];
    //     int ans = 0;
    //     while (!is_sorted(a.begin(), a.end())) {
    //         for (int i = ans % 2; i + 1 < n; i += 2) {
    //             if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
    //         }
    //         ans += 1;        
    //     }
    //     cout << ans << endl;
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, m, r, c; cin >> n >> m >> r >> c;
    //     //(1, 1)
    //     //(1, m)
    //     //(n , m)
    //     //(n, 1)
    //     int one = abs(1 - r) + abs(1 - c);
    //     int two = abs(1 - r) + abs(m - c);
    //     int thr = abs(n - r) + abs(m - c);
    //     int fou = abs(n - r) + abs(1 - c);
    //     cout << max(one, max(two, max(thr, fou))) << endl;
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n; cin >> n; int a[3];
    //     for(int j = 0; j < 3; j++) cin >> a[j];
    //     if(a[n - 1] == 0){
    //         cout << "NO" << endl;
    //     }else{
    //         //mo duoc cua n - 1;
    //         if(a[a[n - 1] - 1] == 0){
    //             cout << "NO" << endl;
    //         }else cout << "YES" << endl;
    //     }
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, m; cin >> n >> m;
    //     vector<int> a;
    //     for(int j = 0; j < n; j++){
    //         int index;
    //         cin >> index;
    //         a.push_back(index);
    //         m -= a[j];
    //     }
    //     if(m >= 0){
    //         cout << 0 << endl;
    //     }else cout << m * -1 << endl;
    // }
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
    // int a, b; cin >> a >> b;
	// int step = 0, minus = 1;
	// while(a >= 0 and b >= 0){
	// 	if(step % 2 == 0){
	// 		a -= minus;
	// 		step += 1;
	// 		minus += 1;
	// 	}else{
	// 		b -= minus;
	// 		step += 1;
	// 		minus += 1;
	// 	}
	// }
	//cout << a << " " << b << endl;
	// if(a < 0){
	// 	cout << "Vladik" << endl;
	// }else cout << "Valera" << endl;
    // vector<string> str;
    // for(int i = 0; i < t; i++){
    //     int n;
    //     string s;
    //     cin >> n >> s;
    //     str.push_back(s);
    // }
    // for(int i = 0; i < t; i++) show(str[i]);
    // int t; cin >> t;
    // vector<vector<long long>> a;
    // for(int i = 0; i < t; i++){
    //     int num, times; cin >> num >> times;
    //     vector<long long> b;
    //     for(int j = 0; j < num; j++){
    //         long long index;
    //         cin >> index;
    //         b.push_back(index);
    //     }
    //     a.push_back(b);
    //     cout << solution(a[i], times) << endl;
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
    // int t; cin >> t;
    // while(t--){
    //     int cnt = 0;
    //     string s; cin >> s;
    //     int xx = 0, yy = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(s[i] == '0'){
    //             xx += 1;
    //         }else yy += 1;
    //     }
    //     cout << (min(xx, yy) % 2 == 1 ? "DA" : "NET") << endl;
    // }
    // int n, m;
    // cin >> n; int a[n]; for(int i = 0; i < n; i++) cin >> a[i]; sort(a, a + n);
    // cin >> m; int b[m]; for(int i = 0; i < m; i++) cin >> b[i]; sort(b, b + m);
    // cout << a[n - 1] << " " << b[m - 1] << endl;
    // int t; cin >> t;
    // while(t--){
    //     int minVal = INT_MAX;
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     sort(a, a + length);
    //     for(int i = 1; i < length - 1; i++){
    //         minVal = min(minVal, a[i + 1] - a[i - 1]);
    //     }
    //     cout << minVal << endl;
    // }
    // int n, m, k; cin >> n >> m >> k; int a[n]; for(int i = 0; i < n; i++) cin >> a[i];
    // int minVal = INT_MAX;
    // //m -> m - 1;
    // m -= 1;
    // for(int i = 0; i < n; i++){
    //     if(a[i] != 0 and a[i] <= k){
    //         int dis = abs(i - m);
    //         if(dis < minVal) minVal = abs(i - m);
    //     }
    // }
    // cout << minVal * 10 << endl;
    // string m[12] = {"January", "February", "March", "April", "May", "June",
    //                 "July", "August", "September", "October", "November", "December"
    //                };
    // string s; int n; cin >> s >> n;
    // int index;
    // for(int i = 0; i < 12; i++){
    //     if(m[i] == s) index = i;
    // }
    // index += (n % 12);
    // while(index > 11) index -= 12;
    // cout << m[index];
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // cout << (check(a) == true ? "YES" : "NO") << endl;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     int o = 0, e = 0;
    //     for(int i = 0; i < length; i++){
    //         if(i % 2 == 0 and a[i] % 2 == 1) o += 1;
    //         if(i % 2 == 1 and a[i] % 2 == 0) e += 1;
    //     }
    //     cout << (o == e ? o : -1) << endl;
    // }
    // int n; cin >> n; int cnt = 0;
    // for(int i = 1; i < n; i++){
    //     if(n % i == 0) cnt += 1;
    // }
    // cout << cnt;
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     int o = 0, e = 0, s = 0;
    //     for(int i = 0; i < length; i++){
    //         s += a[i];
    //         if(a[i] % 2 == 0){
    //             o += 1;
    //         }else e += 1;
    //     }
    //     if(s % 2 == 1){
    //         cout << "YES" << endl;
    //     }else{
    //         if(o != 0 and e != 0){
    //             cout << "YES" << endl;
    //         }else cout << "NO" << endl;
    //     }
    // }
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index;
	// 	if(index == 2){
	// 		cout << 2 << endl;
	// 	}else cout << 3 << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int a, b;
	// 	cin >> a >> b;
	// 	if(a % b == 0){
	// 		cout << "YES" << endl;
	// 	}else cout << "NO" << endl;
	// }
    // long long n, m; cin >> n >> m;
	// vector<vector<long long>> a(m, vector<long long> (2));
	// for(int i = 0; i < m; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// cout << solution(n, m, a) << endl;
    // int t; cin >> t;
	// vector<int> index;
	// vector<string> names;
	// for(int i = 0; i < t; i++){
	// 	string s; cin >> s; names.push_back(s);
	// }
	// set<char> firstName;
	// for(int i = 0; i < t; i++) firstName.insert(names[i][0]);
	// for(set<char>::iterator it = firstName.begin(); it != firstName.end(); it++){
	// 	char n = *(it);
	// 	int count = 0;
	// 	for(int i = 0; i < t; i++){
	// 		if(names[i][0] == n) count += 1;
	// 	}
	// 	if(count >= 3) index.push_back(count);
	// }
	// cout << solution(index) << endl;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    //string s; cin >> s; cout << solution(s) << endl;
    // int n, k; cin >> n >> k;
	// cout << solution(n, k) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	long long sum = 0;
	// 	long long length; cin >> length;
	// 	vector<int> cards;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index;
	// 		cards.push_back(index);
	// 	}
	// 	int l1; cin >> l1;
	// 	for(int j = 0; j < l1; j++){
	// 		int index; cin >> index; sum += index;
    //     }
	// 	long long du = sum % length;
	// 	cout << cards[du] << endl;
	// }
    // string s; cin >> s;
	// int count = 0;
	// for(int i = 0; i < s.size(); i++){
	// 	if(s[i] == '-') count += 1;
	// }
	// if(count == s.size() || count % (s.size() - count) == 0){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t; cin >> t;
	// vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index; a.push_back(index);
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int a, b, c, d;
	// 	cin >> a >> b >> c >> d; cout << solution(a, b, c, d) << endl;
	// }int t;
	// int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a;
	// 	for(int j = 0; j < 3; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 	}
	// 	sort(a.begin(), a.end());
	// 	if(a[2] > a[1] + a[0] + 1){
	// 		cout << "NO" << endl;
	// 	}else cout << "YES" << endl;
	// }
    // int t; cin >> t;
	// vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	int index;
	// 	cin >> index;
	// 	a.push_back(index);
	// }
	// for(int i = 0; i < t; i++) solution(a[i]);
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++){
    //     int x = a[i][0];
    //     int y = a[i][1];
    //     if(x % 2 == 1 && y % 2 == 1 or x % 2 == 0 && y % 2 == 0){
    //         cout << "Tonya" << endl;
    //     }else cout << "Burenka" << endl;
    // }
    // int t, m = 0; cin >> t;
	// vector<vector<int>> a(t, vector<int> (t));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < t; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++){
	// 	int n = 0;
	// 	for(int j = 0; j < t; j++){
	// 		if(check(a, i, j) == false){
	// 			m += 1;
	// 			n += 1;
	// 			break;
	// 		}
	// 	}
	// 	if(n != 0){
	// 		cout << "NO" << endl;
	// 		break;
	// 	}
	// }
	// if(m == 0) cout << "YES" << endl;
    // long long a, b, c; cin >> a >> b >> c;
	// long long as = a + c;
	// long long bs = b + c;
	// if(as == bs){
	// 	cout << 2 * as << endl;
	// }else cout << 2 * min(as, bs) + 1 << endl;
    // int t; cin >> t;
	// for(int i = 0;i < t; i++){
	// 	int length;
	// 	cin >> length;
	// 	for(int j = 0; j < length; j++) cout << length << " ";
	// 	cout << endl;
	// }
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// string a[30];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// for(int i = 0; i < t; i++){
	// 	int length = a[i].size();
	// 	if(a[i][length - 1] == 'o'){
	// 		cout << "FILIPINO"<< endl;
	// 	}else if(a[i][length - 1] == 'u'){
	// 		cout << "JAPANESE" << endl;
	// 	}else cout << "KOREAN" << endl;
	// }
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     int r = 0, g = 0, b = 0, R = 0, G = 0, B = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(s[i] == 'r') r = i; if(s[i] == 'g') g = i; if(s[i] == 'b') b = i;
    //         if(s[i] == 'R') R = i; if(s[i] == 'G') G = i; if(s[i] == 'B') B = i;
    //     }        
    //     cout << ((r > R || g > G || b > B) ? "NO" : "YES") << endl;
    // }
    // string s; cin >> s; cout << s;
    // for(int i = s.size() - 1; i > -1; i--) cout << s[i];
    // int a, b, cnt = 0; cin >> a >> b; int length = abs(a - b);
    // for(int i = 1; i <= length / 2; i++) cnt += 2 * i;
    // if(length % 2 == 1) cnt += length / 2 + 1;
    // cout << cnt;
    // int l, r, a; cin >> l >> r >> a;
    // int res = 0;
    // int lr = min(l, r); l -= lr; r -= lr; res += 2*lr;
    // if(l != 0){
    //     res += 2*min(l, a);
    //     a -= min(l, a);
    // }else{
    //     res += 2*min(r, a);
    //     a -= min(r, a);
    // }
    // if(a % 2 == 0){
    //     res += a;
    // }else res += a - 1;
    // cout << res << endl;
        // int n, st = 1; cin >> n;
    // while(snt(n * st + 1) == true) st += 1;
    // cout << st;
    // int t; cin >> t;
    // while(t--){
    //     string s; int length; cin >> length >> s;
    //     int index = -1; bool found = false;
    //     for(int i = 0; i < length; i++){
    //         if(s[i] == '8'){
    //             index = i;
    //             found = true;
    //         }
    //         if(found == true) break;
    //     }
    //     if(index == -1){
    //         cout << "NO" << endl;
    //     }else{
    //         int left = length - index - 1;
    //         if(left > 9){
    //             cout << "YES" << endl;
    //         }else cout << "NO" << endl;
    //     }
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index; cout << (index % 4 == 0 ? "YES" : "NO") << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int index; cin >> index; string ss = to_string(index);
    //     cout << fixed << setprecision(0) << index - pow(10, ss.size() - 1) << endl;
    // }
    // int t; cin >> t; int a[7];
    // while(t--){
    //     for(int i = 0; i < 7; i++){
    //         cin >> a[i];
    //     }
    //     if(a[0] + a[1] + a[2] == a[6]){
    //         cout << a[0] << " " << a[1] << " " << a[2] << endl;
    //     }else cout << a[0] << " " << a[1] << " " << a[3] << endl;
    // }
        // int t; cin >> t;
	// int a[100000];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// sort(a, a + t);
	// int st = 1;
	// int c = 0;
	// while(st < t){
	// 	if(a[st] % a[0] != 0){
	// 		cout << -1 << endl;
	// 		c += 1;
	// 		break;
	// 	}
	// 	st += 1;
	// }
	//int c = 0;
	// if(c == 0) cout << a[0] << endl;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	long long a, b, c; cin >> a >> b >> c; solution(a, b, c);
	// }
    // int a, b, c; cin >> a >> b >> c;
	// int value = solution(a, b, c);
	// if(value == 1){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t; cin >> t;
    // while(t--){
    //     int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    //     int dl, cl;
    //     if(x >= a){
    //         dl = x - a;
    //     }else dl = 0;
    //     if(y >= b){
    //         cl = y - b;
    //     }else cl = 0;
    //     cout << (c > dl + cl - 1 ? "YES" : "NO") << endl;
    // }
    // int t; cin >> t;
    // while(t--){
    //     int length; cin >> length; int a[length]; for(int i = 0; i < length; i++) cin >> a[i];
    //     if(check(a, length)){
    //         cout << "NO" << endl;
    //     }else cout << "YES" << endl;
    // }
    // int t; cin >> t; bool found = false;
    // for(int i = 1; i * i <= 2*t; i++){
    //     if(i * (i + 1) == 2*t){
    //         cout << "YES" << endl;
    //         found = true;
    //         break;
    //     }
    //     if(found == true) break;
    // }
    // if(found == false){
    //     if(t == 1){
    //         cout << "YES" << endl;
    //     }else cout << "NO" << endl;
    // }
    // int n, d; cin >> n >> d; vector<string> dd(d); for(int i = 0; i < d; i++) cin >> dd[i];
    // vector<int> dp(d, 0);
    // for(int i = 0; i < d; i++){
    //     if(check(dd[i])) dp[i] = 1;
    // }
    // for(int i = 1; i < d; i++){
    //     if(dp[i] == 1 and dp[i] < dp[i - 1] + 1) dp[i] = dp[i - 1] + 1;
    // }
    // cout << *max_element(dp.begin(), dp.end()) << endl;
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // bool found = false;
    // if(a[0] > 15){
    //     cout << 15 << endl;
    //     found = true;
    // }
    // if(found == false){
    //     for(int i = 1; i < t; i++){
    //         if(a[i] - a[i - 1] > 15){
    //             cout << a[i - 1] + 15 << endl;
    //             found = true;
    //             break;
    //         }
    //         if(found == true) break;
    //     }
    // }
    // if(found == false and a[t - 1] < 75){
    //     cout << a[t - 1] + 15 << endl;
    //     found = true;
    // }
    // if(found == false) cout << 90 << endl;
    // int t; cin >> t;
    // while(t--){
    //     int length; string s; cin >> length >> s;
    //     int cnt = stoi(s.substr(0, 1));
    //     for(int i = 1; i < length; i++){
    //         if(cnt == 1){
    //             if(s[i] == '1'){
    //                 cout << '-';
    //                 cnt -= 1;
    //             }else cout << '+';
    //         }else{
    //             cout << '+';
    //             cnt += stoi(s.substr(i, 1));
    //         }
    //     }
    //     cout << endl;
    // }
    // string name = "";
    // int maxVal = -1*INT_MAX;
    // int t; cin >> t;
    // while(t--){
    //     string s; cin >> s;
    //     int a, b, c, d, e, f, g; cin >> a >> b >> c >> d >> e >> f >> g;
    //     int sc = 100*a - 50*b + c + d + e + f + g;
    //     if(sc > maxVal){
    //         maxVal = sc; name = s;
    //     }
    // }
    // cout << name;
    // string res = "";
    // string s; cin >> s;
    // for(int i = 0; i < s.size(); i++){
    //     if(s[i] == '/'){
    //         if(res[res.size() - 1] != '/'){
    //             res += s[i];
    //         }
    //     }else res += s[i];
    // }
    // while(res[res.size() - 1] == '/' and res.size() != 1) res.pop_back();
    // cout << res;
    // bool f = 0;
    // int t; cin >> t; int a[t]; for(int i = 0; i < t; i++) cin >> a[i];
    // sort(a, a + t);
    // for(int i = 0; i < t; i++){
    //     if(a[i] != i + 1){
    //         cout << i + 1 << endl;
    //         f = 1;
    //     }
    //     if(f == 1) break;
    // }
    // if(f == 0) cout << t + 1 << endl;
    // float a, b, n; cin >> a >> b >> n;
	// if(a == b and a == 0){
	// 	cout << 5 << endl;
	// }else{
	// 	int c = -1;
	//     for(int i = -1000; i <= 1000; i++){
    //         if(pow(i, n) == b / a){
    //             c += 1;
	// 		    cout << i << endl;
	// 		    break;
    //         }
    //         if(c == 0) break;
    //     }
    //     if(c == -1) cout << "No solution" << endl;
	// }
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	// int n; cin >> n;
	// vector<vector<int>> a(3, vector<int> (2));
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < 3; i++)	{
	// 	if(a[i][0] == n){
	// 		n = a[i][1];
	// 	}else if(a[i][1] == n) n = a[i][0];
	// }
	// cout << n << endl;
    // string a, b; cin >> a >> b;
	// if(a.size() != b.size() || check(a, b) == false){
	// 	cout << "WRONG_ANSWER" << endl;
	// }else show(a, b);
    // long long t; cin >> t;
    // cout << ((t * (t + 1)) / 2) % 2 << endl;
    // int n, k;
	// cin >> n >> k;
	// string s;
	// cin >> s;
	// show(n, k, s);
    // int t; cin >> t;
    // vector<vector<string>> a;
    // for(int i = 0; i < t; i++){
    //     int num;
    //     cin >> num;
    //     vector<string> b;
    //     for(int i = 0; i < num; i++){
    //         string s;
    //         cin >> s;
    //         b.push_back(s);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int a[4]; for(int i = 0; i < 4; i++) cin >> a[i];
    // sort(a, a + 4);
    // if(a[0] + a[3] == a[2] + a[1] || a[0] + a[1] + a[2] == a[3]){
    //     cout << "YES" << endl;
    // }else cout << "NO" << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, c0, c1, h; cin >> n >> c0 >> c1 >> h;
    //     string s; cin >> s;
    //     cout << solution(n, c0, c1, h, s) << endl;
    // }
    // int n, m; cin >> n >> m;
    // vector<int> games; vector<int> wallet;
    // for(int i = 0; i < n; i++){
    //     int index; cin >> index; games.push_back(index);
    // }
    // for(int i = 0; i < m; i++){
    //     int index; cin >> index; wallet.push_back(index);
    // }
    //games[i] is cost[games[i]];
    //wallet is money;
    // cout << solution(n, m, games, wallet);
    // int step = 0; //times we need to add d for number which needed
	// int n, d; cin >> n >> d;
	// int a[2000];
	// for(int i = 0; i < n; i++) cin >> a[i];
	// for(int i = 0; i < n - 1; i++){
	// 	if(a[i + 1] <= a[i]){
	// 		int smaller = a[i] - a[i + 1];
	// 		step += (smaller / d) + 1;
	// 		a[i + 1] += ((smaller / d) + 1) * d;
	// 	}
	// }
	// cout << step << endl;
    // vector<int> distance;
    // int n, d; cin >> n >> d;
    // int a[100];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // if(n == 1){
    //     cout << 2 << endl;
    // }else{
    //     for(int i = 0; i < n; i++){
    //         if(i == 0){
    //             if(check(distance, a[0] - d) == true){
    //                 distance.push_back(a[0] - d);
    //             }
    //             if(check(distance, a[0] + d) == true && a[0] + d <= a[1] - d){
    //                 distance.push_back(a[0] + d);
    //             }
    //         }else if(i == n - 1){
    //             if(check(distance, a[n - 1] + d) == true){
    //                 distance.push_back(a[n - 1] + d);
    //             }
    //             if(check(distance, a[n - 1] - d) == true && a[n - 1] - d >= a[n - 2] + d){
    //                 distance.push_back(a[n - 1] - d);
    //             }
    //         }else{
    //             if(check(distance, a[i] - d) == true && a[i] - d >= a[i - 1] + d){
    //                 distance.push_back(a[i] - d);
    //             }
    //             if(check(distance, a[i] + d) == true && a[i] + d <= a[i + 1] - d){
    //                 distance.push_back(a[i] + d);
    //             }
    //         }
    //     }
    //     cout << distance.size() << endl;
    // }
    // int t; cin >> t;
	// int a[100000];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// sort(a, a + t);
	// if(t == 2){
	// 	cout << 0 << endl;
	// }else cout << min(a[t - 1] - a[1], a[t - 2] - a[0]);
    // int a, b, c, d; cin >> a >> b >> c >> d;
    // int misha = max(3 * a / 10, a - a * c/ 250 );
    // int vaysa = max(3 * b / 10, b - b * d/ 250 );
    // if(misha > vaysa){
    //     cout << "Misha" << endl;
    // }else if(vaysa > misha){
    //     cout << "Vasya" << endl;
    // }else cout << "Tie" << endl;
    // int t; cin >> t;
    // vector<string> a;
    // for(int i = 0; i < t; i++){
    //     string s;
    //     cin >> s;
    //     a.push_back(s);
    // }
    // cout << solution(a) << endl;
    //int n; string s; cin >> n >> s; cout << solution(n, s);
    // int b, k; cin >> b >> k;
	// vector<int> a;
    // for(int i = 0; i < k; i++){
    //     int index;
    //     cin >> index;
    //     a.push_back(index);
    // }
    // show(b, k, a);
    // int t; cin >> t;
	// int a[1000000];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// cout << min(t - count(a, a + t, 1), min(t - count(a, a + t, 2), t - count(a, a + t, 3)));
    // long long sum = 0; int count = 0;
	// vector<int> odd;
	// int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index;
	// 	cin >> index;
	// 	if(index % 2 == 0){
	// 		sum += index;
	// 	}else odd.push_back(index);
	// }
	// if(odd.size() % 2 == 0){
	// 	for(int i = 0; i < odd.size(); i++) sum += odd[i];
	// }else{
	// 	sort(odd.begin(), odd.end());
	// 	int numbercanPlus = odd.size() - 1;
	// 	for(int i = odd.size() - 1; i >= 1; i--) sum += odd[i];
	// }
	// cout << sum << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<vector<int>> a(2, vector<int> (2));
	// 	for(int j = 0; j < 2; j++){
	// 		for(int k = 0; k < 2; k++){
	// 			cin >> a[j][k];
	// 		}
	// 	}
	// 	for(int j = 0; j < 2; j++) sort(a[j].begin(), a[j].end());
	// 	if(a[0][0] + a[1][0] == a[0][1] && a[0][0] + a[1][0] == a[1][1]){
	// 		cout << "YES" << endl;
	// 	}else cout << "NO" << endl;
	// }
    // int t; cin >> t; vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // int minValue = *min_element(a.begin(), a.end()); //phan tu minValue;
    // int appear = count(a.begin(), a.end(), minValue);
    // if(appear != 1){
    //     cout << "Still Rozdil" << endl;
    // }else{
    //     for(int i = 0; i < t; i++){
    //         if(a[i] == minValue){
    //             cout << i + 1 << endl;
    //             break;
    //         }
    //     }
    // }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<vector<int>> a(2, vector<int> (2));
	// 	for(int j = 0; j < 2; j++){
	// 		for(int k = 0; k < 2; k++){
	// 			cin >> a[j][k];
	// 		}
	// 	}
	// 	int length1 = find_length(a[0][0]);
	// 	int length2 = find_length(a[1][0]);
	// 	int finalength1 = length1 + a[0][1];
	// 	int finalength2 = length2 + a[1][1];
	// 	if(finalength1 > finalength2){
	// 		cout << '>' << endl;
	// 	}else if(finalength1 < finalength2){
	// 		cout << '<' << endl;
	// 	}else{
	// 		//2 length bang nhau
	// 		if(length1 > length2){
	// 			a[1][0] *= pow(10, a[1][1] - a[0][1]);
	// 		}else a[0][0] *= pow(10, a[0][1] - a[1][1]);
	// 		if(a[0][0] == a[1][0]){
	// 			cout << '=' << endl;
	// 		}else if(a[1][0] < a[0][0]){
	// 			cout << '>' << endl;
	// 		}else cout << '<' << endl;
	// 	}
	// }
    // int t; cin >> t;
	// vector<vector<int>> a;
	// for(int i = 0; i < t; i++){
	// 	int num; cin >> num;
	// 	vector<int> b;
	// 	for(int j = 0; j < num; j++){
	// 		int index;
	// 		cin >> index;
	// 		b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < t; i++) show(a[i], a[i].size());
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int sum = 0;
    // int t; cin >> t;
    // int index;
    // for(int i = 0; i < t; i++){
    //     cin >> index;
    //     sum += abs(index);
    // }
    // cout << sum << endl;
    // int t; string s; cin >> t >> s;
	// cout << solution(t, s) << endl;
    // int t; cin >> t;
    // vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     int num; cin >> num;
    //     vector<int> b;
    //     for(int j = 0; j < num; j++){
    //         int index;
    //         cin >> index;
    //         b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i], a[i].size()) << endl;
    // int t; cin >> t;
    // int a[100];
    // for(int i = 0; i < t; i++) cin >> a[i];
    // int f, l; cin >> f >> l;
    // cout << solution(t, a, f, l);
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << a[i][0] << " " << 2 * (a[i][0]) << endl;
    // set<int> a; int t, index;
	// cin >> t;
	// for(int i = 0; i < t; i++){
	// 	cin >> index;
	// 	if(index != 0) a.insert(index);
	// }
	// cout << a.size();
    // int n; string s; string res = ""; cin >> n >> s;
    // int i = 0;
    // while(i < n){
    //     if((s[i] == 'R' and s[i + 1] == 'U') or (s[i] == 'U' and s[i + 1] == 'R')){
    //         res += 'D';
    //         i += 2;
    //     }else{
    //         res += s[i];
    //         i += 1;
    //     }
    // }
    // cout << res.size() << endl;
    // int t; cin >> t;
	// vector<vector<int>> a;
	// for(int i = 0; i < t; i++){
	// 	int num; cin >> num;
	// 	vector<int> b;
	// 	for(int j = 0; j < num; j++){
	// 		int index; cin >> index; b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int b[100];
    // int g[100];
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     cin >> b[i];
    // }
    // int m; cin >> m;
    // for(int i = 0; i < m; i++) cin >> g[i];
    // sort(b, b + n);
    // sort(g, g + m);
    // int i1 = 0;
    // int i2 = 0;
    // int pair = 0;
    // while(i1 < n && i2 < m){
    //     if(abs(b[i1] - g[i2]) <= 1){
    //         i1 += 1;
    //         i2 += 1;
    //         pair += 1;
    //     }else{
    //         if(b[i1] > g[i2]){
    //             i2 += 1;
    //         }else i1 += 1;
    //     }
    // }
    // cout << pair << endl;
    // int t; cin >> t;
	// vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	int index;
	// 	cin >> index;
	// 	a.push_back(index);
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++){
	// 	cout << a[i][1] << " " << a[i][2] << " " << a[i][2];
	// 	cout << endl;
	// }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n; cin >> n;
    //     int a[2000];
    //     for(int j = 0; j < n; j++) cin >> a[j];
    //     for(int j = 0; j < n; j++){
    //         if(a[j] % 2 == 0) cout << a[j] << " ";
    //     }
    //     for(int j = 0; j < n; j++){
    //         if(a[j] % 2 == 1) cout << a[j] << " ";
    //     }
    //     cout << endl;
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int num; cin >> num; int a[100]; int b[100];
    //     for(int j = 0; j < num; j++) cin >> a[j];
    //     for(int j = 0; j < num; j++) cin >> b[j];
    //     sort(a, a + num); sort(b, b + num);
    //     for(int j = 0; j < num; j++) cout << a[j] << " ";
    //     cout << endl;
    //     for(int j = 0; j < num; j++) cout << b[j] << " ";
    // }
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (t));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < t; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // if(t == 1){
    //     cout << 0 << endl;
    // }else{
    //     int count = 0; vector<int> sum_doc; vector<int> sum_ngang;
    //     for(int i = 0; i < t; i++){
    //         int doc = 0, ngang = 0;
    //         for(int j = 0; j < t; j++){
    //             doc += a[j][i];
    //             ngang += a[i][j];
    //         }
    //         sum_doc.push_back(doc);
    //         sum_ngang.push_back(ngang);
    //     }
    //     for(int i = 0; i < t; i++){
    //         for(int j = 0; j < t; j++){
    //             if(sum_doc[i] > sum_ngang[j]) count += 1;
    //         }
    //     }
    //     cout << count << endl;
    // }
    // int t; cin >> t;
    // int a[1000];
    // for(int i = 0; i < t; i++) cin >> a[i];
    // sort(a, a + t);
    // if(t == 1){
    //     cout << 0 << endl;
    // }else if(t == 2){
    //     if(a[1] == a[0] && a[0] != 0){
    //         cout << 1 << endl;
    //     }else cout << 0 << endl;
    // }else{
    //     //tim start
    //     int start = 0;
    //     while(start < t){
    //         if(a[start] != 0) break;
    //         start += 1;
    //     }
    //     int count = 0, check = 0;
    //     for(int i = start; i < t - 2; i++){
    //         if(a[i] == a[i + 2]){
    //             check -= 1;
    //             cout << check << endl;
    //             break;
    //         }
    //     }
    //     if(check != -1){
    //         //ko co loi nao
    //         for(int i = start; i < t - 1; i++){
    //             if(i == 0){
    //                 if(a[i] == a[i + 1]){
    //                     count += 1;
    //                 }
    //             }else{
    //                 if(a[i] == a[i + 1] && a[i] != a[i - 1]) count += 1;
    //             }
    //         }
    //         cout << count << endl;
    //     }
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, x; cin >> n >> x;
    //     int a[50]; int b[50];
    //     for(int j = 0; j < n; j++) cin >> a[j];
    //     for(int j = 0; j < n; j++) cin >> b[j];
    //     show(n, x, a, b);
    // }
    // int n, skill; cin >> n >> skill; vector<int> a;
    // for(int i = 0; i < n; i++){
    //     int indec; cin >> indec; a.push_back(indec);
    // }
    // cout << solution(a, skill) << endl;
    // int n; cin >> n;
    // long long a[1000];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i]; cout << solution(a[i]) << endl;
    // }
    // int t; cin >> t; string a[1000];
    // for(int i = 0; i < t; i++){
    //     int length;
	// 	long long loops;
    //     cin >> length >> loops;
    //     cin >> a[i];
    //     cout << truesol(a[i], loops) << endl;
    // }
    //long long n, k; cin >> n >> k; show(n, k);
    // int t; cin >> t; vector<vector<long long>> a(t, vector<long long> (3));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
    // vector<vector<long long>> a(t, vector<long long> (3));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n; int a[1000];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i]; cout << solution(a[i]) << endl;
    // }
    // int t; cin >> t;
    // vector<vector<long long>> a(t, vector<long long> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    //int t; cin >> t; show(t);
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
    // vector<vector<long long>> a(t, vector<long long> (3));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int  t ; cin >> t;
	// cout << fixed << setprecision(9);
	// while (t--) {
	// 	int n, a[100000];
	// 	long long sum = 0;
	// 	cin >> n;
	// 	for(int i=0; i<n; i++) cin >> a[i];
	// 	sort(a, a+n);
	// 	for(int i=0; i<n-1; i++) sum += a[i];
	// 	cout << 1.0 * sum / (n - 1) + a[n-1] << endl;
	// }
    // int n; cin >> n; string a[10000];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     string s; char y;
    //     cin >> s >> y;
    //     vector<int> index;
    //     int length_string = s.size();
    //     for(int i = 0; i < length_string; i++){
    //         if(s[i] == y) index.push_back(i);
    //     }
    //     int length = index.size();
    //     int count = 0;
    //     for(int i = 0; i < length; i++){
    //         if(index[i] % 2 == 0){
    //             cout << "YES" << endl;
    //             count += 1;
    //             break;
    //         }
    //     }
    //     if(count == 0) cout << "NO" << endl;
    // }
    // int n; cin >> n;
    // vector<vector<int>> a;
    // for(int i = 0; i < n; i++){
    //     int num; cin >> num; vector<int> b;
    //     for(int j = 0; j < num; j++){
    //         int index; cin >> index; b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < n; i++){
    //     int length = a[i].size(); cout << solution(a[i], length) << endl;
    // }
    // int n; cin >> n;
    // int a[100];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++){
    //     if(a[i] % 2 == 0){
    //         cout << a[i] / 2 << " " << a[i] / 2 << endl;
    //     }else cout << 1 << " " << a[i] - 1 << endl;
    // }
    // int n; cin >> n;
    // vector<vector<int>> a;
    // for(int i = 0; i < n; i++){
    //     int t; cin >> t;
    //     vector<int> b;
    //     for(int j = 0; j < t; j++){
    //         int index;
    //         cin >> index;
    //         b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (3));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// vector<vector<int>> a;
	// for(int i = 0; i < t; i++){
	// 	int num; cin >> num;
	// 	vector<int> b;
	// 	for(int j = 0; j < num; j++){
	// 		int index;
	// 		cin >> index;
	// 		b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n; vector<vector<int>> a;
    // for(int i = 0; i < n; i++){
    //     vector<int> b;
    //     int index;
    //     cin >> index;
    //     for(int j = 0; j < index; j++){
    //         int num;
    //         cin >> num;
    //         b.push_back(num);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int a, b, n; cin >> a >> b >> n;
	// int count = 0;
	// while(n > 0){
	// 	if(count % 2 == 0){
	// 		n -= gcd(a, n);
	// 		count += 1;
	// 	}else{
	// 		n -= gcd(b, n);
	// 		count += 1;
	// 	}
	// }
	// if(count % 2 == 0){
	// 	cout << 1 << endl;
	// }else cout << 0 << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     vector<int> a; int n, d; cin >> n >> d;
    //     for(int j = 0; j < n; j++){
    //         int num; cin >> num; a.push_back(num);
    //     }
    //     show(a, d);
    // }
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int n, m, sx, sy, d; cin >> n >> m >> sx >> sy >> d;
    //     cout << solution(n, m, sx, sy, d) << endl;
    // }
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (2));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     int a0 = a[i][0];
    //     int a1 = a[i][1];
    //     if(a0 == 1){
    //         cout << 0 << endl;
    //     }else{
    //         if(a0 == 2){
    //             cout << a1 << endl;
    //         }else cout << 2 * a1 << endl;
    //     }
    // }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a; int n; cin >> n;
	// 	for(int j = 0; j < n; j++){
	// 		int id; cin >> id;
	// 		a.push_back(id);
	// 	}
	// 	show(n, a);
	// }
    // int a, b; cin >> a >> b;
	// if(abs(a - b) > 1 || (a == 0 && b == 0)){
	// 	cout << "NO" << endl;
	// }else cout << "YES" << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	long long ans = 0; int length; cin >> length;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index; ans += index;
	// 	}
	// 	cout << abs(ans) << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length; show(length);
	// }
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length; vector<int> a;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 	}
    //     cout << (check(a) == true ? "YES" : "NO") << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	long long a, b; cin >> a >> b; cout << solution(a, b) << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length;
	// 	vector<vector<int>> a(2, vector<int> (length));
	// 	for(int j = 0; j < 2; j++){
	// 		for(int k = 0; k < length; k++){
	// 			cin >> a[j][k];
	// 		}
	// 	}
	// 	a = change_vector(a);
	// 	cout << solution(a) << endl;
	// }
    // int t; cin >> t;
	// vector<vector<long long>> a(t, vector<long long> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	string s; cin >> s; show(s);
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a;
	// 	int length; cin >> length;
	// 	int index;
	// 	for(int j = 0; j < length; j++){
	// 		cin >> index; a.push_back(index);
	// 	}
	// 	show(length, a);
	// }
    //string s1, s2; cin >> s1 >> s2; cout << solution(s1, s2) << endl;
    // int t; cin >> t;
	// vector<vector<string>> a(t, vector<string> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// show(t, a);
    // int n, m; cin >> n >> m;
	// vector<string> a;
	// for(int i = 0; i < n; i++){
	// 	string s; cin >> s; a.push_back(s);
	// }
	// show(n, m, a);
    // long long n, k, index; cin >> n >> k;
	// vector<long long> a;
	// for(int i = 0; i < n; i++){
	// 	cin >> index; a.push_back(index);
	// }
	// cout << solution(n, k, a) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int n, m, r, c; cin >> n >> m >> r >> c; vector<string> a;
	// 	for(int j = 0; j < n; j++){
	// 		string s; cin >> s; a.push_back(s);
	// 	}
	// 	cout << solution(n, m, r, c, a) << endl;
	// }
    // int t; cin >> t; vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     vector<int> b;
    //     int num; cin >> num;
    //     for(int j = 0; j < num; j++){
    //         int index; cin >> index; b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int t; cin >> t;
    // vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     int num; cin >> num;
    //     vector<int> b;
    //     for(int j = 0; j < num; j++){
    //         int index; cin >> index; b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// vector<vector<int>> v(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> v[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(v[i]) << endl;
    // string s; cin >> s; int n; cin >> n; string a[100];
	// for(int i = 0; i < n; i++) cin >> a[i];
	// int c1 = 0, c2 = 0, sp = 0;
	// for(int i = 0; i < n; i++){
	// 	if(a[i][0] == s[1]) c1 += 1;
	// 	if(a[i][1] == s[0]) c2 += 1;
	// 	if(a[i] == s) sp += 1;
	// }
	// if(c1 < 1 || c2 < 1){
	// 	//cout << "NO" << endl;
	// 	if(sp == 0){
	// 		cout << "NO" << endl;
	// 	}else cout << "YES" << endl;
	// }else cout << "YES" << endl;
    // int index, l1, l2; cin >> l1 >> l2;
	// vector<int> a1; vector<int> a2;
	// int k, m; cin >> k >> m;
	// for(int i = 0; i < l1; i++){
	// 	cin >> index; a1.push_back(index);
	// }
	// for(int i = 0; i < l2; i++){
	// 	cin >> index; a2.push_back(index);
	// }
	// if(a1[k - 1] < a2[l2 - m]){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t, x0; cin >> t >> x0;
	// vector<vector<int>> v(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> v[i][j];
	// 	}
	// }
	// cout << solution(t, x0, v) << endl;
    // int t; cin >> t;
	// vector<vector<int>> v(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> v[i][j];
	// 	}
	// }
	// cout << solution(v) << endl;
    // int t, index; cin >> t;
	// vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	cin >> index; a.push_back(index);
	// }
	// cout << solution(a) << endl;
    //long long n, k; cin >> n >> k; show(n, k);
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length;
	// 	vector<vector<int>> v(2, vector<int> (length));
	// 	for(int x = 0; x < 2; x++){
	// 		for(int y = 0; y < length; y++){
	// 			cin >> v[x][y];
	// 		}
	// 	}
	// 	cout << solution(v) << endl;
	// }
    // int mon = 0;
	// int n, h, m; cin >> n >> h >> m;
	// vector<vector<int>> a(m, vector<int> (3));
	// for(int i = 0; i < m; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 1; i <= n; i++) mon += maxHeightcanbuild(a, h, i);
	//money can make when build tower(i);
	//solution
	//cout << mon << endl;
    // vector<int> value;
	// int acc = 0;
	// int n, m; cin >> n >> m;
	// vector<vector<int>> a(n, vector<int> (2));
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// //true: exist;
	// //false: dont exist;
	// for(int i = 1; i <= m; i++){
	// 	int count = 0; //count how many vector got accepted;
	// 	int start = 0;
	// 	while(start < n){
	// 		if(check(a[start], i) == true) break;
	// 		count += 1;
	// 		start += 1;
	// 	}
	// 	if(count == n){
	// 		value.push_back(i);
	// 		acc += 1;
	// 	}
	// }
	// cout << acc << endl;
	// for(int i = 0; i < acc; i++) cout << value[i] << " ";
    //int n, k, t; cin >> n >> k >> t;
	//10 = n = sum of people;
	//5  = k = maximum standing people at same time;
	//12 = t = find standing people at t;
	// if(t <= n){
	// 	if(t <= k){
	// 		cout << t << endl;
	// 	}else cout << k << endl;
	// }else cout << k - (t - n) << endl;
    // int a[4]; for(int i = 0; i < 4; i++) cin >> a[i];
    // sort(a, a + 4);
    // int tri = 0, seg = 0;
    // for(int i = 0; i < 2; i++){
    //     if(a[i] + a[i + 1] > a[i + 2]) tri += 1;
    // }
    // for(int i = 0; i < 2; i++){
    //     if(a[i] + a[i + 1] == a[i + 2]) seg += 1;
    // }
    // if(tri != 0){
    //     cout << "TRIANGLE" << endl;
    // }else{
    //     if(seg != 0){
    //         cout << "SEGMENT" << endl;
    //     }else cout << "IMPOSSIBLE" << endl;
    // }
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     vector<int> a;
    //     int n, k; cin >> n >> k;
    //     for(int j = 0; j < n; j++){
    //         int index;
    //         cin >> index;
    //         a.push_back(index);
    //     }
    //     cout << solution(n, k, a) << endl;
    // }
    // int t; cin >> t; vector<vector<string>> a;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length;
	// 	vector<string> b;
	// 	for(int j = 0; j < length - 2; j++)	{
	// 		string s; cin >> s; b.push_back(s);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
	// int t; string s; cin >> t >> s;
	// cout << solution(t, s) << endl;
    // int a, b, c; cin >> a >> b >> c;
    // if(a == b){
    //     if(c == 0){
    //         cout << 0 << endl;
    //     }else cout << '?' << endl;
    // }else if(a > b){
    //     if(b + c >= a){
    //         cout << '?' << endl;
    //     }else cout << '+' << endl;
    // }else{
    //     //b > a;
    //     if(a + c >= b){
    //         cout << '?' << endl;
    //     }else cout << '-' << endl;
    // }
    // int t; cin >> t; int a[100];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// sort(a, a + t);
	// int sum = 0;
	// for(int i = 0; i < t; i++){
	// 	if(i % 2 == 1) sum += a[i] - a[i - 1];
	// }
	// cout << sum << endl;
    // int t; cin >> t; vector<vector<int>> a;
    // for(int i = 0; i < t; i++){
    //     int num; cin >> num;
    //     vector<int> b;
    //     for(int j = 0; j < num; j++){
    //         int index; cin >> index; b.push_back(index);
    //     }
    //     a.push_back(b);
    // }
    // for(int i = 0; i < t; i++) show(a[i]);
    // int n, k; cin >> n >> k;
    // vector<vector<int>> a(n, vector<int> (2));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // int maxValue = -1000000000;
    // for(int i = 0; i < n; i++){
    //     int fi = a[i][0];
    //     int ti = a[i][1];
    //     if(ti <= k){
    //         if(fi > maxValue) maxValue = fi;
    //     }else{
    //         int j = fi - ti + k;
    //         if(j > maxValue) maxValue = j;
    //     }
    // }
    // cout << maxValue << endl;
    // int t; cin >> t; int index; vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	cin >> index; a.push_back(index);
	// }
	// for(int i = 0; i < t; i++){
	// 	if(360 % (180 - a[i]) == 0){
	// 		cout << "YES" << endl;
	// 	}else cout << "NO" << endl;
	// }
    // int t; cin >> t; vector<vector<int>> a;
	// for(int i = 0; i < t; i++){
	// 	vector<int> b;
	// 	for(int j = 0; j < 2; j++){
	// 		int index; cin >> index; b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// show(a);
    // int n; cin >> n;
	// vector<int> a(n+1, 0);
	// for (int i = 1; i <= n; i++){
	// 	cin >> a[i]; a[i] += a[i-1];
	// }
	// int q; cin >> q; int pos; int l, r, mid;
	// while (q--){
	// 	cin >> pos;
	// 	l = 1;
	// 	r = n;
	// 	while (r > l){
	// 		mid = (l+r)/2;
	// 		if (pos > a[mid]) l = mid+1;
	// 		else r= mid;
	// 	}
	// 	cout << r << endl;
	// } 
    // string s = ""; int n, t; cin >> n >> t;
    // if(t != 10){
    //     for(int i = 0; i < n; i++) s += to_string(t);
    // }else{
    //     if(n == 1){
    //         s += "-1";
    //     }else{
    //         for(int i = 0; i < n - 1; i++) s += '1';
    //         s += '0';
    //     }
    // }
    // cout << s << endl;
    // string s; cin >> s;
	// int count = 0;
	// for(int i = 0; i < s.size(); i++){
	// 	if(s[i] == 'a') count += 1;
	// }
	// if(count > s.size() / 2){
	// 	cout << s.size() << endl;
	// }else cout << count * 2 - 1 << endl;
    // int t; cin >> t; vector<int> a;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index; a.push_back(index);
	// }
	// cout << solution(a) << endl;
    // long long n, m; cin >> n >> m;
	// if(m == 1){
	// 	if(n == 1){
	// 		cout << 0 << " " << 0 << endl;
	// 	}else cout << n * (n - 1) / 2 << " " << n * (n - 1) / 2  << endl;
	// }else{
	// 	long long min = 0;
	// 	long long max = (n - m + 1) * (n - m) / 2;
	// 	if(n % m == 0){
	// 		min += m * (n / m) * ((n / m) - 1) / 2;
	// 	}else{
	// 		long long thua = n % m;
	// 		min += (m - n % m) * (n / m) * ((n / m) - 1) / 2;
	// 		min += (n % m) * ((n / m) + 1) * (n / m) / 2;
	// 	}
	// 	cout << min << " " << max << endl;
	// }
    // int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    // if(x1 == x2 || y1 == y2){
    //     if(x1 == x2){
    //         int length = abs(y2 - y1); //length: length of square size
    //         cout << x1 + length << " " << y1 << " " << x2 + length << " " << y2 << endl;
    //     }else{
    //         //y1 == y2
    //         int length = abs(x1 - x2);
    //         cout << x1 << " " << y1 + length << " " << x2 << " " << y2 + length << endl;
    //     }
    // }else{
    //     if(abs(x1 - x2) != abs(y1 - y2)){
    //         cout << -1 << endl;
    //     }else{
    //         //2 goc
    //         cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    //     }
    // }
    // int n; cin >> n;
    // int sum(0);
    // for(int i = 0; i < n; i++){
    //     int temp; cin >> temp; sum += temp;
    // }
    // cout << sum/n;
    // int t; cin >> t;
	// vector<vector<int>> a;
	// for(int i = 0; i < t; i++){
	// 	int num; cin >> num;
	// 	vector<int> b;
	// 	for(int j = 0; j < num; j++){
	// 		int index; cin >> index; b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < t; i++) show(a[i], a[i].size());
    // string res = ""; vector<string> a;
    // string s1 = "qwertyuiop";
    // string s2 = "asdfghjkl;";
    // string s3 = "zxcvbnm,./";
    // a.push_back(s1);
    // a.push_back(s2);
    // a.push_back(s3);
    // char s; string mess; cin >> s >> mess;
    // int length = mess.size();
    // for(int i = 0; i < length; i++){
    //     for(int j = 0; j < 3; j++){
    //         for(int k = 0; k < 10; k++){
    //             if(mess[i] == a[j][k]){
    //                 if(s == 'L'){
    //                     res += a[j][k + 1];
    //                 }else res += a[j][k - 1];
    //             }
    //         }
    //     }
    // }
    // cout << res << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    //     int n, x; cin >> n >> x;
    //     int a[1000];
    //     for(int i = 0; i < n; i++) cin >> a[i];
    //     show(a, n, x);
    // }
    // int t; cin >> t;
    // int a[100];
    // int sum = 0, count = 0;
    // for(int i = 0; i < t; i++){
    //     cin >> a[i]; sum += a[i];
    // }
    // for(int i = 0; i < t; i++){
    //     if((sum - a[i]) % 2 == 0) count += 1;
    // }
    // cout << count << endl;
    // int t; cin >> t;
    // int a[100000];
    // for(int i = 0; i < t; i++) cin >> a[i];
    // sort(a, a + t);
    // long long sum_min = 0;
    // long long sum_max = 0;
    // for(int i = 0; i < t; i++){
    // 	if(i < t / 2){
    // 		sum_min += a[i];
	// 	}else sum_max += a[i];
	// }
    //cout << sum_max << " " << sum_min << endl;
    //cout << sum_min * sum_min + sum_max * sum_max;
    // int n; cin >> n;
	// vector<vector<int>> a;
	// for(int i = 0; i < n; i++){
	// 	int num; cin >> num; vector<int> b;
	// 	for(int j = 0; j < num; j++){
	// 		int index; cin >> index; b.push_back(index);
	// 	}
	// 	a.push_back(b);
	// }
	// for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int t, n, a[999999]; cin >> t;
	// while(t-- && cin >> n){
	// 	for(int i = 1; i <= n; i++) cin >> a[i];
	// 	sort(a + 1, a + n + 1),puts(a[n] - a[n - 1] > 1 ?"NO":"YES");
	// }
    // int n; cin >> n;
    // int a[100];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // for(int i = 0; i < n; i++) cout << a[i] / 2 << endl;
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (2));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
    // vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (3));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++) solution(a[i]);
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int num; cin >> num;
    //     int a[1000];
    //     for(int j = 0; j < num; j++) cin >> a[j];
    //     sort(a, a + num);
    //     cout << solution(a, num) << endl;
    // }
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     int m; cin >> m;
    //     int a[50]; int b[50];
    //     for(int j = 0; j < m; j++) cin >> a[j];
    //     for(int j = 0; j < m; j++) cin >> b[j];
    //     cout << solution(a, b, m) << endl;
    // }
    // int n; cin >> n;
    // vector<vector<int>> a(n, vector<int> (2));
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int n; cin >> n;
	// vector<int> a;
	// for(int i = 0; i < n; i++){
	// 	int j; cin >> j; a.push_back(j);
	// }
	// for(int k = 0; k < n; k++){
	// 	if(a[k] % 4 == 0){
	// 		cout << "YES" << endl;
	// 		for(int i = 1; i <= a[k] / 2; i++) cout << 2*i << " ";
	// 		for(int i = 1; i <= a[k] / 2 - 1; i++) cout << 2*i - 1 << " ";
	// 		cout << 6*a[k] /4 - 1 << endl;
	// 	}else cout << "NO" << endl;
	// }
    // int n; cin >> n; vector<int> a;
	// for(int i = 0; i < n; i++){
	// 	int num; cin >> num; a.push_back(num);
	// }
	// for(int i = 0; i < n; i++){
	// 	if(a[i] < 10){
	// 		cout << a[i] << endl;
	// 	}else{
	// 		vector<int> res = smaller(a[i]);
	// 		cout << solution(res) << endl;
	// 	}
	// }
    // int n; cin >> n;
	// vector<vector<int>> a(n, vector<int> (2));
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // string s; cin >> s; int st = (s.size() - 1) / 2; cout << s[st];
    // int left = st - 1, right = st + 1;
    // while(left > -1 and right < s.size()){
    //     cout << s[right] << s[left];
    //     left -= 1;
    //     right += 1;
    // }
    // while(left > -1){
    //     cout << s[left];
    //     left -= 1;
    // }
    // while(right < s.size()){
    //     cout << s[right];
    //     right += 1;
    // }
    // int t, sum = 0; cin >> t; vector<int> a;
    // for(int i = 0; i < t; i++){
    //     int index; cin >> index; a.push_back(index);
    // }
    // vector<int> b = a;
    // sort(b.begin(), b.end());
    // int can = 0, length = a.size();
    // vector<int> res;
    // for(int i = b.size() - 1; i >= 0; i--){
    // 	for(int j = 0; j < a.size(); j++){
    // 		if(a[j] == b[i] && check(res, j + 1) == true){
    // 			sum += can * a[j] + 1; can += 1; res.push_back(j + 1);
	// 		}
	// 	}
	// }
	// cout << sum << endl;
    // for(int i = 0; i < t; i++) cout << res[i]<< " ";
    // int t; cin >> t; vector<vector<long long>> a(t, vector<long long> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++){
	// 	if(a[i][0] % 2 == 0){
	// 		cout << min(a[i][0] * a[i][1], a[i][0] * a[i][2] / 2) << endl;
	// 	}else cout << min(a[i][0] * a[i][1], (a[i][0] / 2)*a[i][2] + a[i][1]) << endl;
	// }
    // int t; cin >> t;
	// if(t == 3){
	// 	cout << 1 << " " << 1 << " " << 1 << endl;
	// }else{
    //     if(t % 3 != 0){
    //         cout << 1 << " " << 2 << " " << t - 3;
    //     }else{
	// 	// t != 3 and t % 3 == 0
    //         cout << 1 << " " << 1 << " " << t - 2 << endl;
    //     }	
	// }
    // int t; cin >> t;
    // if(t == 0){
    //     cout << 1 << endl;
    // }else{
    //     //1: 8
    //     //2: 4
    //     //3: 2
    //     //4: 6
    //     //5: 8
    //     //6: 4
    //     //7: 2
    //     //8: 6
    //     //9: 8
    //     if(t % 4 == 1){
    //         cout << 8 << endl;
    //     }else if(t % 4 == 2){
    //         cout << 4 << endl;
    //     }else if(t % 4 == 3){
    //         cout << 2 << endl;
    //     }else cout << 6 << endl;
    // }
    // int t; cin >> t;
	// vector<vector<long long>> a(t, vector<long long> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << a[i][0] + a[i][1] + a[i][2] - 1 << endl;
    // int t; cin >> t; vector<vector<string>> a(t, vector<string> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int k, n, s, p; cin >> k >> n >> s >> p;
	// int sheetfor_onepp = 0;
	// if(n % s == 0){
	// 	sheetfor_onepp = n / s;
	// }else sheetfor_onepp = n / s + 1;
	// int sheetsneed = sheetfor_onepp * k;
	// if(sheetsneed % p == 0){
	// 	cout << sheetsneed / p << endl;
	// }else cout << sheetsneed / p + 1 << endl;
    // int x, y, z, t1, t2, t3; cin >> x >> y >> z >> t1 >> t2 >> t3;	
	// int timeWalk = abs(x - y) * t1, timeUseTM = abs(x - z) * t2 + 3*t3 + abs(x - y) * t2;
	// if(timeWalk >= timeUseTM){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) show(a[i]);
    // int n1, n2, k1, k2; cin >> n1 >> n2 >> k1 >> k2;
	// cout << (n1 > n2 ? "First" : "Second") << endl;
    //int t; cin >> t; cout << solution(t) << endl;
    // int t; cin >> t;
	// cout << (t % 2 == 0 ? 0 : 1) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length;
	// 	vector<vector<int>> a(2, vector<int> (length));
	// 	for(int j = 0; j < 2; j++){
	// 		for(int k = 0; k < length; k++){
	// 			cin >> a[j][k];
	// 		}
	// 	}
	// 	long long second = 0;
	// 	int maxValue = 0;
	// 	for(int j = 0; j < length; j++){
	// 		second += a[0][j] + a[1][j];
	// 		if(a[1][j] > maxValue) maxValue = a[1][j];
	// 	}
	// 	cout << second - maxValue << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int prices = 0, b, p, f, h, c; cin >> b >> p >> f >> h >> c;
	// 	if(b >= 2 * p + 2 * f){
	// 		prices = p * h + f * c;
	// 	}else{
	// 		//buns not enough for both sandwichs;
	// 		if(h >= c){
	// 			//hamburger brings more money;
	// 			if(b >= 2 * p){
	// 				prices += p * h;
	// 				b -= 2 * p;
	// 				prices += min((b / 2) * c, f * c);
	// 			}else{
	// 				prices += (b / 2) * h; // onlyhamburger;
	// 			}
	// 		}else{
	// 			if(b >= 2 * f){
	// 				prices += f * c;
	// 				b -= 2 * f;
	// 				prices += min((b / 2) * h, p * h);
	// 			}else prices += (b / 2) * c;
	// 		}
	// 	}
	// 	cout << prices << endl;
	// }
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (2));
    // for(int i = 0; i < t; i++){
    // 	for(int j = 0; j < 2; j++){
    // 		cin >> a[i][j];
	// 	}
	// }
	// int page; cin >> page;
	// int start = 0;
	// while(start < t){
	// 	if(page >= a[start][0] && page <= a[start][1]) break;
	// 	start += 1;
	// }
	// cout << t - start << endl;
    // int t; cin >> t;
    // for(int i = 0; i < t; i++){
    // 	int num; cin >> num;
    // 	if(num % 2 == 0){
    // 		for(int j = 1; j <= num; j++){
    // 			if(j % 2 == 1){
    // 				cout << j + 1 << " ";
	// 			}else cout << j - 1 << " ";
	// 		}
	// 		cout << endl;
	// 	}else{
	// 		//num % 2 == 1;
	// 		for(int j = 1; j <= num; j++){
	// 			if(j == 1){
	// 				cout << 1 << " ";
	// 			}else{
	// 				if(j % 2 == 0){
	// 					cout << j + 1 << " ";
	// 				}else cout << j - 1 << " ";
	// 			}
	// 			cout << endl;
	// 		}
	// 	}
	// }
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (4));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++){
	// 	sort(a[i].begin(), a[i].end());
	// 	int differ = count(a[i]);
	// 	// 1 <= differ <= 4;
	// 	if(differ == 1){
	// 		cout << a[i][0] * a[i][0] << endl;
	// 	}else if(differ == 2){
	// 		if(a[i][0] == a[i][1] && a[i][2] == a[i][3]){
	// 			cout << a[i][0] * a[i][3] << endl;
	// 		}else{
	// 			cout << a[i][0] * a[i][1] << endl;
	// 		}
	// 	}else if(differ == 4){
	// 		cout << a[i][0] * a[i][2] << endl;
	// 	}else{
	// 		//differ == 3;
	// 		if(a[i][0] == a[i][1]){
	// 			cout << a[i][0] * a[i][2] << endl;
	// 		}else if(a[i][1] == a[i][2]){
	// 			cout << a[i][0] * a[i][1] << endl;
	// 		}else{
	// 			cout << a[i][0] * a[i][3] << endl;
	// 		}
	// 	}
	// }
    // int x, y, z, a, b, c; cin >> x >> y >> z >> a >> b >> c;
	// if(a >= x && (a - x) + b >= y && (a + b + c - x - y) >= z){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t; cin >> t; int a[200000];
	// for(int i = 0; i < t; i++) cin >> a[i];
	// int value = a[t - 1], start = t - 1;
	// while(start >= 0){
	// 	if(a[start] != value){
	// 		cout << start + 1 << endl;
	// 		break;
	// 	}
	// 	start -= 1;
	// }
    // int t; cin >> t; vector<vector<int>> v(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> v[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(v[i]) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int n; cin >> n; cout << solution(n) << endl;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length; for(int j = 0; j < length; j++) cout << 1 << " ";
	// 	cout << endl;
	// }
    // int t; cin >> t; vector<vector<int>> v;
	// for(int i = 0; i < t; i++){
	// 	vector<int> b; int length; cin >> length;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index; b.push_back(index);
	// 	}
	// 	v.push_back(b);
	// }
	// for(int i = 0; i < t; i++) cout << solution(v[i]) << endl;
    // int t; cin >> t;
	// vector<vector<int>> v(t, vector<int> (3));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin >> v[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(v[i]) << endl;
    // string s;
    // while(cin >> s) cout << "NO" << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index; show(index);
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index; solution(index);
	// }
    // int n, m, k; cin >> n >> m >> k;
	// vector<int> a;
	// for(int i = 0; i < n; i++){
	// 	int index; cin >> index; a.push_back(index);
	// }
	// cout << solution(a, n, m, k) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a; int length; cin >> length;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 	}
	// 	show(a);
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int n, q; cin >> n >> q;
	// 	vector<int> a;
	// 	for(int j = 0; j < n; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 	}
	// 	vector<vector<int>> que(q, vector<int> (2));
	// 	for(int j = 0; j < q; j++){
	// 		for(int k = 0; k < 2; k++){
	// 			cin >> que[j][k];
	// 		}
	// 	}	
	// 	solution(n, a, q, que);
	// }
    // int t; cin >> t; vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// for(int i = 0; i < t; i++) cout << solution(a[i]) << endl;
    // int t; cin >> t;
	// vector<vector<int>> a(t, vector<int> (2));
	// for(int i = 0; i < t; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// cout << solution(t, a) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	long long index; cin >> index; s(index);
	// }
    // int t, index; cin >> t;
	// while(t--){
	// 	cin >> index; show(index);
	// }
    //int t; cin >> t; cout << 0 << " " << 0 << " " << t << endl;
    // int t; cin >> t;
	// int maxVal = -100000000;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index;
	// 	if(index < 0){
	// 		if(index > maxVal) maxVal = index;
	// 	}else{
	// 		if(sqrt(index) - (int)sqrt(index) != 0){
	// 			if(index > maxVal) maxVal = index;
	// 		}
	// 	}
	// }
	// cout << maxVal << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; cin >> length; vector<int> a;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index;
	// 		a.push_back(index);
	// 	}
	// 	cout << solution(a) << endl;
	// }
    //string s; cin >> s; cout << solution(s) << endl;
    //int n, m; cin >> n >> m; cout << solution(n, m) << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	string s; cin >> s; show(s);
	// }
    // int n, m; cin >> n >> m;
	// vector<vector<string>> root(n, vector<string> (2));
	// vector<vector<string>> user(m, vector<string> (2));
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> root[i][j];
	// 	}
	// }
	// for(int i = 0; i < m; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> user[i][j];
	// 	}
	// }
	// show(n, m, root, user);
    // float n, m; cin >> n >> m;
	// vector<vector<float>> sup(n, vector<float> (2));
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> sup[i][j];
	// 	}
	// }
	// float minValue = sup[0][0] / sup[0][1];
	// for(int i = 1; i < n; i++){
	// 	if(sup[i][0] / sup[i][1] < minValue){
	// 		minValue = sup[i][0] / sup[i][1];
	// 	}
	// }
	// cout << fixed << setprecision(8) << m * minValue << endl;
    //int t; cin >> t; cout << 2 * t - t / 2;
    // int t; cin >> t;
	// long long sum = 0;
	// vector<vector<long long>> v(2, vector<long long> (t));
	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0; j < t; j++){
	// 		cin >> v[i][j];
	// 		if(i == 0) sum += v[i][j];
	// 	}
	// }
	// sort(v[1].begin(), v[1].end());
	// if(sum <= v[1][t - 1] + v[1][t - 2]){
	// 	cout << "YES" << endl;
	// }else cout << "NO" << endl;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a;
	// 	int length; cin >> length; int index;
	// 	for(int j = 0; j < length; j++){
	// 		cin >> index;
	// 		a.push_back(index);
	// 	}
	// 	sort(a.begin(), a.end());
	// 	cout << a[length - 1] + a[length - 2] << endl;
	// }
    // int n, m, index; cin >> n >> m;
	// vector<int> a;
	// vector<int> b;
	// for(int i = 0; i < n; i++){
	// 	cin >> index; a.push_back(index);
	// }
	// for(int i = 0; i < m; i++){
	// 	cin >> index; b.push_back(index);
	// }
	// cout << solution(a, b) << endl;
    //int a, b; cin >> a >> b; show(a, b);
    //string s; cin >> s; show(s);
    // int t; cin >> t;
	// while(t--){
	// 	long long n; cin >> n;
	// 	long long mini = 0;
	// 	long long maxi = -1e9;
	// 	while(n--){
	// 		long long a, b; cin >> a >> b;
	// 		mini += min(a, b);
	// 		maxi = max(maxi, max(a, b));
	// 	}
	// 	if(maxi == -1e9) cout << 0 << endl;
	// 	else{
	// 		long long int ans = 2*(mini + maxi);
	// 		cout << ans << endl;
	// 	}
	// }
    // set<int> a; int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index;
	// 	if(index != 0) a.insert(index);
	// }
	// cout << a.size() << endl;
    // int t; cin >> t; vector<vector<int>> a(2, vector<int> (t));
	// for(int i = 0; i < 2; i++){
	// 	for(int j = 0; j < t; j++){
	// 		cin >> a[i][j];
	// 	}
	// }
	// cout << solution(t, a) << endl;
    // int sum = 0;
	// int a, b, c; cin >> a >> b >> c;
	// int length; cin >> length;
	// int arr[100000];
	// for(int i = 0; i < length; i++){
	// 	cin >> arr[i];
	// 	if(arr[i] > b and arr[i] < c) sum += 1;
	// }
	// cout << sum << endl;
    //int a, b; cin >> a >> b; cout << g(min(a, b)) << endl;
    //int t; cin >> t; show(t);
    // int x, y; cin >> x >> y;
	// if((x > 0 and y > 0) || (x < 0 and y < 0)){
	// 	//y = -x + a;
	// 	int a = x + y;
	// 	if(a > 0){
	// 		cout << 0 << " " << a << " " << a << " " << 0 << endl;
	// 	}else cout << a << " " << 0 << " " << 0 << " " << a << endl;
	// }else{
	// 	//y = x + a;
	// 	int a = y - x;
	// 	if(-1 * a < 0){
	// 	    cout << -1 * a << " " << 0 << " " << 0 << " " << a << endl;	
	// 	}else cout << 0 << " " << a << " " << -1 * a << " " << 0 << endl;
	// }
    // int n, m; cin >> n >> m; vector<int> a;
	// for(int i = 0; i < m; i++){
	// 	int index; cin >> index; a.push_back(index);
	// }
	// vector<int> countt;
	// for(int i = 1; i <= n; i++) countt.push_back(count(a.begin(), a.end(), i));
	// cout << *min_element(countt.begin(), countt.end());
    // int n, m; cin >> n >> m;
	// vector<string> score;
	// for(int i = 0; i < n; i++){
	// 	string s; cin >> s; score.push_back(s);
	// }
	// cout << solution(n, m, score);
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	vector<int> a; int length; cin >> length;
	// 	for(int j = 0; j < length; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 	}
	// 	show(length, a);
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int length; string s; cin >> length >> s;
	// 	long long maxii = 0;
	// 	long long maxoo = 0;
	// 	long long on = 0;
	// 	long long zer = 0;
	// 	for(int i = 0; i < length; i++){
	// 		if(s[i] == '1'){
	// 			on += 1;
	// 		}else zer += 1;
	// 	}
	// 	for(int i = 0; i < length; i++){
	// 		long long cnt = 0;
	// 		if(s[i] == '1'){
	// 			while(i < length and s[i] == '1'){
	// 				i += 1;
	// 				cnt += 1;
	// 			}
	// 		}maxii = max(maxii, cnt);
	// 	}
	// 	for(int i = 0; i < length; i++){
	// 		long long cnt = 0;
	// 		if(s[i] == '0'){
	// 			while(i < length and s[i] == '0'){
	// 				i += 1;
	// 				cnt += 1;
	// 			}
	// 		}maxoo = max(maxoo, cnt);
	// 	}
	// 	long long f = max(pow(maxii, 2), pow(maxoo, 2));
	// 	cout << max(on*zer, f) << endl;
	// }
    // int t; cin >> t; int a[100];
	// for(int i = 0; i < t; i++) cin >> a[i];
	//1st-game = Alex - Bob;
	//1 - Alex;
	//2 - Bob;
	//3 - Carl;
	//int c = 0;
	//who waiting -> so cant win of course;
	// vector<int> res;
	// res.push_back(1);
	// res.push_back(2);
	// int queue = 3;
	// for(int i = 0; i < t; i++){
	// 	if(check(res, a[i]) == false){
	// 		cout << "NO" << endl;
	// 		c += 1;
	// 	}else{
	// 		//winner in the game;
	// 		int j = 0;
	// 		if(a[i] == res[0]) j = 1;
	// 		int tmp = res[j];
	// 		res[j] = queue;
	// 		queue = tmp;
	// 	}
	// 	if(c != 0) break;
	// }
	// if(c == 0) cout << "YES" << endl;
    // float a, b; cin >> a >> b; int t; cin >> t;
	// float minValue = 10000000;
	// for(int i = 0; i < t; i++){
	// 	float xi, yi, vi;
	// 	cin >> xi >> yi >> vi;
	// 	float time = sqrt(pow(abs(a - xi), 2) + pow(abs(b- yi), 2)) / vi;		
	// 	//a2 + b2 = pow(abs(a - xi), 2) + pow(abs(b- yi), 2);		
	// 	if(time < minValue) minValue = time;
	// }
	// cout << fixed << setprecision(10) << minValue << endl;
    // int n, q; cin >> n >> q;
	// long long a[200000];
	// for(int i = 0; i < n; i++) cin >> a[i];
	// sort(a, a + n);
	// for(int i = 1; i < n; i++) a[i] = a[i] + a[i - 1];
	// vector<vector<int>> buy(q, vector<int> (2));
	// for(int i = 0; i < q; i++){
	// 	for(int j = 0; j < 2; j++){
	// 		cin >> buy[i][j];
	// 	}
	// }
	// for(int i = 0; i < q; i++) cout << solution(n, a, buy[i]) << endl;
    //int t; cin >> t; string s; cin >> s; cout << solution(t, s) << endl;
    // ios_base::sync_with_stdio(0);
	// cin >> t;
	// while(t--){
	// 	cin >> n; for(i = 1; i <= n; i++) cin >> a[i];
	// 	cin >> m; for(i = 1; i <= m; i++) cin >> b[i];
	// 	sort(a + 1, a + n + 1);
	// 	sort(b + 1, b + m + 1);
	// 	if(a[n] > b[m]){
	// 		cout<<"Alice\nAlice\n";continue;
	// 	}
	// 	if(a[n]<b[m]){
	// 		cout<<"Bob\nBob\n";continue;
	// 	}
	// 	cout<<"Alice\nBob\n";continue;
	// }
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int index; cin >> index;
	// 	if(index % 2 == 0){
	// 		cout << 0 << endl;
	// 	}else cout << solution(index) << endl;
	// }
    // int n, d; cin >> n >> d; int a[100000];
	// for(int i = 0; i < n; i++) cin >> a[i];
	// sort(a, a + n);
	// //length = n;
	// int count = 0;
	// int length = n;
	// int st = length - 1;
	// while(length > 0){
	// 	if(length <= d / a[st]) break;
	// 	count += 1;
	// 	length -= d / a[st] + 1;
	// 	st -= 1;
	// }
	// cout << count;
    // int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int maxVal = 0, minVal = 101;
	// 	vector<int> a;
	// 	for(int j = 0; j < 4; j++){
	// 		int index; cin >> index; a.push_back(index);
	// 		if(index > maxVal) maxVal = index;
	// 		if(index < minVal) minVal = index;
	// 		//2 phan tu max min se cheo nhau
	// 	}
	// 	if(a[0] == minVal and a[3] == maxVal || a[0] == maxVal and a[3] == minVal){
	// 			cout << "YES" << endl;
	// 	}else if(a[1] == minVal and a[2] == maxVal || a[1] == maxVal and a[2] == minVal){
	// 		cout << "YES" << endl;
	// 	}else cout << "NO" << endl;
	// }
    // int t, a, b, c; cin >> t;
    // while(t--){
    //     cin >> a >> b >> c;
    //     if(a > max(b, c)){
    //         cout << 0 << " ";
    //     }else cout << max(b, c) - a + 1 << " ";
    //     if(b > max(a, c)){
    //         cout << 0 << " ";
    //     }else cout << max(a, c) - b + 1 << " ";
    //     if(c > max(b, a)){
    //         cout << 0 << " ";
    //     }else cout << max(b, a) - c + 1 << " ";
    //     cout << endl;
    // }
    // int n; cin >> n;
    // for(int i = 0; i < n; i++){
    //     vector<vector<int>> a(3, vector<int> (2));
    //     for(int j = 0; j < 3; j++){
    //         for(int k = 0; k < 2; k++){
    //             cin >> a[j][k];
    //         }
    //     }
    //     cout << solution(a) << endl;
    // }
    // int n; cin >> n; int a[1000];
    // for(int i = 0; i < n; i++) cin >> a[i];
	// for(int i = 0; i < n; i++) cout << solution(a[i]) << endl;
    // int n, l; cin >> n >> l;
    // vector<int> a;
    // for(int i = 0; i < n; i++){
    //     int num; cin >> num; a.push_back(num);
    // }
    // for(int i = 0; i < n - 1; i ++){
    //     for(int j = 0; j < n - 1 - i; j++){
    //         if(a[j] > a[j + 1]){
    //             int tmp = a[j];
    //             a[j] = a[j + 1];
    //             a[j + 1] = tmp;
    //         }
    //     }
    // }
    // double x = 2 * a[0];
    // double y = (l - a[n - 1]) * 2;
    // double z = 0;
    // for(int i = 0; i < n - 1; i++){
    //     if(a[i + 1] - a[i] > z){
    //         z = a[i + 1] - a[i];
    //     }
    // }
    // if((x >= y) and (x >= z)){
    // 	cout<<fixed<<setprecision(9)<<(double)x/2;
	// }else{
	// 	if(y >= z){
	// 		cout<<fixed<<setprecision(9)<<(double)y/2;
	// 	}else cout<<fixed<<setprecision(9)<<(double)z/2;
	// }
    // int n, cv = INT_MAX; cin >> n;
    // for(int i = 1; i * i <= n; i++){
    //     if(n % i == 0){
    //         if(2*(i + n / i) < cv) cv = 2*(i + n / i);
    //     }
    // }
    // cout << cv << endl;
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //run();

    solve();

    return 0;
}