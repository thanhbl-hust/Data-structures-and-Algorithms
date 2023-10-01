/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
  /*Queue -- FIFO*/
  vector<int> a;
  while(1){
    string s; cin >> s;
    if(s == "#") break;
    if(s == "PUSH"){
      int n; cin >> n; a.push_back(n);
    }else{
      if(a.size() != 0){
        cout << a[0] << endl;
        a.erase(a.begin());
      }else{
        cout << "NULL" << endl;
      }
    }
  }
}
int main(){
  solve();
  return 0;
}
