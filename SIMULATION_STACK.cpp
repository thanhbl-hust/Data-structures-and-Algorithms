/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
  /*Stack -- FILO*/
  vector<int> a;
  while(1){
    string s; cin >> s;
    if(s == "#") break;
    if(s == "PUSH"){
      int n; cin >> n; a.push_back(n);
    }else{
      if(a.size() != 0){
        cout << a[a.size() - 1] << endl;
        a.pop_back();
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