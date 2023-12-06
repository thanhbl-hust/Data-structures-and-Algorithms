/*
    Solving Hanoitower using recursion 
*/

#include<bits/stdc++.h>

using namespace std;

void Hanoitower(int N, string start, string middle, string end){
    if(N == 0) return;

    Hanoitower(N - 1, start, end, middle);
    cout << "Move tower " << N << " from " << start << " to "  << end << endl;
    Hanoitower(N - 1, middle, start, end);

}

int main(){
    int N = 3;
    Hanoitower(N, "start", "middle", "end");
    return 0;
}