#include <bits/stdc++.h>
using namespace std;

map <string, int> ma;
int n, m, arr[105];
vector <int> vec;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        ma[str]++;
    }
    sort(arr, arr + n);
    for(auto f : ma){
        vec.push_back(f.second);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int s1 = 0, s2 = 0;
    for(int i = 0; i < (int)vec.size(); i++){
        s1 += (vec[i] * arr[i]);
    }
    reverse(arr, arr + n);
    for(int i = 0; i < (int)vec.size(); i++){
        s2 += (vec[i] * arr[i]);
    }
    cout << s1 << " " << s2 << endl;
    return 0;
}
