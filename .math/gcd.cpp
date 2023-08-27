#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    /*

    algorithm have same time complexity
    with __gcd;

    */

    while(a > 0 and b > 0){
        if(a > b){
            a = a % b;
        }else b = b % a;
    }
    if(a == 0) return b;
    return a;
}

int main(){
    /*
    file to find gcd of a and b;
    ex: gcd(98, 56) = 14;
    */

    cout << "Using function: " << gcd(98, 56) << endl;
    cout << "Using avaiable function: " << __gcd(98, 56) << endl;
    return 0;

}