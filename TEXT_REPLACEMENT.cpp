/*
  author: thanhbl-chler-hust;
  ** Ha Long High School for gifted **
  ** CS - SOICT/HUST **
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

  string P1, P2, root;

  getline(cin, P1);
  getline(cin, P2);
  getline(cin, root);

  string res = "";
  int st = 0;
  while(st < root.size()){
    if(root.substr(st, P1.size()) != P1){
      res += root[st];
      st += 1;
    }else{
      res += P2;
      st += P1.size();
    }
  }

  cout << res << endl;
  
  /*

  OPENERP
  
  Example case
  Case 1
  P1  : AI
  P2  : Artificial Intelligence
  Root: Recently, AI is a key technology. AI enable efficient operations in many fields.
  Res : Recently, Artificial Intelligence is a key technology. Artificial Intelligence enable efficient operations in many fields.

  Case 2
  P1  : VRP
  P2  : Vehicle Routing Problem
  Root: VRP is very popular research problem, started in 1959.
  Res : Vehicle Routing Problem is very popular research problem, started in 1959.

  */
}

int main(){

  solve();

  return 0;
}