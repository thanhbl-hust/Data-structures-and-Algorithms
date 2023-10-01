/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void binary_convert(){
  
  int n; cin >> n;

  vector<int> a;

  while(n != 0){
    a.push_back(n % 2);
    n /= 2;
  }

  reverse(a.begin(), a.end());
  for(int i = 0; i < a.size(); i++) cout << a[i];

}

int main(){

  binary_convert();

  return 0;
}