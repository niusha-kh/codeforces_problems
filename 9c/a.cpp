#include <bits/stdc++.h>
using namespace std;

int n, cn;

void cnt(int c){
    if(c > n) return;
    cn++;
    cnt(10 * c);
    cnt(10 * c + 1);
}

int main(){
    cin >> n;
    cnt(1);
    cout << cn << endl;
    return 0;
}
